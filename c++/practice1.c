#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number of value:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;

        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    printf("Sorted list:");

    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}