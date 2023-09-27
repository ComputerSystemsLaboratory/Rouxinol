#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main(){

	map<int ,int> ma;
	int a,L;

	while(1){

		ma.clear();
		cin>>a>>L;
		if(a==0&&L==0) break;

		int ind=0;
		ma.insert(map<int, int>::value_type(a,ind));
		ind++;

		while(1){
			int AL[10];
			int ii=0;
			while(ii<L){
				AL[ii]=a%10;
				a/=10;
				ii++;
			}
			sort(AL,AL+L);
			int maxn=0,minn=0;
			for(int i=0;i<L;i++){
				minn*=10;
				minn+=AL[i];
			}
			for(int i=L-1;i>=0;i--){
				maxn*=10;
				maxn+=AL[i];
			}
			a=maxn-minn;
			if(ma.find(a)!=ma.end()){
				break;
			}
			else{
				ma.insert(map<int, int>::value_type(a,ind));
				ind++;
			}
		}
		cout<<ma[a]<<" "<<a<<" "<<ind-ma[a]<<endl;
	}
}