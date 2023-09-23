#include<iostream>
using namespace std;

int main(){
    int a;
    
    cin >> a;
    for(int i = 0 ; a != 0 ; i++){
      cout << "Case " << i+1 << ": " << a << endl;
      cin >> a;
    }
    
    return 0;
}