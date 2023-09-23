#include<iostream>
#include<string>
using namespace std;

int main(){

string string;

getline(cin , string);

for(int i = 0;i < string.size(); i++){
  if (string[i] >= 'A' && string[i] <= 'Z') {
    string[i] += 32;
  }else if(string[i] >= 'a' && string[i] <= 'z'){
    string[i] -= 32;
  }
  cout << string[i];
}
cout << endl;


return 0;
}