#ifndef _SYNAPSE_H_
#define _SYNAPSE_H_
#include <stdio.h>
#include <stdlib.h>
#include "define.h"

typedef struct synapse
{
    float weight;
    int local_id[2];
    int target_id[2];
}Synapse, *pSynapse;

typedef struct synapse_input
{
    float weight;
    int column_id;
    int input_id;
}Syninput, *pSyninput;

extern void Synapse_init(pSynapse ptr);
extern void sunapse_def(pSynapse ptr);
extern void syninput_def(pSyninput ptr);
extern void syninput_initial(pSyninput ptr);
#endif
