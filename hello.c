#include<stdio.h>
void get_input(int *a,int *b)
{
    printf("enter number 1\n");
    scanf("%d",a);
    printf("enter number 2\n");
    scanf("%d",b);
}
int add2nos(int a,int b,int *c)
{
    *c=a+b;
}
 void get_output(int a,int b,int c)
 {
     printf("%d+%d=%d",a,b,c);
 }    
int main()
{
    int a,b,c;
    get_input(&a,&b);
    add2nos(a,b,&c);
    get_output(a,b,c);
    return 0;
}

