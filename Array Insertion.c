#include<stdio.h>
int main()
{
    int array[10],i,a,n,position,found=0;
    printf("How many?\n");
    scanf("%d",&n);
    printf("array\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Before inserting the array is:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n",array[i]);
    }
    printf("Which position you want to insert?");
    scanf("%d",&a);
    for(i=n-1; i>=a-1; i--)
    {
        array[i+1]=array[i];
    }
    printf("enter the element:\n");
    scanf("%d",&array[a]);
    printf("After inserting the array is:\n");
    for(i=0; i<=n; i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}
