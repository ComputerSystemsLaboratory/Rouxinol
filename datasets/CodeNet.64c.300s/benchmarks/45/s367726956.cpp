#include<iostream>

using namespace std;

int main(){
  while(1){
    int N,M,P;
    cin >> N >> M >> P;
    if(N==0&&M==0&&P==0)break;
    int sum=0;
    int mem;
    for(int i=1;i<=N;i++){
      int input;
      cin >> input;
      sum+=input;
      if(i==M)mem=input;
    }
    sum=sum*(100-P);
    cout << (mem?sum/mem:0) << endl;
  }
}

