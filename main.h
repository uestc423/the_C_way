#ifndef _MAIN_H_
#include <stdio.h>
#include <stdlib.h>

typedef struct cell
{
    int layer;                        //layer declaration
    int column;                       //column declaration
    int status;                       //status declaration
    int id;
    int connector_cell_id;

    }Matrix, *pMatrix;

extern void cell_initial(pMatrix p);
extern void show_cell_status(pMatrix p);
#endif
