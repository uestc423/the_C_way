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

}

void cleanup(struct cell *);
void cell_initial(struct cell *);

int main(void)
{
    int i;
    //malloc the memory of the list of cell
    void *p;
    //define a pointer to point the memory
    p = (struct *)calloc(SIZE, sizeof(struct cell));

    return 0;


}

