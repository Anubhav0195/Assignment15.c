#include<stdio.h>
int cou_duplicate(int a[100],int n);
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
    int sol=cou_duplicate(a,n);
    printf("The value of duplicate element is %d",sol);
    return 0;

}
int cou_duplicate(int a[100],int n)
{
    int i,j,count=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }
    }
    return count;
}