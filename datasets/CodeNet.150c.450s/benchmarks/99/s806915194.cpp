#include<cstdio>
#include<iostream>
#include<sstream>
#include<cctype>

using namespace std;

int n2d(const char *s) {
    int res=0;
    char c;
    int last=1;

    while(c=*s++) {
        int w;
        switch(c) {
            case 'm':
                w = 1000;
                break;
            case 'c':
                w = 100;
                break;
            case 'x':
                w = 10;
                break;
            case 'i':
                w = 1;
                break;
            default:
                last = c-'0';
                continue;
        }
        res += w*last;
        last = 1;
    }

    return res;
}

string d2n(int d) {
    stringstream ss;
    if(d/1000) { 
        if(d/1000-1) ss << d/1000;
        ss << 'm';
        d %= 1000;
    }
    if(d/100) {
        if(d/100-1) ss << d/100;
        ss << 'c';
        d %= 100;
    }
    if(d/10) {
        if(d/10-1) ss << d/10;
        ss << 'x';
        d %= 10;
    }
    if(d) { 
        if(d-1) ss << d/1;
        ss << 'i';
    }

    return ss.str();
}

int main(void) {
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        char a[100], b[100];
        scanf("%s%s",a,b);
        printf("%s\n", d2n(n2d(a)+n2d(b)).c_str());
    }
    return 0;
}