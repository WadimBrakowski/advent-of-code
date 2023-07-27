#include <stdio.h>

/*
Opponent
A = Rock
B = Paper
c = Scissors

Player
X = Rock 1 Point
Y = Paper 2 Points
Z = Scissors 3 Points

Loss = 0 Points
Draw = 3 Points
Win = 6 Points

*/

int PointsForShape(char shape){

    static int stone = 1;
    static int paper = 2;
    static int scissors = 3;
    switch (shape)
    {
    case 'X':
        return stone;

    case 'Y':
        return paper;

    case 'Z':
        return scissors;
    }

}

int PointsForResult(char opponent, char player){

    // Loss conditions
    if ( opponent == 'A' && player == 'Z' || opponent == 'B' && player == 'X'|| opponent == 'C' && player == 'Y') return 0;
    

    // Draw conditions
    else if ( opponent == 'A' && player == 'X' || opponent == 'B' && player == 'Y'|| opponent == 'C' && player == 'Z') return 3;

    // Win conditions
    else if ( opponent == 'A' && player == 'Y' || opponent == 'B' && player == 'Z'|| opponent == 'C' && player == 'X') return 6;


}


int main(int argc, char const *argv[])
{
    char line[6];

    char opponent;
    char player;

    int lineNumber = 0;

    int totalScore =0;
    FILE *file = fopen("input.txt", "r");

    if (file == NULL)
    {
        printf("File not found!\n");
        return 1;
    }
    else {
        printf("Reading file \n");
    }

    while (fgets(line, sizeof(line), file)) {
        
        totalScore += PointsForShape(line[2])+ PointsForResult(line[0],line[2]);
        

    }

    fclose(file);  // Schließen der Datei

    printf("Final Score: %d \n", totalScore);

    while (1)
    {
        //printf("Press any key to exit!");
    }


    return 0;
}
