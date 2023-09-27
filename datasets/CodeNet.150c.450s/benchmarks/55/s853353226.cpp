#include <iostream>
using namespace std;
int main() {
string n;
while(true){
  cin>>n;
  if(n[0]-'0'==0)break;
  int sum=0;
  for(int i=0;n[i]!='\0';i++){
  sum+=n[i]-'0';
  }
  cout<<sum<<endl;
}
  return 0;
}