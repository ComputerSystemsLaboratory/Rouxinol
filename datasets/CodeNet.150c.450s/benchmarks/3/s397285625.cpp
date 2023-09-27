#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
  string str,p,que,tmp;
  int q,a,b;
  char temp;
  cin >> str;
  cin >> q;
  for(int i=0;i<q;i++){
    cin >> que >> a >> b;
    if(que == "replace"){
      cin >> p;
      str = str.replace(a,b - a + 1,p);
    }
    else if(que == "reverse"){
      reverse(str.begin() + a,str.begin() + b + 1);
    }
    else if(que == "print"){
      cout << str.substr(a,b - a + 1) << endl;
    }
  }
}

      
  
  