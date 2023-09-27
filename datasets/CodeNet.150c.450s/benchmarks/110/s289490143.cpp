#include<bits/stdc++.h>
using namespace std;
queue <pair<int ,int> > po;
int memo[1005][1005],ans,h,w,n, miti[1005][1005];
char c;
bool flag=false;


int main(){

    cin >> h >> w >> n;
    fill(miti[0],miti[1004],100);

    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            cin >> c;
            if(c=='S'){
                po.push(make_pair(j,i));
                miti[j][i]=0;
            }else if(c=='X')miti[j][i]=100;
            else if(c=='.')miti[j][i]=0;
            else miti[j][i]=(c-'0')+10;
        }
    }

    for(int hp=1;hp<=n;hp++){
            flag=false;
           // printf("hp=%d\n",hp);

        while(!po.empty()){
        int px,py;
        px=po.front().first;
        py=po.front().second;
        po.pop();
        // printf("%d %d\n",px,py);

    int xx[4]={0,1,0,-1};
    int yy[4]={1,0,-1,0};

    if(px<1||py<1||px>w||py>h);
    else{
    for(int i=0;i<4;i++){
            if(miti[px+xx[i]][py+yy[i]]==hp+10){

                ans+=memo[px][py]+1;
               // printf("memo=%d\n",memo[px][py]);
               //   printf("%d=(%d %d)\nans=%d\n\n",hp,px+xx[i],py+yy[i],ans);
                flag=true;
                while(!po.empty())po.pop();
                po.push(make_pair(px+xx[i],py+yy[i]));
                fill(memo[0],memo[1004],0);
                break;
        }else if((miti[px+xx[i]][py+yy[i]]<hp||miti[px+xx[i]][py+yy[i]]>10)&&miti[px+xx[i]][py+yy[i]]!=100){
            po.push(make_pair(px+xx[i],py+yy[i]));
            memo[px+xx[i]][py+yy[i]]=memo[px][py]+1;
            if(miti[px+xx[i]][py+yy[i]]>10);
            else miti[px+xx[i]][py+yy[i]]=hp;
                }
            }
            if(flag==true)break;
    }
        }
    }


    cout << ans << endl;


return 0;
}