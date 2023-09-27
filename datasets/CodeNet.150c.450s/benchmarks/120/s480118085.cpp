#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
void check(int x);
bool a[12][10010]={{0}};
int ans=1000000;
int co=0,vo=0;
int h;
int w;

int main(void){

	for(;;){
    ans=10000000;
	cin>>h>>w;

	if(h==0&&w==0)break;

	for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>a[i][j];
        }
	}
	check(0);

    cout<<h*w-ans<<endl;
	}
	return 0;
}
void check(int x){
    if(x==h){
        vo=0;
        for(int i=0;i<w;i++){
            co=0;
            for(int j=0;j<h;j++){
                co+=a[j][i];
            }
            vo+=min(co,h-co);

        }
        ans=min(ans,vo);

        return;
    }
    //cout<<x<<"+"<<endl;
    check(x+1);

    for(int i=0;i<w;i++){
        if(a[x][i]==0)a[x][i]=1;
        else a[x][i]=0;
        //cout<<a[x][i];
    }
    //cout<<x<<"-"<<endl;
    check(x+1);


}