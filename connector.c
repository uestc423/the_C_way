#include <stdio.h>
#include "connector.h"
#include "define.h"

#define CC 1600 * 1600 * 4 * 10


void connector_initial(pConnector ptr)
{
    int i;
    for(i = 0; i < CC; i++)
    {
        ptr->weight = randf();
        ptr->local_id = local_id_define();
        ptr->target_id = target_id_define();
    }
}

int local_id_define()
{
    ;
}

int target_id_define()
{
    
    ;
}