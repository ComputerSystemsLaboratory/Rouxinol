#include <iostream>
#include <string>

using namespace std;

int main() {

   string str;
   cin >> str;

   while (str != "-") {
      int m;
      cin >> m;

      for (int i = 0; i < m; ++i) {
         int h;
         cin >> h;

         str = str.substr(h) + str.substr(0, h);
      }

      cout << str << endl;

      cin >> str;
   }

   return 0;

}