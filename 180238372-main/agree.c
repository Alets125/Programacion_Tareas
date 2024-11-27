code # include <stdio.h>
# include <cs50.h>

//Mi programa debe de tener mi nombre al menos para que no me copeen, pero pues nadie me pide la tarea jeje
//Jesus Alexis Garnica Mendoza

int main(void)
{
    char agree = get_char("Do you agree?: ");
    if(agree == 'y' || agree=='Y'){
        printf("You agreed!\n");
    }
    else if (agree == 'n' || agree=='N'){
        printf("You didn't agreed...\n");
    }
    else {
        printf("Nice try fella, trying something different...\n");
    }
}
