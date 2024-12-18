/*to find a number using linear search algorithm*/

#include<stdio.h>
int main()
{
    int i,n,arr[100],flag=0;
    printf("Enter the limit:\n");
    scanf("%d",&n);
    
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int searchkey;
    printf("Enter the number to be searched:\n");
    scanf("%d",&searchkey);
    
    for(i=0;i<n;i++)
    {
        if(arr[i]==searchkey)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("Element is present");
    else
        printf("Element is not found");
    return 0;
}
