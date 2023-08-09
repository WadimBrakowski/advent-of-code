#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char input[] = "fghdhjfdggfhfgtvhfbgfghfdghfjfgvdhfjvhdfbgfhgvfgfhzujbnghhjghvxxdghgcfgtffgcfvhzfhfgf";
char buffer[4];

int counter = 0;
bool found = false;

int main(int argc, char const *argv[])
{
    for (int i = 0; i < strlen(input); i++)
    {
        counter++;
        buffer[i%4] = input[i];

        if (i>=3)
        {
            found = true;
            for (int j = 0; j < 4; j++)
            {
                for (int k =j+ 1; k < 4; k++)
                {
                    if(buffer[j] == buffer[k])
                    {
                        found= false;
                        break;
                    }
                }
                if(!found) break;
            }
        }
        
        if(found) break;
    }

    printf("%d\n", counter);
    
    return 0;
}
