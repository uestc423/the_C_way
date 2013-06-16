#include <stdio.h>
#include <stdlib.h>
#include "cell.h"
#include "define.h"



int main(void)
{

    //define a pointer;
    pMatrix p;

    //set  memory
    p = (pMatrix)malloc(SIZE * sizeof(Matrix));

    //pointer evaluation
    if (p)
    {
        cell_initial(p);
        //show_cell_status(p);
    }
    else
    {
        printf("Pointer is null!\n");
    }
    free(p);
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
               ptr->id,
               ptr->column);
        ptr++;
    }
}
