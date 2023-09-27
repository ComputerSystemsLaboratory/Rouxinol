#include<iostream>

#include<string>

using namespace std;

int main(){
  int A,B,C;
  int D=0;

  cin>>A>>B>>C;

  for(int x = A;x <= B; x++){
    if(C%x==0){
      D++;
    }
  }

cout<<D<<endl;

    return 0;
}
