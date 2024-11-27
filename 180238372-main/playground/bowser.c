#include <stdio.h>
#include <cs50.h>

void print_rows(int times);
void print_matrix(int number);


int main(void)
{
    int matrix=get_int("Introduce the number of the matrix: ");
    print_matrix(matrix);
}


void print_matrix(int number)
{
    for(int i=0; i<number; i++)
    {
        print_rows(number);
    }
}


void print_rows(int times)
{
    for(int i=0; i<times; i++)
    {
        printf("#");
    }
    printf("\n");
}


