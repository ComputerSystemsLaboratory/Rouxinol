#include <iostream>
#include <vector>
using namespace std;

int main()
{
 int a;
 int b;
 int c;
 vector<int> array;

 cin >> a >> b >> c;

 for( a; a <= b ; a++) {
   array.push_back(a);
 }

 int answer = 0;

 for( int i = 0; i < array.size(); i++) {
   if ( (c % array[i]) == 0){
     answer++;
   }
 }

 cout << answer << endl;
}