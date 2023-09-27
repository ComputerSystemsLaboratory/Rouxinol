#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    stack<pair<int,int>> pond;
    string data;
    cin>>data;
    for(int i=0;i<data.size();i++){
        if(data.at(i)=='/'&&!s.empty()){
            int sum=i-s.top();
            if(!pond.empty()){
                while(!pond.empty()&&(s.top()<=pond.top().first)){
                sum+=pond.top().second;
                pond.pop();
                }
            }
            pond.push(make_pair(s.top(),sum));
            s.pop();
        }
        else if(data.at(i)=='_'){
        }
        else{
            if(data.at(i)!='/') s.push(i);
        }
    }
    
    int ans=0;
    stack<int> s1;
    while(!pond.empty()){
        s1.push(pond.top().second);
        ans+=pond.top().second;
        pond.pop();
    }
    cout<<ans<<endl<<s1.size();
    while(!s1.empty()){
        cout<<' '<<s1.top();
        s1.pop();
    }
    cout<<endl;
}
