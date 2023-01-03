#include<stdio.h>
float greatest(float a[100],int n);
int main()
{
    float a[100],res;
    int i,n;
    printf("Enter n:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%f",&a[i]);
    }
    res = greatest(a,n);
    printf("Greatest =%f",res);
    return 0;
}
float greatest(float a[10],int n)
{
    float greatest = a[0];
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]>greatest)
        {
            greatest = a[i];
        }
    }
    return(greatest);
}