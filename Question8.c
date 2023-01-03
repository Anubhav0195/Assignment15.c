#include<stdio.h>
int arr_unique(int a[100],int n);
int main()
{
    int a[100],i,n,count=0;
    printf("Enter n:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a=[%d]=",i);
        scanf("%d",&a[i]);
    }
    int sol=arr_unique(a,n);
    printf("The value of unique element is %d",sol);
    return 0;
}
int arr_unique(int a[100],int n)
{
    int i,j,count=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] ==a[j] && i!=j)
            {
                break;

            }
            if(j==n)
            {
                ++count;
            }
        }
    }
    return count;
    
}