#include <iostream>
using namespace std;

char F[102][102];

void DFS1(int Y,int X){
    if(F[Y][X]!='@')return;
        
    F[Y][X]='.';
    
    DFS1(Y-1,X  );
    DFS1(Y  ,X-1);
    DFS1(Y  ,X+1);
    DFS1(Y+1,X  );
}

void DFS2(int Y,int X){
    if(F[Y][X]!='#')return;
        
    F[Y][X]='.';
    
    DFS2(Y-1,X  );
    DFS2(Y  ,X-1);
    DFS2(Y  ,X+1);
    DFS2(Y+1,X  );
}

void DFS3(int Y,int X){
    if(F[Y][X]!='*')return;
        
    F[Y][X]='.';
    
    DFS3(Y-1,X  );
    DFS3(Y  ,X-1);
    DFS3(Y  ,X+1);
    DFS3(Y+1,X  );
}

int main(){
    int N,M;
    cin >> N >> M;
    while(N!=0&M!=0){
        for(int y=1;y<=N;y++){
            for(int x=1;x<=M;x++){
                cin >> F[y][x];
            }
        }

        int count = 0;
        for(int y=1;y<=N;y++){
            for(int x=1;x<=M;x++){
                if(F[y][x]=='@'){
                    count++;
                    DFS1(y,x);
                }
            }
        }
        for(int y=1;y<=N;y++){
            for(int x=1;x<=M;x++){
                if(F[y][x]=='#'){
                    count++;
                    DFS2(y,x);
                }
            }
        }
        for(int y=1;y<=N;y++){
            for(int x=1;x<=M;x++){
                if(F[y][x]=='*'){
                    count++;
                    DFS3(y,x);
                }
            }
        }
        cout << count <<endl;
        cin >> N >> M;
    }
    return 0; 
}