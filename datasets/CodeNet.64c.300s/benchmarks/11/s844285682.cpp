#include<iostream>
using namespace std;

int main(){
    int a, b;
    
    cin >> a;
    
    cout << a/(60*60) << ":"<< a%(60*60)/60 << ":" << a%(60*60)%60 << endl;
    
    return 0;
}