#include <iostream>
#include <vector>

using namespace std;

#define W 5

int main(){
    while(true){
        int h;
        cin >> h;
        if(h==0)break;
    vector<vector<int> > map(h,vector<int>(W,0));
    for(int i=0;i<h;i++)
    for(int j=0;j<W;j++){
        cin >> map[i][j];
    }
    bool flag=true;
    int ans=0;
    do{
        flag=false;
        for(int i=0;i<h;i++)
        for(int j=0;j<W;j++){
            if(map[i][j]==-1)continue;

            int seg;
            for(seg=1;j+seg<W;seg++){
                if(map[i][j]!=map[i][j+seg])break;
            }
            if(seg>=3){
                for(int k=0;k<seg;k++){
                    flag=true;
                    ans += map[i][j+k];
                    map[i][j+k] = -1;
                }
            }
        }
        for(int k=0;k<h;k++){
            for(int i=1;i<h;i++){
                for(int j=0;j<W;j++){
                    if(map[i][j]==-1){
                        int tmp = map[i][j];
                        map[i][j]=map[i-1][j];
                        map[i-1][j]=tmp;
                    }
                    
                }
            }
        }

    }while(flag);
    cout << ans << endl;
    }
  return 0;
}