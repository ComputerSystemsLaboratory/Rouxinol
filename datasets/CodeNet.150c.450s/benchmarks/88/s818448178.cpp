#include<bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define ALL(v) (v).begin(),(v).end()
#define pb push_back

typedef long long ll;
typedef pair<int,int> P;

//-----------------------------------------------------------------------

int sqsum(int a,int b){ return a*a+b*b;}
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h,w;
    while(cin>>h>>w,h+w){
        int h1=1000,w1=1000;

        for(int j=2;j<=150;j++) for(int i=1;i<j;i++){
            if(sqsum(h,w)<sqsum(i,j) ||
                sqsum(h,w)==sqsum(i,j) && h<i){

                if(sqsum(i,j)<sqsum(h1,w1)||
                    sqsum(i,j)==sqsum(h1,w1) && i<h1){
                    h1=i; w1=j;
                }
            }
        }
        cout<<h1<<" "<<w1<<endl;
    }
}
