#include<iostream>
using namespace std;

int main(){
  int n;
  int list[5000];

  while(cin>>n){
    if(n==0){
      break;
    }

    int temp=0;
    int max;

    for(int i=0; i<n; i++){
      cin >> list[i];

      temp += list[i];
      if(i==0){
        max = list[i];
      }
      if(max<temp){
        max=temp;
      }
      if( temp<0 ){
        temp=0;
      }
    }

    cout << max << endl;
  }

  return 0;
}