#include <iostream>
#include <queue>
#include <vector>
#include <utility>
using namespace std;
typedef pair<int,int> Info;
int main(){
        int N;
        cin >> N;
        vector <vector<int> > adjancey(N,vector<int>(N));
        priority_queue<Info, vector<Info>,greater<Info> > descending;
        for(int i=0 ; i<N ; i++ )
                for(int j=0 ; j<N ; j++ )
                        cin >> adjancey[i][j];
        Info wn;
        int now=0,counter=0;
        vector <bool> past(N,false);
        while(true){
                past[now]=true;
                for(int i=0 ; i<N ; i++ ){
                        if(past[i])
                                continue;
                        if(adjancey[now][i]==-1)
                                continue;
                        wn.first=adjancey[now][i];
                        wn.second=i;
                        descending.push(wn);
                }
                int c=0;
                for(int i=0;i<N;i++)
                        c+=past[i];
                if(c==N)break;
                wn=descending.top();descending.pop();
                now=wn.second;
                if(past[now])continue;
                counter+=wn.first;
        }
        cout << counter << endl;
        return 0;
}

