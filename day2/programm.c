#include <stdio.h>

int main(int argc, char const *argv[])
{

    FILE *file = fopen("input.txt", "r");

    if (file == NULL)
    {
        printf("File not found!\n");
        return 1;
    }
    else {
        printf("Reading file");
    }



    fclose(file);  // Schließen der Datei

    while (1)
    {
        /* code */
    }


    return 0;
}
