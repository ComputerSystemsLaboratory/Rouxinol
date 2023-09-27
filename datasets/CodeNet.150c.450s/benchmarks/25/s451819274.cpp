#include "bits/stdc++.h"
using namespace std;
int main(){
    char c;
    int i;
    vector<int> A(26,0);
    while(cin >> c){
        if(c>='a'&&c<='z'){
            A.at(c-'a')++;
        }
        if(c>='A'&&c<='Z'){
            A.at(c-'A')++;
        }
    }
    for(i=0;i<26;i++){
        cout << char('a'+i)<<" : "<<A.at(i)<<endl;
    }
    return 0;
}
