#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int p1p0[2];
    char numero[100];
    pipe(p1p0);
    int pid = fork();

    if(pid == 0)
    {
        close(p1p0[0]);
        close(1);
        dup(p1p0[1]);
        close(p1p0[1]);

        execl("a.out", "a.out", "file.txt", NULL);
        return -1;
    }

    read(p1p0[0], numero, sizeof(numero));
    if(atoi(numero) == 12)
        printf("Il programma funziona corretamente\n");
    else
        printf("Il programma non sta funzionando nel corretto modo\n");

    return 0;
}