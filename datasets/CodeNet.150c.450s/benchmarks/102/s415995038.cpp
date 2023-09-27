#include <iostream>
 
using namespace std;
 
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

void dfs(int x,int y);
int w,h;
 
int count;
bool flag;
char maze[21][21];
bool reached[501][501];
 
int main(){
        int w,h;

    while(cin>>w>>h){

            if(w==0&&h==0){
                break;
            }

            for(int i=0;i<h;i++){
                for(int j=0;j<w;j++){
                    cin>>maze[i][j];
                }
            }


// cout<<endl;
//              for(int i=0;i<h;i++){
//                 for(int j=0;j<w;j++){
//                     cout<<maze[i][j];
//                 }
//                 cout<<endl;
//             }

//             cout<<endl;


// cout<<endl;
//             for(int i=0;i<21;i++){
//                 for(int j=0;j<21;j++){
//                     cout<<maze[i][j];
//                 }
//                 cout<<endl;
//             }cout<<endl;

            for(int i=0;i<h;i++){
                for(int j=0;j<w;j++){
                    if(maze[i][j]=='@'){
                        dfs(j,i);
                    }
                }
            }

            // for(int i=0;i<h;i++){
            //     for(int j=0;j<w;j++){
            //         cout<<maze[i][j];
            //     }
            //     cout<<endl;
            // }

            count=0;
            for(int i=0;i<h;i++){
                for(int j=0;j<w;j++){
                    if(maze[i][j]=='!')count++;
                }
            }

            cout<<count<<endl;

            for(int i=0;i<22;i++){
                for(int j=0;j<22;j++){
                    maze[i][j]='%';
                }
            }

            // cout<<endl;


        }
    


 
    return 0;
}
 
 
void dfs(int x,int y){
    maze[y][x]='!';

    for(int i=0;i<4;i++){
        int mx=x+dx[i];
        int my=y+dy[i];
        if(maze[my][mx]=='.'){
            dfs(mx,my);
        }
        if(mx<0||w<=mx||my<0||h<=my){
            continue;
        }//??????????????´?????´???->???????????????



        
    } 
}