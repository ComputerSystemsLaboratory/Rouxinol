#include<iostream>
using namespace std;
int N, S;
int main(){
	while(cin>>N && N>0) {
		int sum=0, large=0, small=1000;
		for(int i=0;i<N;++i){
			cin>>S;
			sum+=S;
			if(large<S) large=S;
			if(small>S) small=S;
		}
		sum=sum-large-small;
		cout<<sum/(N-2)<<endl;
	}
}