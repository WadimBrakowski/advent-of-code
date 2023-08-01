#include <stdio.h>
#include <string.h>



int main(int argc, char const *argv[])
{

    char line[20];
    int count;
    int start1, end1, start2, end2;

    FILE *file = fopen("input.txt", "r");


    while (fgets(line, sizeof(line), file))
    {
        sscanf(line, "%d-%d,%d-%d", &start1, &end1, &start2, &end2);

        if ((start1 >= start2 && end1 <= end2) || (start2 >= start1 && end2 <= end1))
        {
            count++;
        }
        
    }
    printf("%d", count);
    fclose(file);
    
    return 0;
}
