#include <iostream>

using namespace std;

int main(){

	int n,m,p;
		while(cin>>n>>m>>p){
			if(n==0&&m==0&&p==0)break;

				int *x;
				x = new int[n];
				int sum=0;
				for(int i=0;i<n;i++){
					cin>>x[i];
					sum += x[i]*100;
				}

				sum *= (100-p);

				if(x[m-1]==0){
					cout<<0<<endl;
				}
				else{
					cout<<sum/x[m-1]/100<<endl;
				}
			
		}
	return 0;
}