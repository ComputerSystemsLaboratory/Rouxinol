#include<iostream>
using namespace std;
int main(){
  int array[31]={0};
  int n;
  for(int i=0;i<28;i++){
    cin>>n;
    array[n]++;
  }
  for(int i=0;i<30;i++)
    if(array[i+1]==0) cout<<i+1<<endl;
  return 0;
}
   