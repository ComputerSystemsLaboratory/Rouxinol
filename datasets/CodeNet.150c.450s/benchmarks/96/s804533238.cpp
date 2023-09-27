#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <climits>

#define LP(i,n) for(int i=0;i<n;i++)
#define Mset(x,v) memset(x,v,sizeof(x))

using namespace std;
using LL=long long;

int pk[10];
char D[10][5]={
    {'*','*','*','*','*'},
    {'.',',','!','?',' '},
    {'a','b','c','*','*'},
    {'d','e','f','*','*'},
    {'g','h','i','*','*'},
    {'j','k','l','*','*'},
    {'m','n','o','*','*'},
    {'p','q','r','s','*'},
    {'t','u','v','*','*'},
    {'w','x','y','z','*'}
};

int main(){
    int n,curk=0;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        string r;
        Mset(pk,0);
        cin>>s;
        for(int j=0;j<s.size();j++){
            switch(s[j]){
                case '1':
                    curk=1;
                    pk[1]++;
                    if(pk[1]>5) pk[1]=1;
                    break;
                case '2':
                    curk=2;
                    pk[2]++;
                    if(pk[2]>3) pk[2]=1;
                    break;
                case '3':
                    curk=3;
                    pk[3]++;
                    if(pk[3]>3) pk[3]=1;
                    break;
                case '4':
                    curk=4;
                    pk[4]++;
                    if(pk[4]>3) pk[4]=1;
                    break;
                case '5':
                    curk=5;
                    pk[5]++;
                    if(pk[5]>3) pk[5]=1;
                    break;
                case '6':
                    curk=6;
                    pk[6]++;
                    if(pk[6]>3) pk[6]=1;
                    break;
                case '7':
                    curk=7;
                    pk[7]++;
                    if(pk[7]>4) pk[7]=1;
                    break;
                case '8':
                    curk=8;
                    pk[8]++;
                    if(pk[8]>3) pk[8]=1;
                    break;
                case '9':
                    curk=9;
                    pk[9]++;
                    if(pk[9]>4) pk[9]=1;
                    break;
                case '0':
                    if(curk){
                        r+=D[curk][pk[curk]-1];
                        pk[curk]=0;
                        curk=0;
                    }
            }
        }
        cout<<r<<endl;
    }
    return 0;
}

