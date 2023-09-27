#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string num = "0123456789";
int ctoi(char c){
    stringstream ss;
    int n;
    ss << c;
    ss >> n;
    return n;
}
string itos(int n){
    stringstream ss;
    string s;
    ss << n;
    ss >> s;
    return s;
}

int mcxitoi(string s){
    int n=0;
    while(true){
        if(num.find(s[0])!=string::npos){
            if(s[1]=='m') n+=ctoi(s[0])*1000;
            else if(s[1]=='c') n+=ctoi(s[0])*100;
            else if(s[1]=='x') n+=ctoi(s[0])*10;
            else if(s[1]=='i') n+=ctoi(s[0]);
            if(s.size()<=2) break;
            s = s.substr(2);
        }else{
            if(s[0]=='m') n+=1000;
            else if(s[0]=='c') n+=100;
            else if(s[0]=='x') n+=10;
            else if(s[0]=='i') n+=1;
            if(s.size()<=1) break;
            s = s.substr(1);
        }
    }
    return n;
}

string itomcxi(int n){
    string s;
    if(n/1000>=1){
        if(n/1000!=1) s+=itos(n/1000);
        s+="m";
    }
    n %= 1000;
    if(n/100>=1){
        if(n/100!=1) s+=itos(n/100);
        s+="c";
    }
    n %= 100;
    if(n/10>=1){
        if(n/10!=1) s+=itos(n/10);
        s+="x";
    }
    n %= 10;
    if(n>=1){
        if(n!=1) s+=itos(n);
        s+="i";
    }
    return s;
}

int main(){
    int n;
    string sx, sy;
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> sx >> sy;
        cout << itomcxi(mcxitoi(sx)+mcxitoi(sy)) << endl;
    }
}