#include<stdio.h>
int main()
{
    int n1;
    printf("Enter the value:");
    scanf("%d",&n1);
    int arr1[n1];
    printf("Enter the elements:");

    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }

    int n2;
    printf("Enter the value:");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter elements:");
    
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&n2);
    }

    int n=n1+n2;
    int meregd[n];
    int i=0,j=0,k=0;

    while (i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            meregd[k++]=arr1[i++];
        }
        else
        {
            meregd[k++]=arr2[j++];
        }
    }

    while(i<n1)
    {
        meregd[k++]=arr1[i++];
    }
    while (j<n2)
    {
        meregd[k++]=arr2[j++];
    }

    printf("Sorted list:");
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",meregd[i]);
    }

}