
#include <stdio.h>
#define INACTIVE 0
#define ISACTIVED 1
#define ISPREDICTED 2
#define SIZE 16 * 16
#define FIRST 1

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
void show_cell_status(struct cell *);

int main(void)
{
    int i;
    //malloc the memory of the list of cell
    struct cell matrix[SIZE];
    //define a pointer to point the memory
    struct cell *p;

    p = &matrix[0];

    cell_initial(p);
    show_cell_status(p);
    return 0;
}

//the initial function of cell
void cell_initial(struct cell * ptr)
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

void show_cell_status(struct cell * ptr)
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
