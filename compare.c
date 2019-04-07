#include<stdio.h>
void get_input(int *a,int *b,int *c)
{
    printf("enter number 1\n");
    scanf("%d",a);
    printf("enter number 2\n");
    scanf("%d",b);
    printf("enter number 3\n");
    scanf("%d",c);
}
int compare(int a,int b,int c)
{
    if (a<b)
    {
        if (a<c)
        printf("smallest number is %d",a);
    }
    if (b<c)
    {
        if(b<a)
        printf("smallest number is %d",b);
    }
    if(c<a)
    {
        if(c<b)
        printf("smallest number is %d",c);
    }
}
int main()
{
    int a,b,c;
    get_input(&a,&b,&c);
    compare(a,b,c);
    return 0;
}
