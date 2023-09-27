#include<iostream>
#include<string>
#include<queue>
#include<utility>
using namespace std;
int main(){
        queue<pair<string,int>> a;
        int n,q,t,time=0;
        string s;
        cin>>n>>q;
        for(int i=0;i<n;i++) {
                cin >>s>>t;
                a.push(make_pair(s,t));
        }
        while(a.size()>0){
                pair<string, int>tmp = a.front(); a.pop();
                if(tmp.second>q){
                        tmp.second -= q;
                        a.push(tmp);
                        time += q;
                }else{
                        time += tmp.second;
                        cout<<tmp.first<<" "<<time<<endl;
                }
        }
        return 0;
}
