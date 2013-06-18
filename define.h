#ifndef _DEFINE_H_
#define _DEFINE_H_

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 1600 * 1600
#define DPN SIZE / 4
#define DDN SIZE * 4
#define CC SIZE * 4 * 10 //synapse count

#define INACTIVE 0
#define ISACTIVED 1
#define ISPREDICTED 2
#define FIRST 1

extern float randf(void);

#endif

