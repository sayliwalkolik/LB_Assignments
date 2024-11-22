#include <stdio.h>

void Display(int row, int col)
{

    int i = 0;
    int j = 0;

    for (i = 1; i <= row; i++)
    {

        for (j = 1; j <= col; j++)
        {

             if(j<=i){
                printf("* \t");
             }
             else{
                printf("# \t");
             }

        }
        printf("\n");
    }
}

int main()
{

    int iNo1 = 0;
    int iNo2 = 0;

    printf("Enter Number of Row\n");
    scanf("%d", &iNo1);

    printf("Enter Number of coloum\n");
    scanf("%d", &iNo2);

    Display(iNo1, iNo2);

    return 0;
}