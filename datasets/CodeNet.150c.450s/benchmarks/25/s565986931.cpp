#include <iostream>

using namespace std;

int main() {

   const int size = 26;
   int count[size]{};
   char chara;

   while(cin >> chara) {
   
      if ('a' <= chara && chara <= 'z') {
         int id = chara - 'a';
         ++count[id];
      } else if ('A' <= chara && chara <= 'Z') {
         int id = chara - 'A';
         ++count[id];
      }

   }

   for (int i = 0; i < size; ++i) {

      char word = 'a' + i;
      cout << word << " : " << count[i] << endl;

   }

   return 0;

}