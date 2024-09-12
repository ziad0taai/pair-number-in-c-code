#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter the values of n: ");
    scanf("%d",&n);
    if (n%2==0){
        printf("n is a pair number");
    }
      else {
            printf("n is impair number");
        }
    return 0;
}
