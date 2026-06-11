
#include <stdio.h>
#include <string.h>

//SHOPING CHART PROGRAM

int main() {

    char noun[50]= "";
    char verb[50]= "";
    char adjective1[50]= "";
    char adjective2[50]= "";
    char adjective3[50]= "";

    printf("Enter your adjective: ");
    fgets(adjective1,sizeof(adjective1),stdin);

    printf("Enter your noun (person or animal): ");
    fgets(noun,sizeof(noun),stdin);

    printf("Enter your adjevtive: ");
    fgets(adjective2,sizeof(adjective2),stdin);

    printf("Enter your verb ( -ing): ");
    fgets(verb, sizeof(verb), stdin);

    printf("Enter your adjective: ");
    fgets(adjective3, sizeof(adjective3), stdin);

    printf("%s\n", noun );
    printf("%s\n", verb );
    printf("%s\n", adjective1 );
    printf("%s\n", adjective2 );
    printf("%s\n", adjective3 );



    return 0;
}
