#include <stdio.h>
#include "synapse.h"
#include "define.h"
#include "main.h"

#define CC 1600 * 1600 * 4 * 10 //synapse count


void synapse_initial(pSynapse ptr)
{
    int i;
    for(i = 0; i < CC; i++)
    {
        ptr->weight = randf();
        id_def(ptr);
    }
}

void id_def(pSynapse ptr)
{
    int i;
    for(i = 0; i < CC; i++)
    {
        ptr->local_id[0] = i / 4;
        ptr->local_id[1] = i % 4;
        ptr->target_id[1] = ptr->local_id[1];
        if((i / 4) < SIZE - 10)
        {
            ptr->target_id[0] = i / 4;
        }
        else
        {
            ptr->target_id[0] = i / 4 - SIZE + 10;
        }
        ptr++;
    }
}