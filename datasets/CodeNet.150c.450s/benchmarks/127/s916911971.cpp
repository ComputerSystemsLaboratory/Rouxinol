#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
 
#define loop(i,a,b) for(int i=(a); i<int(b); i++)
#define rep(i,b) loop(i,0,b)
#define all(c) (c).begin(), (c).end()
int main(){
    int n;
    cin>>n;
    rep(i,n){
        string s;cin>>s;
        set<string> se;
        rep(i,s.size()-1){
            string a=s.substr(0,i+1);
            string b=s.substr(i+1);
            string c=a,d=b;
            reverse(all(c));
            reverse(all(d));
            se.insert(a+b);
            se.insert(b+a);
            
            se.insert(a+d);
            se.insert(d+a);
            
            se.insert(d+c);
            se.insert(c+d);
            
            se.insert(b+c);
            se.insert(c+b);
        }

        // for(auto t:se){
        //     cout<<t<<endl;
        // }
        cout<<se.size()<<endl;
    }
}