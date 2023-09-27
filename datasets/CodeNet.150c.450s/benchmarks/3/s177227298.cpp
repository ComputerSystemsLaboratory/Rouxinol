#include <iostream>
#include<string>
#include<cctype>
using namespace std;
int main() {
  string str,ab,order;
  char temp;
  int q,a,b;
  cin>>str>>q;
  while(q--){
    cin>>order;
    if(order=="replace"){
      cin>>a>>b>>ab;
      str.replace(a,b-a+1,ab);
    }
    if(order=="reverse"){
      cin>>a>>b;
      for(int i=b,j=a;i>=(b+a+1)/2;i--,j++){
      swap(str[j],str[i]);
      }
    }
    if(order=="print"){
      cin>>a>>b;
      cout<<str.substr(a,b-a+1)<<endl;
    }
  }
  return 0;
}