#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter value:");
    int n = 0;
    scanf("%d", &n);
    int i;
    for (i = 0; i <= n; i++){
        int j;
        for (j = n; j > i - 1; j--){
                printf(" ");
        }

    {

        int z;
        for(z = 1; z <= 2 * i - 1; z++){
                    printf("*");
                }

        printf("\n");
    }
       }
       {

       int k;
       for(k = 0; k < i - 1; k++){
        printf(" ");
        }
        int y;
        for(y = 1; y <= 1; y++){
            printf("*");
        }
       }
    }


