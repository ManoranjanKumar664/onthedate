#include<stdio.h>
#include<stdlib.h>

struct data
{
    int a:5;
    int b:20;
};

int main()
{
    struct data d1;
    FILE *mano=fopen("doc01.txt","w");
    if(mano==NULL)
    {
        puts("file didn't open");
        exit(1);
    }
    fprintf(&d1,sizeof(d1),1,mano);
    return 0;
}