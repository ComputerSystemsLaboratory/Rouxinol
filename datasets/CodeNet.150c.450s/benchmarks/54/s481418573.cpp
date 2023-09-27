#include <iostream>
#include <string>

using namespace std;

void ChangeAtoa(string& inputStr) {

   string outputStr;

   int max = inputStr.length();

   for (int i = 0; i < max; ++i) {
   
      char inChar = inputStr[i];
      
      if ('A' <= inChar && inChar <= 'Z') {
         inChar += 'a' - 'A';
      }

      outputStr += inChar;
      
   }

   inputStr = outputStr;

}

int main() {

   long count = 0;
   string word, line;

   cin >> word >> line;
   ChangeAtoa(word);

   while (line.compare("END_OF_TEXT") != 0) {

      ChangeAtoa(line);

      if (line.compare(word) == 0) {
         ++count;
      }

      cin >> line;

   }

   cout << count << endl;

   return 0;

}