#include<iostream>
using namespace std;

int main()
{
  int line[100],train,k=0;

  while(cin>>train){
    if(train==0){
      k--;
      cout<<line[k]<<endl;
    }else{
      line[k]=train;
      k++;
    }
  }
}