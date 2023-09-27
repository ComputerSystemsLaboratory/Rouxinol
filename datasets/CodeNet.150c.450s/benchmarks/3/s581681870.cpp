#include <iostream>
#include <string>

using namespace std;

class StringChanger {

public:
   StringChanger(string setText) :
      text{setText}
   {}

   bool Read() {
      string command;
      int a, b;
      string stringA;
      
      if (!(cin >> command)) {return false;}
      if (command == "print") {
         cin >> a >> b;
         Print(a, b);
      } else if (command == "reverse") {
         cin >> a >> b;
         Reverse(a, b);
      } else if (command == "replace") {
         cin >> a >> b >> stringA;
         Replace(a, b, stringA);
      } else {
         return false;
      }
      return true;
   }

private:
   void Print(unsigned int begin, unsigned int end) {
      int count = end - begin + 1;
      for (int i = 0; i < count; ++i) {
         cout << text[begin + i];
      }
      cout << endl;
   }
   void Reverse(unsigned int begin, unsigned int end) {
      for (int i = 0; begin + i < end - i; ++i) {
         char tmpChar = text[begin + i];
         text[begin + i] = text[end - i];
         text[end - i] = tmpChar;
      }
   }
   void Replace(unsigned int begin, unsigned int end, string newString) {
      int count = end - begin + 1;
      for (int i = 0; i < count; ++i) {
         text[begin + i] = newString[i];
      }
   }

   string text;

};

int main() {

   string str;
   cin >> str;
   int n;
   cin >> n;

   StringChanger strcgr(str);
   while (strcgr.Read());

   return  0;

}