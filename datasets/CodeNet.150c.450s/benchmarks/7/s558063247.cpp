#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int m[10];
  for(int i = 0;i < 10;i++){
    cin >> m[i];
  }
  sort(m,m+10);
  cout << m[9] << endl << m[8] << endl << m[7] << endl;
}