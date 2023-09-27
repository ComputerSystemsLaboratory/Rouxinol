#include<iostream>
#include<string>
using namespace std;
int main(){
    string x;
    int a,b;
    while(1){
        cin >> x >> a;
        if(x == "-") break;
        for(int i=0;i<a;i++){
            cin >> b;
            x=x.substr(b,x.size()-b)+x.substr(0,b);
        }
        cout << x << endl;
  }
  
}
  
  
  
  

