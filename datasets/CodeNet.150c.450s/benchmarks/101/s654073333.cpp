#include <iostream>
#include <queue>
#include <vector>
using namespace std;
    queue<int> Q;
vector<int> u[500000];
int cnt=0,color[500000];
// white 0 gray 1 black 2
// void BFS(int s,int n){
//     if(color[s]==0){
//         cnt++;
//         color[s]=cnt;
//         Q.push(s);
//         while(Q.size()!=0){
//             int tmp=Q.front();
//             Q.pop();
//             for(int j=0;j<u[tmp].size();j++){
//                 int to = u[tmp][j];
//                 if(color[to]==0){
//                     color[to]=cnt;
//                     Q.push(to);
//                 }
//             }
//         }
//     }
// }
int main(){
    int n,m,s,t,q;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>s>>t;
        u[s].push_back(t); 
        u[t].push_back(s);
    }
    cin>>q;
    for(int s=0;s<n;s++){
        if(color[s]==0){
            cnt++;
            color[s]=cnt;
            Q.push(s);
            while(Q.size()!=0){
                int tmp=Q.front();
                Q.pop();
                for(int j=0;j<u[tmp].size();j++){
                    int to = u[tmp][j];
                    if(color[to]==0){
                        color[to]=cnt;
                        Q.push(to);
                    }
                }
            }
    }
    }
    for(int i=0;i<q;i++){
        cin>>s>>t;
        if(color[s]==color[t]){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}
