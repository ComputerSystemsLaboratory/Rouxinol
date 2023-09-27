#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<tuple>

using namespace std;
typedef pair<int, int> pii;

int main(){

    while(1){
        int n;
        cin>> n;
        if(!n) break;

        string s[n], t[n];
        for(int i=0; i<n; i++) cin>> s[i]>> t[i];
        int a[n], b[n];
        for(int i=0; i<n; i++){
            a[i]=60*60*stoi(s[i].substr(0, 2))+60*stoi(s[i].substr(3, 2))+stoi(s[i].substr(6, 2));
            b[i]=60*60*stoi(t[i].substr(0, 2))+60*stoi(t[i].substr(3, 2))+stoi(t[i].substr(6, 2));
        }
        int v[24*60*60]={};
        for(int i=0; i<n; i++){
            v[a[i]]+=1;
            v[b[i]]-=1;
        }
        for(int i=1; i<24*60*60; i++){
            v[i]+=v[i-1];
        }
        int k=0;
        for(int i=0; i<24*60*60; i++){
           	k=max(k, v[i]);
        }
        cout<< k<< endl;
    }

    return 0;
}