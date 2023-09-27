#include<iostream>
#include<cctype>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int main(){
    string alpha;
    int n;
    string taro;
    string hanako;
    int ptaro = 0;
    int phanako = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> taro >> hanako;
        if(taro > hanako) {
            ptaro += 3;
        } else if(taro < hanako) {
            phanako += 3;
        } else {
            ptaro += 1;
            phanako += 1;
        }
        
    }
    
    cout << ptaro << " " << phanako << endl;
    
    
    return 0;
}