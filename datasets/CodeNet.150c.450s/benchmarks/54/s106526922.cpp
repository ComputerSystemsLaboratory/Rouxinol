#include <iostream>
#include <string>
using namespace std;
string toUpper(string s){
    for(int i=0;i<=s.size()-1;i++){
        s[i]=toupper(s[i]);
    }
    return s;
}

int main(void){
    string W,T;
    int count=0;
    cin>>W;
    W=toUpper(W);
    while(1){
        cin>>T;
        if(T=="END_OF_TEXT")break;
        T=toUpper(T);
        if(T==W)count++;
    }
    cout<<count<<endl;
    return 0;
}