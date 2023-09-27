#include<iostream>
#include<stack>
using namespace std;
int main(){
  stack<int> chu;
  int i=0;
  int input;
  int hairetu[111];
  cin>>input;
  chu.push(input);
  while(cin>>input){
    if(input!=0){
      chu.push(input);
    }else{
      hairetu[i]=chu.top();
      chu.pop();
      i++;
    }
  }
  for(int j=0;j<=i-1;j++){
    cout<<hairetu[j]<<endl;
  }
  
}