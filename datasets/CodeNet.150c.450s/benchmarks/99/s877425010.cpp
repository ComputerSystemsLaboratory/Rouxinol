#include <cstdio>
#include <iostream>
#include <cctype>
using namespace std;

int ev[128];

int convToNum(string ss){
    int res = 0;
    string::iterator it = ss.begin();
    while(it!=ss.end()){
        //printf("a:%c\n", *s);
        int mul = 1, uni = 1;
        if( isdigit(*it) ){ mul = *(it++) - '0'; }
        res += mul * ev[int(*it++)];
    }
    return res;
}

string convToStr(int num){
    string res = "";
    if(num/1000){
        if(num/2000) res.append(1, num/1000+'0');
        res.append(1, 'm');
    }
    if(num/100%10){
        if(num/100%10/2) res.append(1, num/100%10+'0');
        res.append(1, 'c');
    }
    if(num/10%10){
        if(num/10%10/2) res.append(1, num/10%10+'0');
        res.append(1, 'x');
    }
    if(num%10){
        if(num%10/2) res.append(1, num%10+'0');
        res.append(1, 'i');
    }
    return res;
}

int main(){
    ev[int('m')] = 1000;
    ev[int('c')] = 100;
    ev[int('x')] = 10;
    ev[int('i')] = 1;
    int n;
    string s1, s2;
    for(cin>>n;n--;){
        cin>>s1>>s2;
        cout<<convToStr(convToNum(s1)+convToNum(s2))<<endl;
    }
    return 0;
}