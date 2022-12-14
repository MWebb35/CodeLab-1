#include <iostream> //Allows Input/Output
#include <string> // Allows String and String Manipulation
using namespace std; //Declares the use of the standard mainspace

int main() {

  //Decleration of variables
    int firstNumber = 1; //Declares the data type, the variable name and then assigns it a variable 
    bool iCanCode = true;
    char hopefulGrade = 'a';
    double myDecimal = 1.0;
    string minimalSentance = "y"; //This could have used a char as there is only one character currently residing in the variable. However, the variable name indicates that there could be a change with "Sentence" rather than Char. Considering it isn't a constant variable, intialising this with a String data type allows for future changes.
    int keyMash = 13213123;
    float mysteryDataType = 5.6f;


  
    /*Error check for the outputs. This is to see if they would output without throwing the program, which would indicate that the wrong data type had been used*/

  //Variable List
    std::cout << "First Number: " << firstNumber << "\n";
    std::cout << "I Can Code: " << iCanCode << "\n"; // This will output one, which is the equivalent to true
  
    std::cout << "Hopeful Grade " << hopefulGrade << "\n";
    std::cout << "My Decimal: " << myDecimal << "\n";
    std::cout << "Minimal Sentence: " << minimalSentance << "\n"; 
    std::cout << "Key Mash: " << keyMash << "\n";
    std::cout << "Mystery Data type (Float): " << mysteryDataType;

    return 0;
}