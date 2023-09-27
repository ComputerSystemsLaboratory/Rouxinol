#include<bits/stdc++.h>
#define LLI long long int

LLI n,num[110],a,memo[1000][30],ans;

using namespace std;

LLI po(int low,int sum){
    LLI a=0,b=0;

    if(memo[low][sum]!=0)return memo[low][sum];

    if(low==n-2){
    if(sum==num[low+1])return 1;
    return 0;

    }else {
    if(sum+num[low+1]<=20)a=po(low+1,sum+num[low+1]);
    if(sum-num[low+1]>=0)b=po(low+1,sum-num[low+1]);
          }

          ans=a+b;

    memo[low][sum]=ans;
      return ans;

      }


int main(){

    cin >> n;

    for(int i=0;i<n;i++){
                cin >> a;
    num[i]=a;

    }

    cout << po(0,num[0]) << endl;


return 0;
}