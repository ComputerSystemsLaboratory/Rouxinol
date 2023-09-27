#include<iostream>
using namespace std;

int main(){
  char x[1000];
  while(1){
    cin >> x;

    int sum=0;
    for(int i=0;x[i]!='\0';i++){
      sum += (int)(x[i]-'0');
    }

    if(sum==0) break;
    else cout << sum << endl;
  }

  return 0;
}
    