#include <stdio.h>
#include <stdlib.h>

#define INACTIVE 0
#define ISACTIVED 1
#define ISPREDICTED 2
#define SIZE 16 * 16
#define FIRST 1

//The initial of cell
typedef struct cell
{
    int layer;                        //layer declaration
    int column;                       //column declaration
    int status;                       //status declaration
    int id;
    int connector_cell_id;

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
    cell_initial(p);
    show_cell_status(p);
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
        ptr->id = i % 4;
        ptr->connector_cell_id = 0;
        ptr->column = i / 4;
        ptr++;
    }


}

void show_cell_status(pMatrix ptr)
{
    int i;
    for(i = 0; i < SIZE; i++)
    {
        printf("The cell's value = layer: %d, status: %d, ID: %d, CCI: %d column:%d\n",
               ptr->layer,
               ptr->status,
               ptr->id,
               ptr->connector_cell_id,
               ptr->column);
        ptr++;
    }
}
