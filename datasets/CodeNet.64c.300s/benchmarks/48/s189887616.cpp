#include <iostream>
#include<stdio.h>
#include<string>
#include<map>
#include<vector>
#include<stdlib.h>
typedef long long ll;
using namespace std;
#define INF 100000000000
#include<algorithm>
#include<string.h>
bool num[1000000];
int main(){
    int n;
    while(cin >> n){
        memset(num,true,sizeof(num));
        num[0] = num[1] = false;
        for(int i = 2;i<=n;i++){
            if(num[i] == true){
                for(int j = 2*i;j<=n;j+=i){
                    num[j] = false;
                }
            }

        }
        int ans = 0;
        for(int i =2;i<=n;i++){
            if(num[i]){ans++;}
        }
        cout<<ans<<endl;
    }

}