#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter any elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:");

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

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}