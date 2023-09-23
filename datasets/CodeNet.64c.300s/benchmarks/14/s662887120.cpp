#include<iostream>
using namespace std;

void Check(int a, int b);

int main(){
    int a, b;
    
    cin >> a;
    cin >> b;
    
    Check(a, b);
    return 0;
}

void Check(int a, int b){
    if(a > b) cout << "a > b" << endl;
    else if(a < b) cout << "a < b" << endl;
    else if(a == b) cout << "a == b" << endl;
}
