#include<string>
#include<iostream>
#include<cctype>
using namespace std;
int b[26];
int main(){
    string a;
    char c[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    while(getline(cin,a)){
    for(int i=0;i<a.size();i++){
        for(int j=0;j<26;j++){
            if(a[i]==c[j] || a[i]==toupper(c[j])){
                b[j] += 1;
            }
        }
    }
    }
    for(int i=0;i<26;i++){
        cout<<c[i]<<" : "<<b[i]<<endl;
    }
    return 0;
}

