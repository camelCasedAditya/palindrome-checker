/*
  Aditya Chandrashekaran
  9/6/2024
  Allows user to input a string and tells the user if it is a palindrome or not.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
  // Create input char array
  char input[81];

  // Create parsed input char array
  char parsedInput[81];

  // add null character to parsed input
  parsedInput[0] = '\0';

  // Create array where the reverse of the input will be stored
  char reverse[81];

  // prompts user
  cout << "Enter your string to check if it is a palindrome" << endl;
  cin.get(input, 81); // Gets user input up to 81 charactets
  cin.get(); // Kills return character

  // removes all non alphanumeric characters and stores it into parsed input
  for (int a = 0; a < strlen(input); a++) {
    if (isalpha(input[a]) || isdigit(input[a])) {
      int length = strlen(parsedInput);
      parsedInput[length] = tolower(input[a]);
      parsedInput[length+1] = '\0';
    }
  }

  // reverses the parsed input array
  for (int i = 0; i < strlen(parsedInput); i++) {
    reverse[i] = parsedInput[strlen(parsedInput)-1-i];
  }
  reverse[strlen(parsedInput)] = '\0';

  // if the reversed array equals the parsed array then the input was a palindrome
  if (strcmp(reverse, parsedInput) == 0) {
    cout << "It is a palindrome" << endl;
  }
  else {
    cout << "It is not a palindrome" << endl;
  }
  return 0;
}
