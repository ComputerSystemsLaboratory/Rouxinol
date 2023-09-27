#include<iostream>
#include<queue>
#include<utility>
using namespace std;

int W,H;
int c[51][51]={0};
int d[51][51]={0};
int island=0;

bool valid(pair<int,int> a){
    return (a.first>=1 && a.first<=W && a.second>=1 && a.second<=H);
}

template<typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val){
    std::fill( (T*)array, (T*)(array+N), val );
}

void bfs(pair<int,int> s){
    queue<pair<int,int>> Q;

    if(c[s.first][s.second]==1 && d[s.first][s.second]==0 && valid(s)){
        Q.push(s);
        d[s.first][s.second]=1;
        ++island;

        while(!Q.empty()){
            pair<int,int> cur=Q.front();
            Q.pop();

            for(int i=-1;i<=1;++i){
                for(int j=-1;j<=1;++j){
                    pair<int,int> dst=make_pair(cur.first+i,cur.second+j);

                    if(d[dst.first][dst.second]==0 && c[dst.first][dst.second]==1 && valid(dst)){
                        Q.push(dst);
                        d[dst.first][dst.second]=1;
                    }
                }
            }
        }
    }
}

int main(){
    
    while(cin>>W>>H && W!=0){
        for(int i=1;i<=H;++i){
            for(int j=1;j<=W;++j){
                cin>>c[j][i];
            }
        }

        for(int i=1;i<=W;++i){
            for(int j=1;j<=H;++j){
                pair<int,int> start=make_pair(i,j);
                bfs(start);
            }
        }
        cout<<island<<"\n";
        island=0;
        Fill(c,0);
        Fill(d,0);
    }
}