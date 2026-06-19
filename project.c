#include <stdio.h>


// UFC GAME 


int main (){

  char name[20];
  char surname[20];
  char nationality[20];
  char nickname[20];
  char opponent_name[20];

 
 int hp=100;
  int opponent_hp=100;
 int kick=10;
  int punch=5;
  int round=1;


  printf("DANA WHITE : Welcome to the UFC. Who are you? \n");
  printf("Enter your name: ");
  scanf("%s", &name);
  printf("Enter your surname: ");
  scanf("%s", &surname);
  printf("Enter your nationality: ");
  scanf("%s", &nationality);

  printf("DANA WHITE : Welcome %s %s. Now chose your nickname? \n", name, surname);
  printf("1. The Eagle \n"); 
  printf("2. The Lion \n");
  printf("3. The Notorious \n");
  printf("4. The Only \n");
  printf("5. The ATAMAN\n");
  printf("Enter the number of your nickname: ");
  int nickname_choice;
  scanf(" %d", &nickname_choice);
  switch (nickname_choice) {
    case 1:
      sprintf(nickname, "The Eagle");
      break;
    case 2:
      sprintf(nickname, "The Lion");
      break;
    case 3:
      sprintf(nickname, "The Notorious");
      break;
    case 4:
      sprintf(nickname, "The Only");
      break;
    case 5:
      sprintf(nickname, "The ATAMAN");
      break;
    default:
      printf("Invalid choice. Default nickname assigned.\n");
      sprintf(nickname, "Rookie");
      break;
  }

  printf("DANA WHITE: Great Nickname! Now let's sign the contract. \n");
  printf("DANA WHITE: What is your weight class? \n");
  printf("1. Flyweight (up to 125 lbs) \n");
  printf("2. Bantamweight (126-135 lbs) \n");
  printf("3. Featherweight (136-145 lbs) \n");
  printf("4. Lightweight (146-155 lbs) \n");
  printf("5. Welterweight (156-170 lbs) \n");
  printf("6. Middleweight (171-185 lbs) \n");
  printf("7. Light Heavyweight (186-205 lbs) \n");
  printf("8. Heavyweight (206-265 lbs) \n");
  printf("Enter the number of your weight class: ");
  int weight_class_choice;
  scanf(" %d", &weight_class_choice);
  switch (weight_class_choice) {
    case 1:
      printf("You have chosen Flyweight. Good luck in the Octagon!\n");
      sprintf(opponent_name, "Deiveson Figueiredo");
      break;
    case 2:
      printf("You have chosen Bantamweight. Good luck in the Octagon!\n");
      sprintf(opponent_name, "Aljamain Sterling");
      break;
    case 3:
      printf("You have chosen Featherweight. Good luck in the Octagon!\n");
      sprintf(opponent_name, "José Aldo");
      break;
    case 4:
      printf("You have chosen Lightweight. Good luck in the Octagon!\n");
      sprintf(opponent_name, "Conor McGregor");
      break;
    case 5:
      printf("You have chosen Welterweight. Good luck in the Octagon!\n");
      sprintf(opponent_name, "Tyron Woodley");
      break;
    case 6:
      printf("You have chosen Middleweight. Good luck in the Octagon!\n");
      sprintf(opponent_name, "Israel Adesanya");
      break;
    case 7:
      printf("You have chosen Light Heavyweight. Good luck in the Octagon!\n");
      sprintf(opponent_name, "Jan Blachowicz");
      break;
    case 8:
      printf("You have chosen Heavyweight. Good luck in the Octagon!\n");
      sprintf(opponent_name, "Jairzinho");
      break;
    default:
      printf("Invalid choice. Default weight class assigned.\n");
      break;
  }

  printf("DANA WHITE: Now let's get ready for your first fight! \n");
  printf("DANA WHITE: Your opponent is %s. LETSS GOOO! \n", opponent_name);

printf("Round %d: \n", round);
  while (hp > 0 && opponent_hp > 0) {
    printf("Choose your move: \n");
    printf("1. Kick (10 damage) \n");
    printf("2. Punch (5 damage) \n");
    int move_choice;
    scanf(" %d", &move_choice);
    switch (move_choice) {
      case 1:
        printf("You used Kick! \n");
        opponent_hp -= kick;
        break;
      case 2: 
        printf("You used Punch! \n");
        opponent_hp -= punch;
        break;
      default:    
        printf("Invalid move. You missed your turn! \n");
        break;
    }

  return 0; 

}




