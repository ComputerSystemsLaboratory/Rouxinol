#include<iostream>
#include<cctype>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int main(){
    string alpha;
    int numOfShuffle;
    int n;
    string result;
    
    while(1) {
        cin >> alpha;
        if(alpha == "-") break;
        cin >> numOfShuffle;
        for (int i = 0; i < numOfShuffle; i++) {
            cin >> n;
            alpha = alpha.substr(n,alpha.size()) +  alpha.substr(0,n);
           
        }
        cout << alpha << endl;
        
    }
    
    
    
    return 0;
}