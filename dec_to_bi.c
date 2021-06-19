#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    system("cls");
    printf("Enter a Decimal Number \n");
    int n ,i;
    scanf("%d" , &n);
    int a[10];
    for( i = 0 ; n > 0 ; i++)
    {
        a[i] = n%2;
        n = n / 2 ;
    }
    printf("The Binary is \n");
    for (i =i-1 ; i >= 0; i--)
    {
        printf("%d" , a[i]);
    }
    
    return 0;
}
