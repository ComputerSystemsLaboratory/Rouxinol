	#include<iostream>
	using namespace std;
int main(){
	int a[100];
	int N;
	cin>>N;
	int k;//kはソート済みの添え字
	for(int i=0;i<N;i++)cin>>a[i];
	
	k=0;
	
	for(int i=0;i<N;i++){
		int v=a[i];
		int j=i-1;
			while(v<a[j]&&j>=0){
				a[j+1]=a[j];
				
				/*for(int k=0;k<N-1;k++)cout<<a[k]<<"  ";
			cout<<a[N-1]<<endl<<endl;*/
				
				j--;
		}
		a[j+1]=v;
			for(int k=0;k<N-1;k++)cout<<a[k]<<" ";
			cout<<a[N-1]<<endl;
	}

	return 0;
}