#include<stdio.h>
int arc_sort(int a[100],int n);
int main()
{
    int a[100],i,n;
    printf("Enter n:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    arc_sort(a,n);
    printf("sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
int arc_sort(int a[100],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}