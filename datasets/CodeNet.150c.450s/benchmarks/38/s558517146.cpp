#include<iostream>
#include<algorithm>
using namespace std;

int main(void){

  int n,i,a,b,c;
  cin >> n;
  for(i=0;i<n;i++){
    cin >> a >> b >> c;
    int num[3];
    num[0] = a;
    num[1] = b;
    num[2] = c;

    sort(num,num+3);

    if(num[2]*num[2] == num[0]*num[0] + num[1]*num[1])
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;

}