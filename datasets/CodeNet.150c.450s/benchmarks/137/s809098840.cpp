#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int n;
    cin >> n;
    string s,ss;
    set<string> dic;
    for(int i=0;i<n;i++){
        cin >> s >> ss;

        if(s=="insert"){
            dic.insert(ss);
        }else if(s=="find"){
            if(dic.count(ss) == 1){
                cout << "yes" << endl;
            }else{
                cout << "no" << endl;
            }

        }
    }
}
