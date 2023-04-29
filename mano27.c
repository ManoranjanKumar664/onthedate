#include<stdio.h>
#include<stdlib.h>

typedef struct mano
{
    int a, b;
    double d;
}person;

int main()
{
    FILE *p01=fopen("gome02.txt","wb");
    if(p01==NULL)
    {
        puts("can't open file");
        exit(1);
    }

    person p1, p2;
    p1.a=90;
    p1.b=49;
    p1.d=94.4;
    fwrite(&p1,sizeof(p1),1,p01);
    fclose(p01);

    FILE *p02=fopen("gome02.txt","rb");
    if(p02==NULL)
    {
        puts("can't open file");
        exit(1);
    }
    fread(&p2,sizeof(p2),1,p02);
    printf("%d %d %lf",p2.a, p2.b, p2.d);
    fclose(p02);
    return 0;
    
}