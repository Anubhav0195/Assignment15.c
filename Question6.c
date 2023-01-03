#include<stdio.h>
int arr_reverse(int a[100],int n);
int main()
{
    int a[100],n,i;
    printf("Enter n\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    arr_reverse(a,n);
    printf("After reversing the array:\n",a[i]);

}
int arr_reverse(int a[100],int n)
{
    int i;
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",a[i]);

    }
}