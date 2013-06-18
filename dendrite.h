#ifndef _DENDRITE_H_
#define _DENDRITE_H_
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

extern void proximal_initial(pDenproximal ptr);
extern void distal_initial(pDendistal ptr);
#endif
