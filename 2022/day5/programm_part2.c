#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char cargo[3][20] = {
        {'Z','N'},
        {'M','C','D'},
        {'P'}
    };

    
    char line[30];

    int amount;
    int start;
    int end;

    int cargoLengths[] = 
    {
        strlen(cargo[0]),
        strlen(cargo[1]),
        strlen(cargo[2]),
        strlen(cargo[3]),
        strlen(cargo[4]),
        strlen(cargo[5]),
        strlen(cargo[6]),
        strlen(cargo[7]),
        strlen(cargo[8]),
    };

    FILE *file = fopen("input.txt", "r");
    
    while (fgets(line, sizeof(line), file))
    {
        if (line[0] == 'm')
        {
            sscanf(line, "move %d from %d to %d", &amount, &start, &end);
            start--;
            end--;

            for (int i = 0; i < amount; i++)
            {
                cargo[end][cargoLengths[end]+i] = cargo[start][cargoLengths[start]-amount+i];
            }

            cargoLengths[start] -= amount;
            cargoLengths[end] += amount;

            cargo[start][cargoLengths[start]] = '\0';
            cargo[end][cargoLengths[end]] = '\0';

            printf("1: %s\n2: %s\n3: %s", cargo[0],cargo[1],cargo[2] );
            printf("\n\n");
        }
    }

    for (int i = 0; i < sizeof(cargo)/sizeof(cargo[0]); i++)
    {
        printf("%c", cargo[i][strlen(cargo[i])-1]);
    }

    return 0;
}
