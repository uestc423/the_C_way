#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define INACTIVE 0
#define ISACTIVED 1
#define ISPREDICTED 2
#define SIZE 1600 * 1600
#define FIRST 1



int main(void)
{

    //define a pointer;
    pMatrix p;

    //set  memory
    p = (pMatrix)malloc(SIZE * sizeof(Matrix));
<<<<<<< HEAD
    printf("%u", p);
=======
>>>>>>> e34ca618ee6978556d0a90a80b508133e96d83cf
    //pointer evaluation
    if (p)
    {
        cell_initial(p);
<<<<<<< HEAD


=======
        
>>>>>>> e34ca618ee6978556d0a90a80b508133e96d83cf
        //show_cell_status(p);
    }
    else
    {
        printf("Pointer is null!\n");
    }
<<<<<<< HEAD

=======
>>>>>>> e34ca618ee6978556d0a90a80b508133e96d83cf
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
