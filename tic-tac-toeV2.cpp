#include <iostream>
#include <ctime>
#include <limits>

void drawBoard(char* spaces);
void playerMove(char* spaces, char player);
void computerMove(char* spaces, char computer);
bool checkWinner(char* spaces, char player, char  computer);
bool checkTie(char *spaces);

int main(){
  char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' }; 
  char player = 'X';
  char computer = 'O';
  bool running = true;

  drawBoard(spaces);
  
  while(running){
     playerMove(spaces, player);
     drawBoard(spaces);

     if(checkWinner(spaces, player, computer)){
        running = false;
        break;
     } else if(checkTie(spaces)){
        running = false;
        break;
     }

     computerMove(spaces, computer);
     drawBoard(spaces);

     if(checkWinner(spaces, player, computer)){
        running = false;
        break;
     } else if(checkTie(spaces)){
        running = false;
        break;
     } 
  }
  return 0;
}

void drawBoard(char* spaces){
  system("clear");
  std::cout << "     |     |     " << '\n';
  std::cout << "  "<< spaces[6] << "  |  " << spaces[7] << "  |  "<< spaces[8] << "  " << '\n';
  std::cout << "_____|_____|_____" << '\n';
  std::cout << "     |     |     " << '\n';
  std::cout << "  "<< spaces[3] << "  |  " << spaces[4] << "  |  "<< spaces[5] << "  " << '\n';
  std::cout << "_____|_____|_____" << '\n';
  std::cout << "     |     |     " << '\n';
  std::cout << "  "<< spaces[0] << "  |  " << spaces[1] << "  |  "<< spaces[2] << "  " << '\n';
  std::cout << "     |     |     " << '\n';
}

void playerMove(char* spaces, char player){
  int number;
   do {
    std::cout << "Enter a spot to place a marker (1-9): ";

    while (!(std::cin >> number)) {
      std::cout << "Invalid input. Please enter a number between 1 and 9: ";
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // Check for a valid move BEFORE adjusting the index
    if (number >= 1 && number <= 9 && spaces[number - 1] == ' ') { // Check spaces[number - 1]
      spaces[number - 1] = player; // Adjust the index AFTER validating
      break;  // Exit the loop if the move is valid
    } else {
      std::cout << "Invalid spot. Please enter a number between 1 and 9.\n";
    }

  } while (true);
}

void computerMove(char* spaces, char computer){
  int number;
  srand(time(0));
  while(true){
    number = rand() % 9;

    if(spaces[number] == ' '){
      spaces[number] = computer;
      break;
    }
  }
}

bool checkWinner(char* spaces, char player, char  computer){
  //first row
  if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2]){
    spaces[0] == player ? std::cout << "YOU WIN!" : std::cout << "YOU LOSE!";
    return true;
  } 
  //second row
  else if(spaces[3] !=  ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5]){
    spaces[3] == player ? std::cout << "YOU WIN!" : std::cout << "YOU LOSE!";
    return true;
  }
  //third row
  else if(spaces[6] !=  ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8]){
    spaces[6] == player ? std::cout << "YOU WIN!" : std::cout << "YOU LOSE!";
    return true;
  }
  //first column
  else if(spaces[0] !=  ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6]){
    spaces[0] == player ? std::cout << "YOU WIN!" : std::cout << "YOU LOSE!";
    return true;
  }
  //second column
  else if(spaces[1] !=  ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7]){
    spaces[1] == player ? std::cout << "YOU WIN!" : std::cout << "YOU LOSE!";
    return true;
  }
  //third column
  else if(spaces[2] !=  ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8]){
    spaces[2] == player ? std::cout << "YOU WIN!" : std::cout << "YOU LOSE!";
    return true;
  }
  //left to right diagonal
  else if(spaces[0] !=  ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]){
    spaces[0] == player ? std::cout << "YOU WIN!" : std::cout << "YOU LOSE!";
    return true;
  }
  //right to left diagonal
  else if(spaces[2] !=  ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]){
    spaces[2] == player ? std::cout << "YOU WIN!" : std::cout << "YOU LOSE!";
    return true;
  }
  return false;
}

bool checkTie(char* spaces){

  for(int i = 0; i < 9; i++){
    if(spaces[i] == ' '){
      return false;
    }
  }
  std::cout << "It's a tie!";
  return true;
}