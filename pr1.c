#include <stdio.h>


int  main()
{
    int  a = 1,
    *p = &a;
    printf("%lu\n",sizeof(p));
    return 0;
}
