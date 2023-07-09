#include <stdio.h>
int main() {

    char list[20][1000];
    char line[256];

    int currentSum = 0;
    int lastSum = 0;

    FILE *file = fopen("list.txt", "r");

    if (file == NULL)
    {
        printf("File not found!\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file)) {
        if (line[0] == '\n' || line[0] == '\0') {

            // compare with last sum
            // set as lastSum

            printf("Next elve\n");

            if ( currentSum > lastSum)
            {
                //printf("CurrentSum (%d) is bigger than LastSum (%d): \n",currentSum,lastSum);
                lastSum = currentSum;
                currentSum = 0;
                printf("CurrentSum: %d", currentSum);

            }
            else if (currentSum < lastSum)
            {
                currentSum = 0;
            }

        }
        else  {
            // Parse to int
            // add to sum

            currentSum = currentSum + atoi(line);
            printf("Input: %d \n", atoi(line));
        }
    }

    fclose(file);  // Schließen der Datei

    printf("%d", lastSum);

    while (1)
    {
        /* code */
    }

    return 0;

}
