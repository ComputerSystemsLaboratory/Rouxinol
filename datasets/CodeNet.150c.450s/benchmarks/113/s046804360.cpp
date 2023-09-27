#include <iostream>
using namespace std;
int main()
{
  int i,x;
  for (i = 0;i < 10000 ; i++){
    cin >> x;
    if (x == 0) break;
    cout << "Case "<< i+1 <<": "<<x<<'\n';
    /* code */
  }

}