#include<stdio.h>
void getn(int *n)
{
    printf("enter n\n");
    scanf("%d",n);
}
void get_input(int a[n],int n)
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
    int a[n],n,i,sum=0;
    get_input(*n);
    add(n,sum,i,a[n]);
    get_output(sum);
    return 0;
}
