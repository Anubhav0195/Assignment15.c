#include<stdio.h>
int arr_rotate(int a[100],int n);
int main()
{
    int a[100],i,d,n;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("Enter the value of d\n");
    scanf("%d",&d);
    for(i=0;i<n;i++)
    {
        printf("a=[%d]",i);
        scanf("%d",&a[i]);
    }
    arr_rotate(a,n);
    printf("Rotated array is \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
int arr_rotate(int a[100],int n)
{
    int i,j,temp,d;
    for(j=0;j<d;j++)
    {
        temp =a[0];
        for(i=0;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=temp;
    }
}