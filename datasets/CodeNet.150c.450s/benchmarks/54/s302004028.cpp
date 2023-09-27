#include<iostream>
#include<string>
#include<map>
#include <algorithm>

using namespace std;
int main () {
 string W, str;
 map<string, int> data;
 cin >> W;
 while(cin >> str, str != "END_OF_TEXT") {
   transform(str.begin(), str.end(), str.begin(), ::tolower);
   data[str] += 1;
 }

 cout << data[W] << endl;

}