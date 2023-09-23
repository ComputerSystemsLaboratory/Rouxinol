#include<bits/stdc++.h>
 
using namespace std;
 
#define rep(i, n) repi(i,0,n)
#define repi(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define pb push_back

#define N 1000000

#define int long long
int arr[N];

void eratosthenes(){
    rep(i,N){
        arr[i]=1;
    }
 
    for(int i=2;i<sqrt(N);i++){
        if(arr[i]){
            for(int j=0;i*(j+2)<N;j++){
                arr[i*(j+2)]=0;
            }
        }
    }

    arr[0]=0;
    arr[1]=0;
}

signed main(){

	eratosthenes();

	// for(int i=0;i<100;i++){
	// 	cout<<i<<" "<<arr[i]<<endl;
	// }

	int count;
	int a,d,n;
	while(1){

		cin>>a>>d>>n;

		if(a==0&&d==0&&n==0)break;
		
		count=0;
				
		
		for(int i=a;i<1000000;i+=d){
			// if(count>220)break;

				if(arr[i]==1){
				
					// cout<<arr[i]<<":"<<count<<":"<<i<<endl;
					if(count==n-1){
						cout<<i<<endl;
						break;
					}
				count++;
				

			}
				
		}


		// rep(i,100){
		// 	cout<<i<<" "<<v[i]<<endl;

		// }

		// cout<<v[n-1]<<endl;

		// rep(i,100){
		// 	cout<<v[i]<<endl;
		// }
		// cout<<v[n-1]<<endl;

	}
}