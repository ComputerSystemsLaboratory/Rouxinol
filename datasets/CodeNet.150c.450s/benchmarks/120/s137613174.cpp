#include<bits/stdc++.h>
using namespace std;
int lastans,ose[10005][15],r,c;
string a="0",b="1";
map <string, int> inf;
struct check {
    int wa[10005];
};
void solve(struct check pp,int dp,string str);


int main(){
        struct check po;
    while(1){
        for(int i=0;i<10005;i++)po.wa[i]=0;
        lastans=0;
        fill(ose[0],ose[10004],0);
        //inf.clear();

        cin >> r >> c;
        if(r==0&&c==0)break;

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin >> ose[j][i];
                po.wa[j]+=ose[j][i];
            }
        }
        //for(int i=0;i<c;i++)cout << " " << po.wa[i];
        //cout << endl;
        solve(po,0,"");
        cout << lastans << endl;

    }
return 0;
}

void solve(struct check pp,int dp,string str){
    int ans1=0,ans2=0;
    if(dp==r)return;
    else{
        for(int i=0;i<c;i++){
            ans1+=max(pp.wa[i],r-pp.wa[i]);
        }
        //cout << "ans=" << ans1 << endl;
        lastans=max(ans1,lastans);
        solve(pp,dp+1,str+a);

        for(int i=0;i<c;i++){
            if(ose[i][dp]==0)pp.wa[i]++;
            else pp.wa[i]--;
        }
        for(int i=0;i<c;i++){
            ans2+=max(pp.wa[i],r-pp.wa[i]);
        }
        //cout << "ans2=" << ans2 << endl;
        lastans=max(ans2,lastans);
        solve(pp,dp+1,str+b);

    }
    return;
}