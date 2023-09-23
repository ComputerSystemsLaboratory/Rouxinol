#include <iostream>
 
using namespace std;
 
int main(){
  int n1,n2,n3;

  cin >> n1 >> n2 >> n3;

 if(n1 < n2 && n2 < n3)
    cout << "Yes" << endl;
 else
    cout << "No" << endl;

  return 0;
   
}