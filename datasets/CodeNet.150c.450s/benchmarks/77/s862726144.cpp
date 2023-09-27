#include <iostream>
#include <set>
enum{Nor,Eas,Sou,Wes};
#define MAX_MASU 21

using namespace std;

set<int> gemplace;
bool isgem(int p[2]);
void removegem(int p[2]);

int main(){
    while(1){
        gemplace.clear();
        int n;
        cin>>n;
        if(n==0)break;
        int gemcount=n;
        
        for(int i=0;i<n;i++){
            int p[2];
            cin>>p[0]>>p[1];
            gemplace.insert(p[0]+p[1]*MAX_MASU);
        }
        
        int M;
        cin>>M;
        int orderlist[M][2];//{N,12},{S,3},{///
        int nowplace[2];
        nowplace[0]=10;nowplace[1]=10;
        for(int i=0;i<M;i++){
            char dir;
            int temp;
            cin>>dir>>temp;
            orderlist[i][1]=temp;
            switch(dir){
            case 'N':
                orderlist[i][0]=Nor;
                break;
            case 'E':
                orderlist[i][0]=Eas;
                break;
            case 'S':
                orderlist[i][0]=Sou;
                break;
            case 'W':
                orderlist[i][0]=Wes;
                break;
            }
        }
        for(int i=0;i<M;i++){
            while(orderlist[i][1]){
                switch(orderlist[i][0]){
                case Nor:
                    nowplace[1]++;
                    break;
                case Eas:
                    nowplace[0]++;
                    break;
                case Sou:
                    nowplace[1]--;
                    break;
                case Wes:
                    nowplace[0]--;
                    break;
                }
                //cout<<"P:"<<nowplace[0]<<","<<nowplace[1]<<"\n";
                if(isgem(nowplace)){
                    removegem(nowplace);
                    gemcount--;
                }
                orderlist[i][1]--;
            }
        }
        if(gemcount==0)cout<<"Yes\n";
        else cout<<"No\n";
    }
}
bool isgem(int p[2]){
    if(gemplace.find(p[0]+p[1]*MAX_MASU)!=gemplace.end())return true;
    return false;
}
void removegem(int p[2]){
    gemplace.erase(p[0]+p[1]*MAX_MASU);
    return;
}