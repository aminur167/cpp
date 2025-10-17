#include<stdio.h>
int main()
{
    int n;
    printf("Enter the element:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int val;
    printf("Enter the value you want to search:");
    scanf("%d",&val);
    int index=-1;
    int left=0,right=n-1;


    while (left<=right)
    {
        int mid=left+(right-left)/2;

        if(arr[mid]==val)
        {
            index=mid;
            break;
        }
        else if(arr[mid]>val)
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    
    if(index==-1)
    {
        printf("Not found\n");
    }
    else
    {
        printf("The value %d is found at index %d\n",val,index);
    }
    

}