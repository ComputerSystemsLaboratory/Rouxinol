#include <iostream>
#include <string>

using namespace std;

int main()
{

 int a;
 int b;
 string answer;

 cin >> a >> b;

 if( a < b ){
   answer = "a < b";
 } else if ( a > b ) {
   answer = "a > b";
 } else if ( a == b ) {
   answer = "a == b";
 }

 cout << answer << endl;
}