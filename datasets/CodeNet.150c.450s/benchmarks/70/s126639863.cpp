#include <bits/stdc++.h>
using namespace std;

string check(int d) {
    if (d%7==1) {
        return "Thursday";
    } else if (d%7==2) {
        return "Friday";
    } else if (d%7==3) {
        return "Saturday";
    } else if (d%7==4) {
        return "Sunday";
    } else if (d%7==5) {
        return "Monday";
    } else if (d%7==6) {
        return "Tuesday";
    } else if (d%7==0) {
        return "Wednesday";
    }
}

int main(void){
    int m,d;
    while (cin>>m>>d) {
        if (m==0) {
            break;
        } else {
            if (m==1) {
                cout<<check(d)<<endl;
            } else if (m==2) {
                d=d+31;
                cout<<check(d)<<endl;
            } else if (m==3) {
                d=d+31+29;
                cout<<check(d)<<endl;
            } else if (m==4) {
                d=d+31+29+31;
                cout<<check(d)<<endl;
            } else if (m==5) {
                d=d+31+29+31+30;
                cout<<check(d)<<endl;
            } else if (m==6) {
                d=d+31+29+31+30+31;
                cout<<check(d)<<endl;
            } else if (m==7) {
                d=d+31+29+31+30+31+30;
                cout<<check(d)<<endl;
            } else if (m==8) {
                d=d+31+29+31+30+31+30+31;
                cout<<check(d)<<endl;
            } else if (m==9) {
                d=d+31+29+31+30+31+30+31+31;
                cout<<check(d)<<endl;
            } else if (m==10) {
                d=d+31+29+31+30+31+30+31+31+30;
                cout<<check(d)<<endl;
            } else if (m==11) {
                d=d+31+29+31+30+31+30+31+31+30+31;
                cout<<check(d)<<endl;
            } else if (m==12) {
                d=d+31+29+31+30+31+30+31+31+30+31+30;
                cout<<check(d)<<endl;
            }
        }
    }
}

