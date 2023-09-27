#include <iostream>
#include <cctype>

using namespace std;

int main(void) {
  char line[1200];
  string answer = "";
  cin.getline(line, sizeof(line));
  for(int i = 0; line[i] != '\0'; i++) {
    if(line[i] >= 'a' && line[i] <= 'z')
      answer += toupper(line[i]);
    else if(line[i] >= 'A' && line[i] <= 'Z')
      answer += tolower(line[i]);
    else
      answer += line[i];
  }
  cout << answer << endl;
  return 0;
}