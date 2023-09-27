#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
      string a,b;
      int ctn=0;
      cin>>a;
      while(cin>>b&&b!="END_OF_TEXT"){
            transform(b.begin(),b.end(),b.begin(),::tolower);
            if(a==b)ctn++;
      }
      cout<<ctn<<endl;
}