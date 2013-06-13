#ifndef _CONNECTOR_H_
#include <stdio.h>
#include <stdlib.h>

typedef struct connector
{
    int weight;
    int local_id;               //本地ID由columnid和cellid组成。
    int target_id;              //目标ID由columnid和cellid组成。
}Connector, *pConnector;


#endif
