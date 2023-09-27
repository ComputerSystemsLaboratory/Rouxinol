#include<iostream>
#include<string>

using namespace std;
int main(void){
  string str;
  cin >> str;
  int i;
  int a,b;

  while(str!="-"){
    cin >> a;
    for(i=0;i<a;i++){
      cin >> b;
      str=str.substr(b,str.size()-b)+str.substr(0,b);
    }
    cout << str << endl;
    cin >> str;
  }
  
}
