#include <iostream>
#include <string>
#include <stdexcept>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int S[100];
    string A;
    int x=0;
    while(cin >> A){
        if(A=="+"){
            x--;
            S[x]=S[x+1]+S[x];
        }
        else if(A=="-"){
            x--;
            S[x]=S[x]-S[x+1];
        }
        else if(A=="*"){
            x--;
            S[x]=S[x]*S[x+1];
        }
        else{
            x++;
            S[x]=std::atoi(A.c_str());
        }
    }
    cout << S[1] << endl;
}
