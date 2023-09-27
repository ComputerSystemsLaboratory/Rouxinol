#include <iostream>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    int i,l=s.length();
    for (i=0;i<l;i++){
        if (s[i]>='A'&&s[i]<='Z'){
            s[i]+='a'-'A';
        }else if (s[i]>='a'&&s[i]<='z'){
            s[i]+='A'-'a';
        }
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}