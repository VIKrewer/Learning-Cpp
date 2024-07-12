#include <iostream>
#include <cctype>

int main(){
  std::string questions[] = {"1. Who made Minecraft?",
                             "2. What's the most broke weapon in Brawlhalla",
                             "3. Who's the best player in Brawlhalla?",
                             "4. Who made Linux?"};

  std::string options[4][4] = {
    {"A. Notch", "B. Michael", "C. Joshua", "D. Bolsonaro"},
    {"A. Battle Boots", "B. Sword", "C. Katars", "D. Scythe"},
    {"A. Fiend", "B. Pavelski", "C. Boomie", "D. Sandstorm"},
    {"A. Paul Allen", "B. Bill Gates", "C. Linus Torvalds", "D. Steve Jobs"},
  };

  int questionsSize = sizeof(questions)/sizeof(questions[0]);
  int optionsSize = sizeof(options[0])/ sizeof(options[0][0]);
  char answersKey[] = {'a', 'a', 'd', 'c'};
  char guess;
  int score = 0;


  std::cout << "***************************\n";
  std::cout << "*        QUIZ GAME        *\n";
  std::cout << "***************************\n\n";

  for(int i = 0; i < questionsSize; i++){
    std::cout << questions[i] << "\n\n";
      for(int j = 0; j < optionsSize; j++){
        std::cout << options[i][j] << '\n';
      }
      std::cin >> guess;
      guess = tolower(guess);
      if(guess == answersKey[i]){
        std::cout << "CORRECT!\n";
        score++;
      } else{ 
        std::cout << "WRONG!\n";
        std::cout << "The right answer is: " << answersKey[i] << '\n';
      };
  }

  std::cout << "***************************\n";
  std::cout << "*         RESULTS         *\n";
  std::cout << "***************************\n\n";

  std::cout << "YOUR CORRECT GUESSES: " << score << '\n';
  std::cout << "# of QUESTIONS: " << questionsSize << '\n';
  std::cout << "Guessed " << (score/(double)questionsSize)*100 << "%";
}