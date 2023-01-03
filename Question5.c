#include<stdio.h>
int adj_duplicate(int a[100],int n);
int main()
{
    int a[100],n,i;
    printf("Enter n:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
   int sol= adj_duplicate(a,n);
    printf("The adjacent duplicate of the array is %d",sol);
}
int adj_duplicate(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i] == a[i+1])
        {
            return a[i];
        }
    }
}