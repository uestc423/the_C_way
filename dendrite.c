#include <stdio.h>
#include <stdlib.h>
#define DPN SIZE / 4
#define DDN SIZE * 4

void proximal_initial(pDendproximal ptr)
{
    int i;
    for(i = 0; i < DPN; i++)
    {
        ptr->boost = 1;
        ptr->overlap = 0;
        ptr->column_id = i ;
        ptr++;
    }
}

void distal_initial(pDenddistal ptr)
{
    int i;
    for(i = 0; i < SIZE; i++)
    {
        ptr->boost = 1;
        ptr->overlap = 0;
        ptr->cell[1] = i % 4;
        ptr->cell[0] = i / 4;
        ptr++;
        
    }
}

