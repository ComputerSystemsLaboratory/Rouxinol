#include<iostream>
using namespace std;
int main(){
  int data;
  int i=1;
  cin>>data;
  while(data){
    cout<<"Case "<<i<<": "<<data<<endl;
    i++;
    cin>>data;
  }
  return (0);
}