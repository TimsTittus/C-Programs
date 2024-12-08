//to print a given triangular star pattern
#include<stdio.h>
int main()
{
    // printf("     *\n");
    // printf("    * *\n");
    // printf("   * * *\n");
    // printf("  * * * *\n");
    // printf(" * * * * *\n");
    // printf("* * * * * *\n");
    int n,i,j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for (j = 1; j <=i; j++)
        {
           printf("*");
        }
        printf("\n");
    }
}
