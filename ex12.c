#include <stdio.h>

int main (int argc, char *argv[])
{
    int i =0;
    printf("the argument count is %d",argc);
    if (argc == 1) { 
        printf("You only have one argument,The value is %s, You suck.\n",argv[0]);
    }else if (argc>1 && argc <4)
    {
        printf("Here's your arguments:\n");

        for(i=0;i<argc;i++){
            printf("%s ",argv[i]);
        }
        printf("\n");
    }else{
        printf("You have too many arguments. You suck.\n");
    }

    return 0;
}
