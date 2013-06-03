#include <stdio.h>
#define inActive 0
#define isActived 1
#define isPredicted 2
#define SIZE 16 * 16
#define LAYER 1

//The initial of cell
struct cell
{
    int layer;
    int column;
    int status;
    int ID;

};

//void cleanup(struct cell *);
void cell_initial(struct cell *);

int main(void)
{
    int i;
    //malloc the memory of the list of cell
    struct cell matrix[SIZE];
    //define a pointer to point the memory
    struct cell *p;

    p = &matrix[0]

    cell_initial(*p);
    p = &matrix[0];

}

//the initial function of cell
void cell_initial(struct cell *)
{
    int i;
    for(i = 0; i < SIZE; i++)
    {
        *p.layer = LAYER;
        *p.status = inActive;
        *p.ID = i % 4;
        *p.column = i / 4;
        p++;
    }


}

