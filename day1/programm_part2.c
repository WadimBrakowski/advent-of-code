#include <stdio.h>

int IndexOfSmallestNumber(int array[]){
    int smallest = array[0];
    int minIndex = 0;
    int size = sizeof(array) / sizeof(array[0]) + 1;
    for (int i = 0; i < size; i++)
        {
            if(array[i] < smallest)
            {
                smallest = array[i];
                minIndex = i;
            }
        }
    return minIndex;
}
int main() {

    char list[20][1000];
    char line[256];

    int currentSum = 0;
    int lastSum = 0;

    int topThree[3] = {4,1,3};

    FILE *file = fopen("list.txt", "r");

    if (file == NULL)
    {
        printf("File not found!\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file)) {
        if (line[0] == '\n' || line[0] == '\0') {

            if (topThree[IndexOfSmallestNumber(topThree)] < currentSum){
                topThree[IndexOfSmallestNumber(topThree)] = currentSum;
            }
            printf("Current top 3: %d, %d, %d \n", topThree[0],topThree[1],topThree[2]);
            currentSum = 0;


        }
        else  {
            // Parse to int
            // add to sum

            currentSum = currentSum + atoi(line);
            printf("Input: %d \n", atoi(line));
        }
    }

    fclose(file);  // Schließen der Datei

    printf("Sum: %d \n", topThree[0]+topThree[1]+topThree[2]);

    while (1)
    {
        /* code */
    }

    return 0;

}
