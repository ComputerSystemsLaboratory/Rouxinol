#include <iostream>
#include <vector>
using namespace std;

int main(){
	int N,M,p,count;
	vector<int> N_n(1500000,0),M_n(1500000,0);
	vector<int> N_s,M_s;
	while(cin>>N>>M,N){
		count=0;
		for(int i=0;i<N;i++){
			cin>>p;
			N_s.push_back(p);
		}
		for(int i=0;i<M;i++){
			cin>>p;
			M_s.push_back(p);
		}
		for(int i=0;i<N;i++){
			p=0;
			for(int j=i;j<N;j++){
				p+=N_s[j];
				N_n[p-1]++;
			}
		}
		for(int i=0;i<M;i++){
			p=0;
			for(int j=i;j<M;j++){
				p+=M_s[j];
				M_n[p-1]++;
			}
		}
		for(int i=0;i<1500000;i++){
			count+=M_n[i]*N_n[i];
			if(M_n[i]!=0||N_n[i]!=0)
			M_n[i]=N_n[i]=0;
		}
		cout<<count<<endl;
		N_s.clear();
		M_s.clear();


	}
	return 0;
}