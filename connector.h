#ifndef _CONNECTOR_H_
#include <stdio.h>
#include <stdlib.h>

typedef struct connector
{
    double weight;
    int local_id;               //����ID��columnid��cellid��ɡ�
    int target_id;              //Ŀ��ID��columnid��cellid��ɡ�
}Connector, *pConnector;


#endif
