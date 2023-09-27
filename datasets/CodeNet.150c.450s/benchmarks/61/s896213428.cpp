#include <iostream>

using namespace std;

int main(){
  while(1){
    int N,A,B,C,X;
    cin >> N >> A >> B >> C >> X;
    if(N==0&&A==0&&B==0&&C==0&&X==0)break;
    int count=0;
    for(int i=0;i<N;i++){
      int y;
      cin >> y;
      for(int j=0;count<=10001;j++){
        bool ok=false;
        if(X==y){
          ok=true;
        }
        count++;
        X=(A*X+B)%C;
        if(ok)break;
      }
    }
    count--;
    if(count>10000)count = -1;
    cout << count << endl;
  }
}

