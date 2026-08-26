#include "random.h"
#include <stdio.h>
#include <stddef.h>
#include <time.h>
#include <stdlib.h>

void rand_string(char* s, size_t size)
{
    //srand( (unsigned)time(NULL) );
    for (int i = 0; i < size; i++)
        s[i] = (rand() % 26) + 97;
    
}