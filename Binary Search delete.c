/*Suppose, you have an array with randomly inserted element.Your task is find one element using binary search,
if found then delete this element else clearly print sorry, not found*/


#include<stdio.h>
int main()
{
    int array[20],i,j,n,swap,min,max,mid,search;
    printf("Enter the size less than 20: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Before sorting the array is:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",array[i]);
    }

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(array[j]>array[j+1])
            {
                swap=array[j];
                array[j]=array[j+1];
                array[j+1]=swap;
            }
        }
    }
    printf("\nAfter sorting the array is:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n",array[i]);
    }
    min=0,max=n-1;
    mid=(min+max)/2;

    printf("Enter the element you want to search : ");
    scanf("%d",&search);

    while (min <= max)
    {
        if (array[mid] == search)
        {
            printf("%d is present at index %d.\n", search, mid+1);
            for(i=mid; i<n-1; i++)
            {
                array[i]=array[i+1];
            }
            printf("After deletion %d the array is:\n",mid+1);
            for(i=0; i<n-1; i++)
            {
                printf("%d\n",array[i]);
            }

            break;
        }
        else if (array[mid] < search)
        {
            min = mid + 1;
        }
        else
            max = mid - 1;
        mid = (min + max)/2;
    }
    if (min > max)
        printf("Sorry Not found\n");


    return 0;
}
