#include "algorithm"
#include "iostream"
#include "cmath"
#include "string"
#include "map"
using namespace std;


int main(){
  while(true){
  int n,min=1001,max=-1,sum=0,ten;
  cin >> n;
  if(!n)break;
  for(int i =0;i<n;i++){
    cin >> ten;
    sum+=ten;
    if(min>ten)min=ten;
    if(max<ten)max=ten;
  }
  cout << (sum-min-max)/(n-2) <<endl;
}
  return 0;
}