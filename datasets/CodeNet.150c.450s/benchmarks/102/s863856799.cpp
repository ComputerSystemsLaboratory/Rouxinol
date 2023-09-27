//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1130&lang=jp Red and Black
//???????????????????£?10?????????????????°20???
#include<iostream>
#include<utility>
#include<queue>
using namespace std;

int tile[21][21]={0};
int d[21][21]={0};
int W,H;
char a;
pair<int,int> person;
int answer=0;
const int dx[]={1,0,-1,0},dy[]={0,1,0,-1};

bool valid(int x,int y){
    return (x>=0 && x<H && y>=0 && y<W && tile[x][y]==1);
}

template<typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val){
    std::fill( (T*)array, (T*)(array+N), val );
}

void bfs(int x,int y){
    queue<pair<int,int>> Q;
    pair<int,int> place = make_pair(x,y);
    Q.push(place);
    ++answer;
    d[x][y]=1;
    //cout<<"visited ("<<x+1<<","<<y+1<<")\n";

    while(!Q.empty()){
        place=Q.front();
        Q.pop();
        for(int i=0;i<4;++i){
            pair<int,int> next=make_pair(place.first+dx[i],place.second+dy[i]);
            if(tile[next.first][next.second]!=0 && d[next.first][next.second]==0 && valid(next.first,next.second)){
                Q.push(next);
                d[next.first][next.second]=1;
                //cout<<"visited ("<<next.first+1<<","<<next.second+1<<")\n";
                ++answer;
            }
        }
    }
}

int main(){
    
    
    while(cin>>W>>H && W!=0){
        for(int i=0;i<H;++i){
            for(int j=0;j<W;++j){
                cin>>a;
                if(a=='.'){
                    tile[i][j]=1;
                }
                else if(a=='@'){
                    person.first=i;
                    person.second=j;
                }
            }
        }

        bfs(person.first,person.second);

        cout<<answer<<"\n";
        answer=0;
        Fill(tile,0);
        Fill(d,0);
    }
}