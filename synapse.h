#ifndef _SYNAPSE_H_
#include <stdio.h>
#include <stdlib.h>

typedef struct synapse
{
    float weight;
    int local_id[2];               //����ID��columnid��cellid��ɡ�
    int target_id[2];              //Ŀ��ID��columnid��cellid��ɡ�
}Synapse, *pSynapse;

extern Synapse_init(pSynapse);
extern id_def(pSynapse);

#endif
