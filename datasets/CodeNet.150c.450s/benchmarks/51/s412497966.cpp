#include <iostream>

using namespace std;

int main() {

  int attendance[30];

  int n;

  for(int i=0;i<30;i++) attendance[i]=0;

  for(int i=0;i<28;i++) {

    cin >> n;

    attendance[n-1]=1;

  }

  for(int i=0;i<30;i++) {

    if(attendance[i]==0) cout << i+1 << endl;

  }

  return 0;

}