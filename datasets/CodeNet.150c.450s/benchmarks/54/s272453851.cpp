#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cctype>
#include <string>
#include <algorithm>
using namespace std;

int main(){
string W;
string T;
string END = "END_OF_TEXT";
int count = 0;
cin >> W;

while(1){
cin >> T;

if (T == END) {
  break;
}

//transform(T.begin(), T.end(), T.begin(), tolower);
transform(T.begin(), T.end(), T.begin(), ::tolower);
if(T == W){
  count++;
}
}
cout << count << endl;
return 0;
}
