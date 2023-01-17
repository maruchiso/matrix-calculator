
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    size_t rowA, rowB, colA, colB = 0;
    int what = 0;
    printf("MENU\n");
    printf("Chose what u want to do\n");
    printf("1.ADD (A + B)\n");
    printf("2.SUBTRACT (A - B)\n");
    printf("3.MULTIPLY(A * B)\n");
    printf("4.SCALAR MULTIPLY \n");
    printf("Enter your choice\n");
    
    scanf("%i", &what);

    if(what == 1){
    
        
        
        do
        {
            printf("\nEnter how many rows and columns for matrix A\n");
            scanf("%d%d", &rowA, &colA);
            printf("\nEnter how many rows and columns for matrix B\n");
            scanf("%d%d", &rowB, &colB);
        } while (rowA != rowB && colA != colB);
        int matrixA[rowA][colA];
        int matrixB[rowB][colB];
        printf("\n Enter matrix A\n");
        for(size_t i = 0; i < rowA; i++)
        {
            for(size_t j = 0; j < colA; j++)
            {
                scanf("%d", &matrixA[i][j]);
            }
            printf("\n");
        }
        printf("\n Enter matrix B\n");
        for(size_t i = 0; i < rowB; i++)
        {
            for(size_t j = 0; j < colB; j++)
            {
                scanf("%d", &matrixB[i][j]);
            }
            printf("\n");
        }
        for(size_t i = 0; i < rowA; i++)
        {
            for(size_t j = 0; j < colA; j++)
            {
                int value = matrixA[i][j] + matrixB[i][j];
                printf("%i", value);
                printf(" ");
            }
            printf("\n");
        }
    }
        else if(what == 2){
        do
        {
            printf("\nEnter how many rows and columns for matrix A\n");
            scanf("%d%d", &rowA, &colA);
            printf("\nEnter how many rows and columns for matrix B\n");
            scanf("%d%d", &rowB, &colB);
        } while (rowA != rowB && colA != colB);
        int matrixA[rowA][colA];
        int matrixB[rowB][colB];
        printf("\n Enter matrix A\n");
        for(size_t i = 0; i < rowA; i++)
        {
            for(size_t j = 0; j < colA; j++)
            {
                scanf("%d", &matrixA[i][j]);
            }
            printf("\n");
        }
        printf("\n Enter matrix B\n");
        for(size_t i = 0; i < rowB; i++)
        {
            for(size_t j = 0; j < colB; j++)
            {
                scanf("%d", &matrixB[i][j]);
            }
            printf("\n");
        }
        for(size_t i = 0; i < rowA; i++)
        {
            for(size_t j = 0; j < colA; j++)
            {
                int value = matrixA[i][j] - matrixB[i][j];
                printf("%i", value);
                printf(" ");
            }
            printf("\n");
        }
        }
    else if (what == 3){
        do
        {
            printf("\nEnter how many rows and columns for matrix A\n");
            scanf("%d%d", &rowA, &colA);
            printf("\nEnter how many rows and columns for matrix B\n");
            scanf("%d%d", &rowB, &colB);
        } while (colA != rowB);
        int matrixA[rowA][colA];
        int matrixB[rowB][colB];
        int matrixF[rowA][colB];
    printf("\n Enter matrix A\n");
        for(size_t i = 0; i < rowA; i++)
        {
            for(size_t j = 0; j < colA; j++)
            {
                scanf("%d", &matrixA[i][j]);
            }
            printf("\n");
        }
        printf("\n Enter matrix B\n");
        for(size_t i = 0; i < rowB; i++)
        {
            for(size_t j = 0; j < colB; j++)
            {
                scanf("%d", &matrixB[i][j]);
            }
            printf("\n");
        }
        for(size_t row = 0; row < rowA; row++)
    {
        for(size_t col = 0; col < colB; col++)
        {
            matrixF[row][col] = 0;
        }
    }

    for(size_t row = 0; row < rowA; row++)
    {
        for(size_t col = 0; col < colB; col++)
        {
            for(size_t i = 0; i < colA; i++){
            matrixF[row][col] += matrixA[row][i] * matrixB[i][col]; 
            }
        }
    }
    for(size_t i = 0; i < rowA; i++)
    {
        for(size_t j = 0; j < colB; j++)
        {
            printf("%i", matrixF[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    
        
    }
    else if(what == 4)
    {
        printf("\nEnter how many rows and columns for matrix A\n");
        scanf("%d%d", &rowA, &colA);
        int matrixA[rowA][colA];
        printf("\n Enter matrix \n");
        for(size_t i = 0; i < rowA; i++)
        {
            for(size_t j = 0; j < colA; j++)
            {
                scanf("%d", &matrixA[i][j]);
            }
            printf("\n");
        }
        int scalar = 0;
        printf("Enter scalar\n");
        scanf("%d", &scalar);
        printf("\n");
        for(size_t i = 0; i < rowA; i++)
        {
            for(size_t j = 0; j < colA; j++)
            {
                int tmp = matrixA[i][j];
                matrixA[i][j] = tmp * scalar;
                printf("%i", matrixA[i][j]);
                printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}