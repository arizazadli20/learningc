#include <stdio.h>
#include <stdbool.h>

int main(){

    bool isRunning = true;
    char response = '\0';

while(isRunning){

    printf("You are playing a game\n");
    printf("Would u like to contunie: (Y - YES, N- NO) ");
    scanf(" %c",&response);

    if (response != 'Y' && response != 'y' ) {
        isRunning = false;
    };
};

    printf( "You exit the game" );
return 0;





   };




