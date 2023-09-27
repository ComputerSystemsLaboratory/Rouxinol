#include <iostream>
#include <string>

using namespace std;

void upper(string &s){
    for (int i=0;i<s.length();i++){
        if ('a'<=s[i] && s[i]<='z'){
            s[i]+='A'-'a';
        }
    }    
}

int main(){
    string s="",w;
    int sum=0;
    cin>>w;
    upper(w);
    for (;;){
        cin>>s;
        if (s=="END_OF_TEXT"){
            break;
        }
        upper(s);
        if (w==s){
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}