#include <time.h>
#include <stdlib.h>
#include <stdio.h>

float randf(void)
{
    srand(time(NULL));
    return (float)rand()/(float)RAND_MAX;
}

 