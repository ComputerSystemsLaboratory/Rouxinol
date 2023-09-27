#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(){
  char letter;
  string line;

  getline(cin, line);

  for(int i = 0; i <= 1200; i++){
    letter = line[i];
    if(letter == '\0') break;
    if(isalpha(letter)){
      if(isupper(letter)) letter = tolower(letter);
      else letter = toupper(letter);
    }
    cout << letter;
  }
  cout << endl;
  return 0;
}