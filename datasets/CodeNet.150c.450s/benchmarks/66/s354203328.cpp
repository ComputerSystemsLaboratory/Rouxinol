#include <bits/stdc++.h>
using namespace std;
void solve(vector<string> ids,vector<string> strs){
    bool s=false,st=false;
    for(string x:strs){
        st=s;
        for(string y:ids){
            if(x==y){
                if(s){
                    s=false;
                    cout<<"Closed by "<<y<<endl;
                }
                else{
                    s=true;
                    cout<<"Opened by "<<y<<endl; 
                }
            }
        }
        if(st==s){
            cout<<"Unknown "<<x<<endl; 
        }
    }
}



int main(void){
    int a;
    string str;
    vector<string> ids,strs;
    cin>>a;
    for(int i=0;i<a;i++){
        cin >> str;
        ids.push_back(str);
    }
    cin >> a;
    for(int i=0;i<a;i++){
        cin >> str;
        strs.push_back(str);
    }
    solve(ids,strs);
}