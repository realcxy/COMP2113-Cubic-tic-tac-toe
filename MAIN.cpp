#include <iostream>
#include <cstdlib>
#include <cmath>
#include "game.cpp"
using namespace std;


void menu()
{
    printf("-----------------------\n");
    printf("-----------------------\n");
    printf("----1.PLAY   0.EXIT----\n");
    printf("-----------------------\n");
    printf("-----------------------\n");
}

int main()
{
    int x = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("Please choose:> ");
        scanf("%d", &x);
        switch (x)
        {
         case 1:
             game();
             break;
         case 0:
             printf("Bye bye!\n");
             break;
         default:
             printf("Error input(please choose from the menu)\n");
             break;
        }

    } while(x);
    return 0;
}
