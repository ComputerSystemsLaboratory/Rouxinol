#include<iostream>
#include<string>
using namespace std;
int main() {
 string a; 
 while(cin >> a, a != "0") {
 int sum = 0;
 for(string::iterator it = a.begin(); a.end() != it; ++it) {
 sum+= (int)(*it-'0');
 }
 cout << sum << endl;
 }
 

}