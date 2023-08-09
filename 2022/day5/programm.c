#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char cargo[3][10] = {
        {'Z','N'},
        {'M','C','D'},
        {'P'}
    };

    
    char line[30];

    int amount;
    int start;
    int end;

    FILE *file = fopen("input.txt", "r");
    
    while (fgets(line, sizeof(line), file))
    {
        if (line[0] == 'm')
        {
            sscanf(line, "move %d from %d to %d", &amount, &start, &end);
            char crane;

            for (int i = 0; i < amount; i++)
            {
                crane = cargo[start - 1][strlen(cargo[start-1])-1];

                cargo[end -1][strlen(cargo[end-1])] = crane;

                cargo[start - 1][strlen(cargo[start-1])-1] = '\0';
            }
        }
        
    }

    for (int i = 0; i < sizeof(cargo)/sizeof(cargo[0]); i++)
    {
        printf("%c", cargo[i][strlen(cargo[i])-1]);
    }
    
    return 0;
}
