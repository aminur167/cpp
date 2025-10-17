#include<stdio.h>
int main()
{
    int n1;
    printf("Enter any element:");
    scanf("%d",&n1);
    int arr1[n1];
    printf("Enter elements:");

    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }

    int n2;
    printf("Enter any element:");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter elements:");

    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }

    int n=n1+n2;
    int merged[n];
    int i=0,j=0,k=0;

    while (i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            merged[k++]=arr1[i++];
        }

        else
        {
          merged[k++]=arr2[j++];       
        }
    }
    
    
    while (i<n1)
    {
        merged[k++]=arr1[i++];
    }
    while (j<n2)
    {
        merged[k++]=arr2[j++];
    }

    printf("Sorted array:");

    for(int i=0;i<n;i++)
    {
        printf("%d ",merged[i]);
    }
       
    

}