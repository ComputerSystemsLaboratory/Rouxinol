#include <iostream>
#include <string>

using namespace std;

int main() {

   int n;
   cin >> n;

   int point[2]{};

   while (n--) {
      string card[2];
      cin >> card[0] >> card[1];

      if (card[0] > card[1]) {
         point[0] += 3;
      } else if (card[0] < card[1]) {
         point[1] += 3;
      } else {
         ++point[0];
         ++point[1];
      }
   }

   cout << point[0] << " " << point[1] << endl;

   return 0;

}