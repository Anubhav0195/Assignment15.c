#include<stdio.h>
float smallest(float a[100],int n);
int main()
{
    float a[100],res;
    int i,n;
    printf("Enter n\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]",i);
        scanf("%f",&a[i]);
    }
    res = smallest(a,n);
    printf("Smallest =%f",res);
}
float smallest(float a[10],int n)
{
    float smallest =a[0];
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]<smallest)
        {
            smallest =a[i];
        }
    }
    return(smallest);

}