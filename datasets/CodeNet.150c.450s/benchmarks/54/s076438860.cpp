#include<iostream>
#include<cctype>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int main(){
    string W;
    string T;
    int counter = 0;
    cin >> W;
    for (int i = 0;i < W.size(); i++) {
        W[i] = tolower(W[i]);
    }
   
    while(cin >> T) {
        if(T == "END_OF_TEXT") break;
        for (int i = 0;i < T.size(); i++) {
            T[i] = tolower(T[i]);
        }   
        
        if(W == T) counter+=1;
    }
    cout << counter << endl;
    
    return 0;
}