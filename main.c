#include <stdio.h>
#define inActive 0
#define isActived 1
#define isPredicted 2
#define SIZE 16 * 16

//The initial of cell
struct cell
{
    int layer;
    int column;
    int status;
    int ID;

};

//void cleanup(struct cell *);
//void cell_initial(struct cell *);

int main(void)
{
    int i;
    //malloc the memory of the list of cell
    struct cell matrix[256];
    //define a pointer to point the memory
    void *p;
    p = &matrix[0];

    return 0;


}

