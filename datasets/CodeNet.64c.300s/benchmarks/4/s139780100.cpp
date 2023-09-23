#include <iostream>
using namespace std;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b, c;
    bool flag = false;
    cin >> a >> b >> c;
    if(a < b){
        if(b < c){
            flag = true;
        }
    }
    if(flag){
        cout << "Yes" << "\n";
    }else{
        cout << "No" << "\n";
    }
    
}

