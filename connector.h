#ifndef _CONNECTOR_H_
#include <stdio.h>
#include <stdlib.h>

typedef struct connector
{
    int weight;
<<<<<<< HEAD
    int local_id;               //本地ID由columnid和cellid组成。
    int target_id;              //目标ID由columnid和cellid组成。
}Connector, *pConnector;


#endif
=======
    int column_id;
}Connector, *pConnector;


#endif
>>>>>>> e34ca618ee6978556d0a90a80b508133e96d83cf
