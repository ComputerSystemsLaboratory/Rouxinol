#include <iostream>
#include <string>

using namespace std;

int main() {

   string ring, find;

   cin >> ring;

   ring += ring;

   cin >> find;

   if (ring.find(find) == string::npos) {
      cout << "No";
   } else {
      cout << "Yes";
   }

   cout << endl;

   return 0;

}