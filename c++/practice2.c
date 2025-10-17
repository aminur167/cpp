#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        int min=arr[i];
        int min_idx=i;

        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                min_idx=j;
            }
        }

        int temp=arr[min_idx];
        arr[min_idx]=arr[i];
        arr[i]=temp;
    }
    printf("Sorted list:");

    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}