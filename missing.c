#include<stdio.h>
void main()
{
    int sum=0,a[50],n,i,s,miss;
    printf("enter the size of array");
    scanf("%d",&n) ;
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    s=(n*(n+1)/2);
    for(i=0;i<n-1;i++)
    {
        sum=sum+a[i];
    }
    miss=s-sum;
    printf("the missing number is: %d",miss);

}