#include <stdio.h>
#include <stdlib.h>

#define INACTIVE 0
#define ISACTIVED 1
#define ISPREDICTED 2
#define SIZE 16000 * 16000
#define FIRST 1

//The initial of cell
typedef struct cell
{
    int layer;
    int column;
    int status;
    int ID;
    int CCI;                //connector_cell_id

}Matrix, *pMatrix;

//void cleanup(struct cell *);
void cell_initial(pMatrix);
void show_cell_status(pMatrix);

int main(void)
{

    //define a pointer;
    pMatrix p;

    //set a 16 * 16 memory
    p = (pMatrix)malloc(SIZE * sizeof(Matrix));
<<<<<<< HEAD
    if(p)                        //evaluate the pointer is exist
    {
        cell_initial(p);
        show_cell_status(p);
    }
    else
    {
        printf("memory is null");
    }
=======
    cell_initial(p);
    show_cell_status(p);
>>>>>>> e844f477293fabc8e6f024c011d2a97c2758b5dd
    return 0;
}

//the initial function of cell
void cell_initial(pMatrix ptr)
{
    int i;
    for(i = 0; i < SIZE; i++)
    {
        ptr->layer = FIRST;
        ptr->status = INACTIVE;
        ptr->ID = i % 4;
        ptr->column = i / 4;
        ptr++;
    }


}

void show_cell_status(pMatrix ptr)
{
    int i;
    for(i = 0; i < SIZE; i++)
    {
        printf("The cell's value = layer: %d, status: %d, ID: %d, column:%d\n",
               ptr->layer,
               ptr->status,
               ptr->ID,
               ptr->column);
        ptr++;
    }
}
