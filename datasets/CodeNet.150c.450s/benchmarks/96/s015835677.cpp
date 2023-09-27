#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<string>
#include<cmath>
#include<set>
#include<stack>

using namespace std;

int main()
{
    vector<vector<char> >ph;
    vector<char>c;
    ph.push_back(c);
    c.push_back('.');
    c.push_back(',');
    c.push_back('!');
    c.push_back('?');
    c.push_back(' ');
    ph.push_back(c);
    c.clear();
    
    char cc='a';
    while(cc!='p'){
        for(int i=0;i<3;i++){
            c.push_back(cc++);
        }
        ph.push_back(c);
        c.clear();
    }
    for(int i=0;i<4;i++){
        c.push_back(cc++);
    }
    ph.push_back(c);
    c.clear();
    for(int i=0;i<3;i++){
        c.push_back(cc++);
    }
    ph.push_back(c);
    c.clear();
    for(int i=0;i<4;i++){
        c.push_back(cc++);
    }
    ph.push_back(c);
    
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        char cu='#';
        int co=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                if(cu=='#'){
                    continue;
                } else {
                    co--;
                    cout<<ph[cu-'0'][co%(ph[cu-'0'].size())];
                    cu='#';
                    co=0;
                }
            } else {
                co++;
                cu=s[i];
            }
        }
        cout<<endl;
    }
    //freopen("/Users/shitian/Desktop/gcj/gcj/A-large.in", "r", stdin);
    //freopen("/Users/shitian/Desktop/gcj/gcj/out.txt", "w", stdout);
//    int tcase;
//    cin>>tcase;
//    for(int tca=1;tca<=tcase;tca++){
//        cout<<"Case #"<<tca<<": ";
//
//    }
    return 0;
}