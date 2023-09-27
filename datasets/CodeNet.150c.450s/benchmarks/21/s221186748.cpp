#include<iostream>
using namespace std;

int x_3 (int x);

int main(){
    int x;
    
    cin >> x;
   cout << x_3(x) << endl;
   return 0;
}

int x_3 (int x){
    x = x * x * x;
    return x;
}
