#include<stdio.h>
int main()
{
    int i,a,b,p=0;
    printf("enter the a");
    scanf("%d",&a);
    printf("enter the b");
    scanf("%d,&b");
    for( i=1;i<=b;i++)
    {
        p=p+a;
    }
    printf("%d",p);
    return 0;
}
