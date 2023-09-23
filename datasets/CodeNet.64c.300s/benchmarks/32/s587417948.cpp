#include<iostream>
using namespace std;

int main(){
  int num,i,max,min;
  long long sum;
  cin >> num;
  int x;
  for(i=0;i<num;i++){
    cin >> x;
    if(i==0){
      sum=x;
      max=x;
      min=x;
    }else{
      sum+=x;
      if(max<x){
	max=x;
      }else if(min>x){
	min=x;
      }
    }
  }
  cout << min <<" "<< max<< " " << sum<< endl;
  

}