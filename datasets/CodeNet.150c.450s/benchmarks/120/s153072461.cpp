#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<queue>
#define pr(x) cout<<#x<<" "<<x;
#define pl(x) cout<<#x<<" "<<x<<endl;
#include<math.h>
#include<algorithm>
#include<set>
#include<map>
#include<unordered_set>
#include<bitset>
using namespace std;
bitset <10000> a[10];
int str[10];
void change(int x){
    memset(str,0,sizeof(str));
    for(int i = 0;x>0;i++){
        str[i] = x%2;//pl(str[i]);
        x = x/2;
    }


}
int main(){
    int r,c;


    while(cin>>r>>c&&r!=0){
            int ans =0;
        for(int i = 0;i<r;i++){
            for(int j = 0;j<c;j++){
                bool b;
                cin>>b;
                a[i][j] = b;
            }
        }

        for(int i = 0;i<pow(2,r);i++){
        int anss=0;
        change(i);
        for(int j = 0;j<r;j++){
            if(str[j]==1){a[j].flip();}
        }
        for(int k = 0;k<c;k++){
                int ccount =0;
            for(int i =0;i<r;i++){
                if(a[i][k]==1){ccount++;}
            }
            //pl(ccount);
            anss +=max(ccount,r-ccount);
        }
        ans = max(ans,anss);

        for(int j = 0;j<r;j++){
            if(str[j]==1){a[j].flip();}
        }

    }

    cout<<ans<<endl;



    }

}