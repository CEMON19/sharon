#include<stdio.h>
void getn(int *n)
{
    printf("enter n\n");
    scanf("%d",n);
}
void get_input(int a[n],int n,int i)
{ 
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    i++;
}
int addn(int n,int sum,int i,int a[n])
{
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    sum+=a[i];
    i++;
}
void get_output(int sum)
{
    printf("sum=%d",sum);
}
int main()
{
    int n,a[n],i,sum=0;
    getn(&n);
    get_input(n,i,a[n]);
    addn(n,sum,i,a[n]);
    get_output(sum);
    return 0;
}
