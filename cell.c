#include <stdio.h>
#include <stdlib.h>
#include "cell.h"
#include "define.h"
#include "dendrite.h"



int main(void)
{

    //define a pointer;
    pMatrix cell;
    pDenproximal proximal;
    pDendistal distal;


    //set  memory
    cell = (pMatrix)malloc(SIZE * sizeof(Matrix));
    proximal = (pDenproximal)malloc(DPN * sizeof(Denproximal));
    distal = (pDendistal)malloc(DDN * sizeof(Dendistal));


    //pointer evaluation
    if (cell && proximal && distal)
    {
        cell_initial(cell);
        proximal_initial(proximal);
        distal_initial(distal);
        //show_cell_status(p);
    }
    else
    {
        printf("Pointer is null!\n");
        exit(1);
    }
    //free(p);
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

