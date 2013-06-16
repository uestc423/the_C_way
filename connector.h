#ifndef _SYNAPSE_H_
#include <stdio.h>
#include <stdlib.h>

typedef struct synapse
{
    float weight;
    int local_id[2];               //local_id[0] = column id local_id[1] = cell id
    int target_id[2];              //[0] = column id [1] = cell id
}Synapse, *pSynapse;

typedef struct synapse_input
{
    float weight;
    int column_id;
    int input_id;
}Syninput, *pSynapse;

extern Synapse_init(pSynapse);
extern id_def(pSynapse);

#endif
