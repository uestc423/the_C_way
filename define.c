#include <time.h>
#include <stdlib.h>
#include <stdio.h>

double randf(void)
{
    srand(time(NULL));
    return (double)rand()/(double)RAND_MAX;
}

 