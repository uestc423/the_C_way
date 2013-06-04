#include <stdio.h>

#define INACTIVE 0
#define ISACTIVED 1
#define ISPREDICTED 2
#define SIZE 16 * 16
#define FIRST 1

//The initial of cell
typedef struct cell
{
    int layer;
    int column;
    int status;
    int ID;

}Matrix, *pMatrix;

//void cleanup(struct cell *);
void cell_initial(pMatrix);
void show_cell_status(pMatrix);

int main(void)
{
<<<<<<< HEAD
    //define a pointer;
    pMatrix p;
    //set a 16 * 16 memory
    p = (pMatrix)malloc(SIZE * sizeof(Matrix));
=======
    //define a struct cell pointer
    struct cell * matrix;
    //malloc a memory

    matrix = (struct cell *)malloc(SIZE * sizeof(struct cell));
>>>>>>> f39ecf766464acd001e4d1e9af37ce6c819b6434

    cell_initial(matrix);
    show_cell_status(matrix);
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
