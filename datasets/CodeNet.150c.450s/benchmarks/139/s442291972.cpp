#include<iostream>
#include<vector>
#include<queue>
int main(){
    int N,M;
    std::cin>>N>>M;
    std::vector<std::vector<int> > graph(N,std::vector<int>(0));
    std::vector<int>guide(N,-1);
    for(int i=0;i<M;++i){
        int A,B;
        std::cin>>A>>B;
        graph[A-1].push_back(B-1);
        graph[B-1].push_back(A-1);
    }
    guide[0]=0;
    std::queue<int> q;
    q.push(0);
    while(!q.empty()){
        int searchNum=q.front();
        q.pop();
        for(int i=0;i<graph[searchNum].size();++i){
            int adjustNum=graph[searchNum][i];
            if(guide[adjustNum]==-1){
                guide[adjustNum]=searchNum;
                q.push(adjustNum);
            }
        }
    }
    std::cout<<"Yes"<<std::endl;
    for(int i=1;i<N;++i){
        std::cout<<guide[i]+1<<std::endl;
    }
}