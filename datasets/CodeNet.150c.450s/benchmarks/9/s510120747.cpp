#include<iostream>
#include<string>
using namespace std;
int main(){
  string str;
  int n;
  while(cin >> str){
    if(str=="-") break;
    cin >> n;
    for(int i=0,h;i<n;i++){
      cin >> h;
      string cat = str.substr(0,h);
      str.erase(0,h);
      str+=cat;
    }
    cout << str << endl;
  }
}
