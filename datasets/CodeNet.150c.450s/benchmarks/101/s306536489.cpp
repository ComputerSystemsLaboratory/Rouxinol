#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
        int N,M;
        cin >> N >> M;
        vector<int>groups(N,-1);
        vector<vector<int> >friends(N);
        for(int i=0 ; i<M ; i++ ){
                int s,t;
                cin >> s >> t;
                friends[s].push_back(t);
                friends[t].push_back(s);
        }
        int group=0;
        for(int i=0 ; i<N ; i++ ){
                if(groups[i]!=-1)
                        continue;
                queue <int> cycle;
                cycle.push(i);
                while(cycle.size()!=0){
                        int now=cycle.front();cycle.pop();
                        vector <int>::iterator itr;
                        for(itr=friends[now].begin() ; itr!=friends[now].end() ; ++itr ){
                                if(groups[*itr]==-1)
                                        cycle.push(*itr);
                        }
                        groups[now]=group;
                }
                group++;
        }
        cin >> N;
        for(int i=0 ; i<N ; i++ ){
                int s,t;
                cin >> s>> t;
                if(groups[s]==groups[t])
                        cout<<"yes"<<endl;
                else
                        cout<<"no"<<endl;
        }
        return 0;
}

