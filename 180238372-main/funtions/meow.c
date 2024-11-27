#include <stdio.h>
#include <cs50.h>
// Este le pide que busque la funcion Meow
void sayMeow(int times);

int main(void)
{
    int num = get_int("How many times do you like to say meow?: ");
    sayMeow(num);
}

void sayMeow(int times)
{
    while(true)
    {
        printf("Meow\n");
        times--;
        if(times == 0)
        {
            break;
        }
    }
}
