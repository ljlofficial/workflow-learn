#include "fuction.c"
#define MAX 5

int main()
{
    printf("#####Github workflow learning program (for C/C++)#####");
    int a,b,c;
    printf("input a b c:\n");
    scanf("%d %d %d",&a,&b,&c);
    addmat(a,b,c);
    printf("%d\n",c);
    countmat(a,b,c);
    printf("%d\n",c);
    transmat(a,b,c);
    printf("%d\n",c);
    killmat(a,b,c);
    printf("%d\n",c);
    int a[MAX];
    for(int i=0;i<MAX;i++)
    {
        printf("input NO:%d\n",i+1);
        scanf("%d",&a[i]);
    }
    int *p;
    p=(int *)malloc(MAX*sizeof(int));
    for(int i=0;i<MAX;i++)
    {
        *(p+i)=a[i];
    }
    for(int i=0;i<MAX;i++)
    {
        printf("NO:%d value:%d\n",i+1,*(p+i));
    }
    free(p);
    return 0;
}
