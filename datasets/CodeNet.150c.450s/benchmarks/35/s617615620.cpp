#include <iostream>
using namespace std;

int main() {
	int n;
    while(1){
        cin>>n;
        if(!n)break;

        int a[5000]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int sum=0,ans=a[0];
        for(int i=0;i<n;i++){
            sum=0;
            for(int j=i;j<n;j++){
                sum+=a[j];
                ans=max(ans,sum);
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}