#include <stdio.h>
#include "synapse.h"
#include "define.h"
#include "cell.h"




void synapse_initial(pSynapse ptr)
{
    int i;
    for(i = 0; i < CC; i++)
    {
        ptr->weight = randf();
        ptr->local_id[0] = i / 4;
        ptr->local_id[1] = i % 4;
        ptr->target_id[1] = ptr->local_id[1];
        if((i / 4) < (SIZE - 10))
        {
            ptr->target_id[0] = i / 4;
        }
        else
        {
            ptr->target_id[0] = (i - SIZE) / 4 + 10;
        }
        ptr++;
    }
}

void synapse_show(pSynapse ptr)
{
    int i;
    for(i = 0; i < CC; i++)
    {
        printf("weight is %d, local is [%d %d], target_id is [%d %d]",
               ptr->weight,
               ptr->local_id[0],
               ptr->local_id[1],
               ptr->target_id[0],
               ptr->target_id[1]);
        ptr++;
    }
}
