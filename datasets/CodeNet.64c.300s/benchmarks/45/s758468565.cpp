#include <iostream>
using namespace std;

int main(void){
	int n,m,p;

	while(cin>>n>>m>>p && (n || m || p)){
		int x[104],sum=0;

		for(int i=0;i<n;i++){
			cin>>x[i];
			sum += x[i] * 100;
		}

		sum = (int)(sum * ((100.0 - p) / 100.0));

		if(x[m-1] == 0){
			cout<<"0\n";
		}
		else{
			cout<<sum/x[m-1]<<endl;
		}
	}

	return 0;
}