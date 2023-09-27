#include <iostream>

using namespace std;

int main(){

	int a,b,c,d,e;
    
    cin >> a >> b >> c >> d >> e;
    
    if(c - e < 0 | d - e < 0){
        cout << "No" << endl;
        return 0;
    }else if(c + e > a | d + e > b){
        cout << "No" << endl;
        return 0;
    }
    
    cout << "Yes" << endl;
    
    return 0;

}