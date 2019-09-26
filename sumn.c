#include<stdio.h>
void getn(int *n)
{
    printf("enter n\n");
    scanf("%d",n);
}
void get_input(int n,int a[n])
{ 
    int i;
    for(i=0;i<n;i++)
    {
    printf("enter next number\n");
    scanf("%d",&a[i]);
    }
}
int addn(int n,int sum,int a[n])
{
    int i;
    sum=0;
    for( i=0;i<n;i++)
    sum+=a[i];
    return sum;
 }
void get_output(int sum)
{
    printf("sum=%d",sum);
}
int main()
{
    int n,sum;
    getn(&n);
    int a[n];
    get_input(n,a);
    sum=addn(n,sum,a);
    get_output(sum);
    return 0;
}
    
