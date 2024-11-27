#include <stdio.h>
#include <cs50.h>

void print_blocks(int numBlocks);

int main(void)
{

    int numBlocks = get_int("How many blocks do you want?: ");

    print_blocks(numBlocks);
}



void print_blocks(int numBlocks)
{
    string block ="|?|";
    for(int i=0; i< numBlocks; i++)
    {
    printf("%s", block);
    }
    printf("\n");
}
