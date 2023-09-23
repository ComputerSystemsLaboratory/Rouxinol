#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
  int num[3],c;
  cin >> c;
  for(int j=0; j<c;j++){
    for(int i=0; i<3;i++){
    cin >> num[i];
    }

  sort(num,num+3);
  if(pow(num[0],2)+pow(num[1],2)==pow(num[2],2))
    cout << "YES" <<endl;
  else
    cout <<"NO" << endl;
  }
}