#include <stdio.h>

//The initial of cell
struct cell
{
    int layer;
    int column;
    int value;
    int status[2];
    int ID;
        
}

void cleanup(struct cell *);
void cell_initial(struct cell *);

int main(void)
{
    int i;
    //malloc the memory of the list of cell
    struct cell *p;
    //define a pointer to point the memory
    *p = (struct *)calloc(16 * 16 * strlen(cell));
    for(i = 0;i < 256; i++)
    {
        cell_initial(*p);
    }
    return 0;
    
    
}

