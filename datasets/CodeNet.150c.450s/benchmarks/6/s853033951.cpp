#include <iostream>
#include <string>

using namespace std;

int main()
{

 int a;
 int b;
 int c;
 string answer;

 cin >> a >> b >> c;

 if (( a < b ) && ( b < c )) {
   answer = "Yes";
 } else {
   answer = "No";
 }
 cout << answer << endl;
}