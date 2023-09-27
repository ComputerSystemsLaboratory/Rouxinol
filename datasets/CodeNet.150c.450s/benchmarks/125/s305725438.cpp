#include <iostream>
using namespace std;

void search(int i,int *table, int n, int *d, int *f, int *cnt){
	
	++(*cnt);
	d[i] = *cnt;
	for(int k=0;k<n;++k){
		table[k*n+i] = 0;
	}
	for(int j=0;j<n;++j){
		if(table[i*n+j]){
			search(j,table,n,d,f,cnt);
		}
	}
	
	++(*cnt);
	f[i] = *cnt;
}

int main() {
	int n,*table,*d,*f, cnt;
	
	cin>>n;
	table = new int[n*n];
	d = new int[n];
	f = new int[n];
	
	for(int i=0;i<n;++i){
		int u,k,v;
		cin>>u>>k;
		for(int j=0;j<k;++j){
			cin>>v;
			table[(u-1)*n+v-1]=1;
		}
	}
	cnt = 0;
	
	while(true){
		int rest = 0;
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				if(table[i*n+j]){
					rest = 1;
					break;
				}
			}
			if(rest){
				search(i,table,n,d,f,&cnt);
				break;
			}
		}
		if(!rest){
			break;
		}
	}
	
	for(int i=0;i<n;++i){
		cout<<i+1<<" "<<d[i]<<" "<<f[i]<<endl;
	}
	
	return 0;
}