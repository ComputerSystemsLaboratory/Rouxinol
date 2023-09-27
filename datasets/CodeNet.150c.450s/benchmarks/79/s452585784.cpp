#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <iomanip>
#include <functional>
#include <queue>
#include <stack>
#include <cmath>
#define ll long long
#define INF 10000000000000000
#define MOD 998244353
using namespace std;

int main(){
    while(true){
        
        stack<int> s;
        int n,r;
        cin >> n >> r;
        
        if(n==0 && r==0){break;}
        
        for(int i=0; i<n; i++){
            s.push(i+1);
        }

        for(int i=0; i<r; i++){
            int p,c;
            cin >> p >> c;
            
            
            stack<int> a;
            stack<int> b;
            
            for(int i=0; i<p-1; i++){
                a.push(s.top());
                s.pop();
            }
            for(int i=0; i<c; i++){
                b.push(s.top());
                s.pop();
            }
            
            while(!a.empty()){
                s.push(a.top());
                a.pop();
            }
            
            while(!b.empty()){
                s.push(b.top());
                b.pop();
            }
        }
        
        cout<<s.top()<<endl;
    }
    
    return 0;
}

