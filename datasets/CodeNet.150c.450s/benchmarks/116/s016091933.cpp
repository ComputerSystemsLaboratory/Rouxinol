#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main(void){
    for(;;){
	int n,k;
	int sum=0,ans=0;
	int a[100010]={0};
	cin >> n;
	cin >> k;
	if(n==0&&k==0)break;
	for(int i=0;i<n;i++){
	    cin >> a[i];
        }
    for(int i=0;i<k;i++){
        sum+=a[i];
        }
    ans=sum;
    for(int i=k;i<n;i++){
        sum+=a[i];
        sum-=a[i-k];
        ans=max(ans,sum);

    }
    cout << ans << endl;

    }


	return 0;
}