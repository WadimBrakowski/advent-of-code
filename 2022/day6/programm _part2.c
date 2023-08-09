#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char input[] = "dfgfhfghhhzdgfddfsnjdvjdsfbhdfbdfbhdfvbhdsfbhvdfbskvjklaskncnjvskjahczrebvdsdabsakjcdncnsdfkjhskjdhsknsvkbbsdkjdnsjeusdjk";
char buffer[14];

int counter = 0;
bool found = false;

int main(int argc, char const *argv[])
{
    for (int i = 0; i < strlen(input); i++)
    {
        counter++;
        buffer[i%14] = input[i];

        if (i>=3)
        {
            found = true;
            for (int j = 0; j < 14; j++)
            {
                for (int k =j+ 1; k < 14; k++)
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
