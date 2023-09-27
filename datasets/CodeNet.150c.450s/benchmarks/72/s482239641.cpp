#include <iostream>
#include <string>

using namespace std;

int main() {

   char char_A = 'A';
   char char_Z = 'Z';
   char char_a = 'a';
   char char_z = 'z';

   bool first = true;

   string inputStr;

   while (cin >> inputStr) {

      if (!first) {
         cout << " ";
      }

      first = false;

      int m = inputStr.length();

      for (int i = 0; i < m; ++i) {

         char inChar = inputStr[i];

         if (char_A <= inChar && inChar <= char_Z) {
            inChar += char_a - char_A;
         } else if (char_a <= inChar && inChar <= char_z) {
            inChar -= char_a - char_A;
         }

         cout << inChar;

      }

   }

   cout << endl;

   return 0;

}