#include <stdio.h>
#include <string.h>

char x[100], y[100], z[100];
int c[100][100];
void lcs(int, int);

int main()

{   
    printf("Enter the sequence 1: ");
    scanf("%s", x);

    printf("Enter the sequence 2: ");
    scanf("%s", y);

    int m = strlen(x);
    int n = strlen(y);

    printf("%d %d \n", m, n);

    for(int i = 0; i <= m; i++)
    {
        for(int j = 0; j <= n;j++)
        {
            c[i][j] = 0;
        }
    }

    
    
    lcs(m, n);


    return 0;
}

void lcs(int m, int n){


    for(int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(x[i - 1] == y[j - 1])
            {
                c[i][j] = c[i - 1][j - 1] + 1;
            }

            else
            {
                c[i][j] = c[i - 1][j] > c[i][j - 1] ? c[i - 1][j] : c[i - 1][j];
            }
        }
    }

    for(int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            printf("%d ", c[i][j]);
        }

        printf("\n");
    }

}