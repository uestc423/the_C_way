#ifndef _SYNAPSE_H_
#include <stdio.h>
#include <stdlib.h>

typedef struct synapse
{
    float weight;
    int local_id[2];               //本地ID由columnid和cellid组成。
    int target_id[2];              //目标ID由columnid和cellid组成。
}Synapse, *pSynapse;

extern Synapse_init(pSynapse);
extern id_def(pSynapse);

#endif
