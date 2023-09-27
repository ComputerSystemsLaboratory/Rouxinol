#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {

   string input;
   cin >> input;

   while(input.compare("0") != 0) {

      int sum = 0;

      stringstream change;

      int max = input.length();

      for (int i = 0; i < max; ++i) {

         int value = 0;
         change.str("");
         change.clear(stringstream::goodbit);

         change << input[i];
         change >> value;
         sum += value;

      }

      cout << sum << endl;

      cin >> input;

   }

   return 0;

}