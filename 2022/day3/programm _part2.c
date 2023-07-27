#include <stdio.h>
#include <stdbool.h> 

int Priority(char itemType){

    if (itemType == 'a') return 1;
    else if (itemType == 'b') return 2;
    else if (itemType == 'c') return 3;
    else if (itemType == 'd') return 4;
    else if (itemType == 'e') return 5;
    else if (itemType == 'f') return 6;
    else if (itemType == 'g') return 7;
    else if (itemType == 'h') return 8;
    else if (itemType == 'i') return 9;
    else if (itemType == 'j') return 10;
    else if (itemType == 'k') return 11;
    else if (itemType == 'l') return 12;
    else if (itemType == 'm') return 13;
    else if (itemType == 'n') return 14;
    else if (itemType == 'o') return 15;
    else if (itemType == 'p') return 16;
    else if (itemType == 'q') return 17;
    else if (itemType == 'r') return 18;
    else if (itemType == 's') return 19;
    else if (itemType == 't') return 20;
    else if (itemType == 'u') return 21;
    else if (itemType == 'v') return 22;
    else if (itemType == 'w') return 23;
    else if (itemType == 'x') return 24;
    else if (itemType == 'y') return 25;
    else if (itemType == 'z') return 26;
    else if (itemType == 'A') return 27;
    else if (itemType == 'B') return 28;
    else if (itemType == 'C') return 29;
    else if (itemType == 'D') return 30;
    else if (itemType == 'E') return 31;
    else if (itemType == 'F') return 32;
    else if (itemType == 'G') return 33;
    else if (itemType == 'H') return 34;
    else if (itemType == 'I') return 35;
    else if (itemType == 'J') return 36;
    else if (itemType == 'K') return 37;
    else if (itemType == 'L') return 38;
    else if (itemType == 'M') return 39;
    else if (itemType == 'N') return 40;
    else if (itemType == 'O') return 41;
    else if (itemType == 'P') return 42;
    else if (itemType == 'Q') return 43;
    else if (itemType == 'R') return 44;
    else if (itemType == 'S') return 45;
    else if (itemType == 'T') return 46;
    else if (itemType == 'U') return 47;
    else if (itemType == 'V') return 48;
    else if (itemType == 'W') return 49;
    else if (itemType == 'X') return 50;
    else if (itemType == 'Y') return 51;
    else if (itemType == 'Z') return 52;
}




int main(int argc, char const *argv[])
{
    char line[60];

    int score;
    int backpackLength;

    bool found = false;



    FILE *file = fopen("input.txt", "r");


    while (fgets(line, sizeof(line), file))
    {
        // get length of backpack
        for (int i = 0; i < sizeof(line); i++)
        {
            
            if(line[i] == '\0')
            {
                backpackLength = i;
                break;
            }
            
        }

        for (int i = 0; i < backpackLength/2; i++)
        {
            for (int j = backpackLength-1; j >= backpackLength/2; j--)
            {
                if (line[i] == line[j])
                {
                    printf("%c\n", line[j]);
                    score += Priority(line[j]);
                    found = true;
                    break;
                }
            }

            if(found) break;
            
        }
        found = false;
    }

    printf("%d\n", score);
    
    return 0;
}
