#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    while(1){
        int n;
        cin >> n;
        if(n == 0) break;
        int ans[5050] = {0};
        for(int i = 0; i < n; i++){
            scanf("%d",&ans[i]);
        }
        long long int mx = -300000000;
        for(int i = 0; i < n; i++){
            long long int sum = 0;
            for(int j = i; j < n; j++){
                sum += ans[j];
                if(sum > mx) mx = sum;
            }
        }
        printf("%lld\n",mx);
    }
	return 0;
}