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
    printf("Before deleting the array is:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n",array[i]);
    }
    printf("Which element you want to delete?");
    scanf("%d",&a);
    for(i=0; i<n; i++)
    {
        if(array[i]==a)
        {
            position=i;
            found=1;
            break;
        }
    }
    if(found==1)
    {
        for(i=position;i<n-1;i++)
        {
            array[i]=array[i+1];
        }
    }
    else
        printf("%d\n element is not present",a);
    printf("After deleting the array is:\n");
    for(i=0; i<n-1; i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}
