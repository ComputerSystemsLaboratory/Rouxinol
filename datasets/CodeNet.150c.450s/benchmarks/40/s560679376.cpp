#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
using namespace std;

int main(){
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    
    string com;
    //char S[100];
    cin >> com;
    
    for(int i=0; i<com.size(); i++){
    if(com[i] == 'S') {
        int tmp = a;
        a = e;
        e = f;
        f = b;
        b = tmp;
    }
    else if(com[i]=='E'){
        int tmp = a;
        a = d;
        d = f;
        f = c;
        c = tmp;
    }
    else if(com[i]=='N'){
        int tmp = a;
        a = b;
        b = f;
        f = e;
        e = tmp;
    }
    else if(com[i]=='W'){
        int tmp = a;
        a = c;
        c = f;
        f = d;
        d = tmp;
    }
    }
    
    cout << a << endl;
    
    return 0;
}