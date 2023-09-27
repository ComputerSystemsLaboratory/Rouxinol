#include<iostream>
#include<string>
using namespace std;

int main(){
  int i,n;
  string foot[1000];
  while(1){
    int count=0;
    cin >> n;
    if(n==0)break;
    for(i = 0; i < n; i++){
      cin >> foot[i];
    }
    
    for(i = 0; i < n-1; i++){
      if((foot[i]=="lu" && foot[i+1]=="ru")||(foot[i]=="ru" &&foot[i+1]=="lu" )||(foot[i]=="ld" &&foot[i+1]=="rd") ||(foot[i]=="rd" &&foot[i+1]=="ld"))count++;
    }
    cout << count << endl;
  }
  return 0;
}