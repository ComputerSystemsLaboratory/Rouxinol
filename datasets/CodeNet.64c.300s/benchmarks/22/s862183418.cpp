#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a, b, c;
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c;
        if(a*a == b*b+c*c || b*b == a*a+c*c || c*c == a*a+b*b){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }
    return 0;
}