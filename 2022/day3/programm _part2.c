#include <stdio.h>
#include <stdbool.h> 
#include <string.h>

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
    char line[3][50];

    int score;

    bool found = false;
    int counter = 0;



    FILE *file = fopen("input.txt", "r");

    


    while (fgets(line[counter], sizeof(line[counter]), file))
    {
        counter++;
        if (counter == 3)
        {
            for (int i = 0; i < strlen(line[0]); i++)
            {
                for (int j = 0; j < strlen(line[1]); j++)
                {
                    for (int k = 0; k < strlen(line[2]); k++)
                    {
                        if(line[0][i] == line[1][j] &&
                           line[0][i] == line[2][k])
                        {


                            score += Priority(line[2][k]);
                            printf("Char: %c\n", line[2][k]);
                            found = true;
                            break;
                        }
                    }
                    if(found) break;
                }
                if(found) break;
            }

            counter = 0;
            found = false;

            
        }
        
    }

    printf("Score: %d\n", score);
    
    return 0;
}
