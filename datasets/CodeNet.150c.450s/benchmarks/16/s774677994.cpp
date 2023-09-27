#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){
    stack<int> slope;
    stack<pair<int,int>> lake;
    string hoge;
    cin>>hoge;
    
    long long sum=0;
    
    for(int i=0;i<hoge.size();i++){
        if(hoge.at(i)=='\\') slope.push(i);
        if(hoge.at(i)=='/' && slope.size()>0){
            int t=slope.top();
            slope.pop();
            int pre=i-t;
            sum+=pre;
            
            while(lake.size()>0 && lake.top().first>t){
                pre+=lake.top().second;
                lake.pop();
            }
            
            lake.push(make_pair(t,pre));
        }
    }
    
    vector<int> lakes;
    
    while(lake.size()>0){
        lakes.push_back(lake.top().second);
        lake.pop();
    }
    
    cout<<sum<<endl<<lakes.size();
    
    for(int i=lakes.size()-1;i>=0;i--) cout<<" "<<lakes.at(i);
    
    cout<<endl;
    
    return 0;
}
