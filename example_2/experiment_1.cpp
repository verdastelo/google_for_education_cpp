// experiment_1.cpp: Chetan Anand
// Description: Illustrate how to recover from an error using cin.clear() and cin.ignore().
// Google's code: https://developers.google.com/edu/c++/solutions/1-3
// Difference: Their code is more compact. Neither their nor mine code produces sensible output for floats. 

#include <iostream>
using namespace std;

int main() {
  int input_var = 0;
  do {
    cout << "Enter a number (-1 = quit): ";
    // Google's code is more compact. I broke it into two to understand the logic. 
    cin >> input_var;
    if (!input_var) {
      cin.clear(); 
      cin.ignore (512, '\n');
//      cout << "You entered a non-numeric. Exiting..." << endl;
//      break;
    }
    if (input_var) {
      cout << "You entered " << input_var << endl; 
    }
    if (input_var == -1) {
      cout << "You entered -1. Goodbye! " << endl;
    }
  } while (input_var != -1); // As long as input_var is not equal to -1, the condition is true and the loop executes. This is a case of double negatives. 
  cout << "All done." << endl;
  return 0;
}
