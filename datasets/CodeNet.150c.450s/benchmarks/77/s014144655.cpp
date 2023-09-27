#include<cstdio>
#include<iostream>

#include<algorithm>
#include<cstdlib>
#include<queue>
#include<stack>
#include<iostream>
#include<vector>
#include<stdlib.h>
#include<iomanip>
#include <string.h>
using namespace std;

int pos[22][22];
int main(){
    while(true){
        int N;
        cin>>N;
        if(N==0)
            break;
        memset (pos,0,sizeof(pos));
        for(int i=0;i<N;i++){
            int x,y;
            cin>>x>>y;
            pos[20-y][x]=1;
        }
        int M;
        cin>>M;
        int x=10,y=10;
        for(int i=0;i<M;i++){
            char d;
            int l;
            cin>>d>>l;
            switch(d){
                case'N':
                    for(int i=0;i<=l;i++){
                        pos[y-i][x]=0;
                    }
                    y-=l;
                    break;
                case'S':
                    for(int i=0;i<=l;i++){
                        pos[y+i][x]=0;
                    }
                    y+=l;
                    break;
                case'W':
                    for(int i=0;i<=l;i++){
                        pos[y][x-i]=0;
                    }
                    x-=l;
                    break;
                case'E':
                    for(int i=0;i<=l;i++){
                        pos[y][x+i]=0;
                    }
                    x+=l;
                    break;
            }
            //cout<<x<<"    "<<y<<endl;
        }
        int a=1;
        
        for(int i=0;i<=20;i++){
//            cout<<setw(2) << setfill('.')<<20-i<<": ";
           for(int j=0;j<=20;j++){
//                cout<<setw(2) << setfill('.')<<pos[i][j];
                if(pos[i][j]==1)
                    a=0;
            }
//            cout<<endl;
        }
//        cout<<"    ";
//        for(int i=0;i<=20;i++)
//            cout<<setw(2) << setfill('.')<<i;
//        cout<<endl;
        cout<<(a==1?"Yes":"No")<<endl;
    }
}