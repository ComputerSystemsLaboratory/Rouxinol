#include <iostream>
using namespace std;

int main()
{

  int a,b,c = 0;

  for(int i=1; i>0; i++){
    cin >> a;
    if(a == 0){
      break;
    }
    else{
    cout << "Case " << i << ": " << a << endl;
    }
  }
}