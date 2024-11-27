#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string answer = get_string("What's your name?: ");
    string m1 = strcat(answer, " Hello!");
    // int age = get_int("How old are you?: ");
    printf("%s\n", m1);
    return 200;
    
}
