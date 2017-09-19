#include <stdio.h>

int main()
{
    char a[4] = {'1','2','3','4'};
         char *p = a;
    printf("指针的长度:%lu\n",sizeof(p));
    printf("数组的长度: %lu\n",sizeof(a));

    return 0;
}
