#include <bits/stdc++.h>
using namespace std;
int mcxi_to_int(string s) {
    int num=1,sum=0;
    for(int i=0;i<s.size();i++) {
        if(isdigit(s[i])) {
            num=s[i]-'0';
        }else if(s[i]=='m') {
            sum+=1000*num;
            num=1;
        }else if(s[i]=='c') {
            sum+=100*num;
            num=1;
        }else if(s[i]=='x') {
            sum+=10*num;
            num=1;
        }else {
            sum+=num;
            num=1;
        }
    }
    return sum;
}
string int_to_mcxi(int n) {
    string ret="";
    int num[4];
    for(int i=0;i<4;i++) {
        num[i]=n%10;
        n/=10;
    }
    if(num[3]>1) ret+=string(1,num[3]+'0')+"m";
    else if(num[3]==1) ret+="m";
    if(num[2]>1) ret+=string(1,num[2]+'0')+"c";
    else if(num[2]==1) ret+="c";
    if(num[1]>1) ret+=string(1,num[1]+'0')+"x";
    else if(num[1]==1) ret+="x";
    if(num[0]>1) ret+=string(1,num[0]+'0')+"i";
    else if(num[0]==1) ret+="i";
    return ret;
}
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        string s1,s2;
        cin>>s1>>s2;
        cout<<int_to_mcxi(mcxi_to_int(s1)+mcxi_to_int(s2))<<endl;
    }
}