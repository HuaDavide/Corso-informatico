#include <stdio.h>

int main(int argc, char *argv[])
{
    double num1, num2, rapporto;

    do
    {
        printf("Inserisci il primo numero: ");
        scanf("%lf", &num1);
        printf("Inserisci il secondo numero: ");
        scanf("%lf", &num2);

        if (num1 != 0 && num2 != 0)
        {
            if (num1 >= num2)
            {
                rapporto = num2 / num1;
                printf("il rapporto è: %lf\n", rapporto);
            }
            else
            {
                rapporto = num1/num2;
                printf("il rapporto è: %lf\n", rapporto);
            }
        }

    } while (num1 != 0 && num2 != 0);

    printf("programma terminata\n");
    return 0;

}