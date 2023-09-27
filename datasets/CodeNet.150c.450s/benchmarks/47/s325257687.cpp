#include <iostream>
#include <string>
using namespace std;

int main()
{

 int w;
 int h;
 int x;
 int y;
 int r;
 string answer;

 cin >> w >> h >> x >> y >> r;

 if ( ( x + r ) > w) {
   answer = "No";
 } else if ( ( y + r ) > h ) {
   answer = "No";
 } else if ( x < r ) {
   answer = "No";
 } else if ( y < r ) {
   answer = "No";
 } else {
   answer = "Yes";
 }

 cout << answer << endl;

}