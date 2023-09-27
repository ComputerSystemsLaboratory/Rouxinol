#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main(){
    int n,q;
    while(cin>>n>>q){
        string process;
        int ptime;
        queue< pair<string,int> > que;
        for(int i=1;i<=n;i++){
            cin>>process>>ptime;
            que.push(make_pair(process,ptime));
        }

        int total_time=0;
        while(!que.empty()){
            pair<string,int> mp = que.front();
            que.pop();
            if(mp.second>q){
                total_time+=q;
                mp.second-=q;
                que.push(mp);
            }
            else{
                total_time+=mp.second;
                cout<<mp.first<<" "<<total_time<<endl;
            }
        }
    }
}
