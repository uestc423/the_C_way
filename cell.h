#ifndef _CELL_H_
#define _CELL_H_
#include <stdio.h>
#include <stdlib.h>

typedef struct cell
{
    int layer;                        //layer declaration
    int column;                       //column declaration
    int status;                       //status declaration
    int id;

}Matrix, *pMatrix;

void cell_initial(pMatrix p);
void show_cell_status(pMatrix p);
#endif
