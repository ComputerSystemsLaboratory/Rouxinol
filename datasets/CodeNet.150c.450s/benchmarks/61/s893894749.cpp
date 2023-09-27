#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<utility>
#include<map>
#include<set>
#include<queue>
#include<math.h>
using namespace std;
#define N (1000000000+7)
#define INF 1e16
typedef long long ll;
typedef pair<int,int> P;



int main(void){
    while(true){
        int n,a,b,c,x;
        cin>>n>>a>>b>>c>>x;
        if(n==0 && a==0 && b==0 && c==0 && x==0)break;
        vector<int>ra(n);
        for(int i=0;i<n;i++)cin>>ra[i];
        int origin=x;
        vector<int>pro;
        pro.push_back(x);
        int index=0;
        while(index++<10005){
            origin=(a*origin+b)%c;
            pro.push_back(origin);
        }
        index=0;
        int ans=0;
        int j=index,i=0;
        for(;i<n;){
            if(ans>10000){
                ans=-1;
                break;
            }
            for(;j<(int)pro.size();){
                if(ra[i]==pro[j]){
                    j++;
                    i++;
                    if(i==n)break;
                    else{
                        ans++;
                        break;
                    }
                }
                else {
                    ans++;
                    j++;
                }
            }
            if(j==(int)pro.size()-1){
                ans=-1;
                break;
            }
            if(ans>10000){
                ans=-1;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
