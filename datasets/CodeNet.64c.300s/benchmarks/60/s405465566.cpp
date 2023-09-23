//Sort
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a, b, c, d, stoptimes, i;
    int x, y;
    
    while(1){
        cin >> a >> b;
        if(a+b==0){break;}
        cin >> stoptimes;
        int maze[a+1][b+1];
        int det[a+1][b+1];
        for(x=0;x<a+1;x++){
            for(y=0;y<b+1;y++){
                det[x][y]=0;
            }
        }
                for(i=0;i<stoptimes;i++){
            cin >> c >> d;
            det[c][d]=1;
        }
        
     
        for(x=0;x<a+1;x++){
            for(y=0;y<b+1;y++){
            maze[x][y]=0;
            }
        }
        maze[1][1]=1;
        for(x=0;x<a;x++){
            for(y=0;y<b;y++){
                if(x+y==0)continue;
                maze[x+1][y+1]=maze[x][y+1]+maze[x+1][y];
                if(det[x+1][y+1]==1){maze[x+1][y+1]=0;}
            }
        }
        
        cout << maze[a][b] << endl;
        
    
    
    }
    return 0;
}