// experiment_2.cpp: Chetan Anand
// Description: A program that prints "Hello World!" 4 times on a line for 6 lines, where each is printed in a field of 17 spaces.
// Google's correct solution: https://developers.google.com/edu/c++/solutions/1-1 
// Difference: I didn't use <iomanip> and setw(17). It was a mistake. 

#include <iostream>
#include <iomanip> 
using namespace std; 

int main() {
  for (int i = 0; i <= 6; i++) {
      for (int j = 0; j <= 4; j++) {
            cout << setw (17) << "Hello World! ";
      }
      cout << endl; 
  }
  return 0;
}
