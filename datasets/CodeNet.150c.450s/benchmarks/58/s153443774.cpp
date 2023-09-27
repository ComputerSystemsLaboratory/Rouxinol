#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <map>
#include <bitset>
#include <cstdio>
#include <set>
#include <stack>
//#include <bits/stdc++.h>
#define rep(i,n) Rep(i,0,n)
#define Rep(i,k,n) for(int i=k ; i<n ; i++)
#define rep1(i,n) for(int i=1 ; i<=n ; i++)
#define vi vector<int>
#define vii vector<int,int>
#define Sort(v) sort(v.begin(),v.end())
#define Reverse(v) reverse(v.begin(),v.end())

//const int MOD = 1000000007;
//const int INF = 1<<30;
using namespace std;

string yn(bool x){
    return x ? "Yes" : "No";
}

int calc(int x,int y,string s){
    if(s == "+") return x+y;
    if(s == "-") return x-y;
    if(s == "*") return x*y;
    return 0;
}

int main(){
    stack<int>a;
    string s;
    while(cin >> s){
        //if(cin.eof()) break;
        
        if(s=="+"||s=="-"||s=="*"){
            int numA = a.top(); a.pop();
            int numB = a.top(); a.pop();
            
            a.push(calc(numB,numA,s));
        }else{
            int x = stoi(s);
            a.push(x);
            
        }
        
        if(getchar()=='\n') break;
        
    }
    
    cout << a.top() << endl;
    
    
    
}


