#ifndef _DENDRITE_H_
#include <stdio.h>

typedef struct denproximal
{
    int overlap;
    int boost;
    int column_id;
}Denproximal, *pDenproximal;

typedef struct dendistal
{
    int overlap;
    int boost;
    int cell_id[2];
}Dendistal, *pDendistal;
#endif
