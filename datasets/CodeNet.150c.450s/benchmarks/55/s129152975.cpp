#include<iostream>
#include<cstring>
using namespace std;

int main(){
  string num;
  while(cin>>num && num!="0"){
    int sum=0;
    for(unsigned int i=0;i<num.size();i++){
      sum+=(int)(num[i]-'0');
    }
    cout<<sum<<endl;
  }
  return 0;
}