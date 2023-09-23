#include <iostream>
using namespace std;

int main(){
    
    int num;
    int a,b,c;
    cin >> a >> b >> c;
    for(int ii= a;ii<=b;ii++){
        if( c % ii == 0){
            num++;
        }
    }
    
    cout << num << endl;
    
    return 0;
    
}