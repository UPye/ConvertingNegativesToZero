#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Number of elemtns
  const int NUM_ELEMENTS = 5;
  
  // User values
  vector <int> userVals ( NUM_ELEMENTS );
  
  // Loop index
  unsigned int i;
  
   
   // Prompt user to populate vector
   cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
   for (i = 0; i < userVals.size(); ++i) {
      cout << "Value: ";
      cin >> userVals.at(i);
   }
   
   // Convert negatives to 0
   for (i = 0; i < userVals.size(); ++i) {
      if (userVals.at(i) < 0) {
         userVals.at(i) = 0;
      }
   }
   
   // Print numbers
   cout << "New values:";
   for (i = 0; i < userVals.size(); ++i) {
      cout << " " << userVals.at(i);
   }
   cout << endl;
   
   return 0;
}
