#include <iostream>
using namespace std;

int main(){

  int n,p;
  while(cin>>n>>p&&n!=0&&p!=0){
    int can[50];
    int kazu=p;

    // initialize
    for(int i=0;i<n;i++){
      can[i]=0;
    }
    int count=0;
    while(count<=1000000){
      if(kazu==can[count%n]){
        cout << count%n << endl;
        break;
      }
      if(p==0){
        p=can[count%n];
        can[count%n]=0;
      }else{
        p--;
        can[count%n]++;
      }
      count++;
    }
  }

  return 0;
}