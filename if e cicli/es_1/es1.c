#include <stdio.h>

int main()
{
    double num1, num2;
    double num3;

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
                num3 = num2 / num1;
                printf("il rapporto è: %lf\n", num3);
            }
            else
            {
                num3 = num1/num2;
                printf("il rapporto è: %lf\n", num3);
            }
        }

    } while (num1 != 0 && num2 != 0);

    printf("programma terminata\n");
    return 0;

}