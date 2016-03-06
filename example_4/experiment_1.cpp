// Author: Chetan Anand
// Description:  A number guessing game. Comes up with a number and asks users to guess it. Provides hints based on user input;
// whether the number is smaller or larger than what the user guessed. 

#include <iostream> 
#include <cstdlib> 
#include <ctime>
#include <iomanip> 
using namespace std; 

int main() {
  int signed computer_guess, user_guess; 
  srand(time (NULL)); 
  computer_guess = rand() % 100 + 1; 
  
  cout << setw(80) << right <<  "I have guessed a number. The number is greater than 1 but less than 100.\n";
  cout << setw(80) << right << "It can also be 1 or 100. Can you guess the number?\n\n";
  
  cout << setw(80) << right << "You can quit the game anytime by entering -1.  \n\n"; 
 
  cout << setw(80) << left << "Enter your number here: ";
   do {
       if (!(cin >> user_guess)) {
             cin.clear(); 
             cin.ignore(512, '\n');
             cout << "Please enter a non-decimal number." << endl; 
       }
       else {
       if (user_guess > computer_guess) {
             cout << "Think of a smaller number. Your guess is too high.\n";
       }

       if (user_guess < computer_guess) {
             cout << "Think of a larger number. Your guess is too small.\n";
       }

       if (user_guess == computer_guess) {
             cout << "Congratulations! I had guessed " << computer_guess << endl; 
             break;  
       } 
       }
  } while (user_guess != -1); 

  cout << endl; 
  return 0;
}
