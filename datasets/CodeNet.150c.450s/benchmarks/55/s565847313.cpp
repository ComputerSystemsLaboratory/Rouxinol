#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int main(){
    string x;
    int ans = 0;
    getline(cin,x);
    while ( x != "0" ) {
        for ( int i=0; i<x.length();i++ ){
            //cout << int(x[i]-'0') << endl;
            ans+= int(x[i]-'0');
        }
        cout << ans << endl;
        ans = 0;
        getline(cin,x);
    }
    return 0;
}

