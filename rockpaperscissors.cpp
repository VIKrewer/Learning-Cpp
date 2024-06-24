#include <ctime>
#include <iostream>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {
  srand(time(NULL));

  char player;
  char computer;

  player = getUserChoice();
  showChoice(player);

  computer = getComputerChoice();
  chooseWinner(player, computer);

  return 0;
}

char getUserChoice() {
  char player;
  char choices[] = {'r', 'p', 's'};
  do {
    std::cout << "**Rock, Paper && Scissors**\n";
    std::cout << "***************************\n";
    std::cout << "'r' for Rock\n";
    std::cout << "'p' for Paper\n";
    std::cout << "'s' for Scissors\n\n";
    std::cout << "Enter your choice: ";
    std::cin >> player;
  } while (player != 'r' && player != 'p' && player != 's');

  return player;
}

char getComputerChoice() {
  int randChoice = (rand() % 3);
  switch (randChoice) {
  case 0:
    std::cout << "Computer chose Rock!\n";
    return 'r';
    break;
  case 1:
    std::cout << "Computer chose Paper!\n";
    return 'p';
    break;
  case 2:
    std::cout << "Computer chose Scissors!\n";
    return 's';
  }
}

void showChoice(char choice) {
  switch (choice) {
  case 'r':
    std::cout << "\nYou chose Rock!\n";
    break;
  case 'p':
    std::cout << "\nYou chose Paper!\n";
    break;
  case 's':
    std::cout << "\nYou chose Scissors!\n";
    break;
  default:
    std::cout << "\nInvalid choice!\n";
    break;
  }
}

void chooseWinner(char player, char computer) {
  switch (player) {
  case 'r':
    if (computer == 'r') {
      std::cout << "It's a tie!";
    } else if (computer == 'p') {
      std::cout << "You lose!";
    } else {
      std::cout << "You win!";
    }
    break;

  case 'p':
    if (computer == 'r') {
      std::cout << "You win!";
    } else if (computer == 'p') {
      std::cout << "It's a tie!";
    } else {
      std::cout << "You lose!";
    }
    break;

  case 's':
    if (computer == 'r') {
      std::cout << "You lost!";
    } else if (computer == 'p') {
      std::cout << "You win!";
    } else {
      std::cout << "It's a tie!";
    }
    break;
  }
}
