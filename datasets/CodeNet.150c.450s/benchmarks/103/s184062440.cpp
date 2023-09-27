#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
void check(int z);
bool flg[10]={0};
int W_book[10]={0};
int bookcheck[1000][10]{{0}};
int sum=0;
int n,s;
int ans=0;
int main(void){
	for(;;){
        cin>>n>>s;
        if(n==0)break;
        for(int i=0;i<10;i++)W_book[i]=-1,flg[i]=0;
        ans=0,sum=0;
        check(0);
        cout<<ans<<endl;
	}

	return 0;
}
void check(int z){
    if(n==z){
        if(sum==s){
            for(int i=0;i<n;i++){
                bookcheck[ans][i]=W_book[i];

               sort(bookcheck[ans],bookcheck[ans]+n);
               reverse(bookcheck[ans],bookcheck[ans]+n);

            }
            bool notcnt=0;
            for(int i=0;i<ans;i++){
                bool W_flg=0;
                for(int j=0;j<n;j++){
                    if(bookcheck[ans][j]!=bookcheck[i][j]){
                        W_flg=1;
                        break;
                    }
                }
                if(W_flg==0)notcnt=1;
            }
            if(notcnt==0){
                int q=0;
                for(int i=0;i<n;i++){
                    q+=bookcheck[ans][i];
                   //cout<<bookcheck[ans][i];
                }
                //cout<<endl;
                if(q==s)ans++;
            }
        }
        return;
    }
    else {
        for(int i=0;i<10;i++){
            if(flg[i]==0&&sum+i<=s){
               // cout<<i<<"."<<z<<endl;
                sum+=i,flg[i]=1;
                W_book[z]=i,check(z+1),W_book[z]=-1;
                sum-=i,flg[i]=0;
            }
            /*else if(z==n-1&&flg[i]==0&&sum+i==s){
               // cout<<i<<"."<<z<<endl;
                sum+=i,flg[i]=1;
                W_book[z]=i,check(z+1),W_book[z]=-1;
                sum-=i,flg[i]=0;
            }*/
        }
    }

}