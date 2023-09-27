#include<iostream>
#include<utility>
using namespace std;

int tile[21][21]={0};
int d[21][21]={0};
int lapse=0;
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

void dfs(int x,int y){
    ++answer;
    d[x][y]=1;
    //cout<<"visited ("<<x+1<<","<<y+1<<")\n";

    for(int i=0;i<4;++i){
        if(valid(x+dx[i],y+dy[i]) && d[x+dx[i]][y+dy[i]]==0){
            dfs(x+dx[i],y+dy[i]);
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

        dfs(person.first,person.second);

        cout<<answer<<"\n";
        answer=0;
        Fill(tile,0);
        Fill(d,0);
    }
}