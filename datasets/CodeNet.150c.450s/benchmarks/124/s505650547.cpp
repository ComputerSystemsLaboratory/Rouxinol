#include <iostream>

using namespace std;
int n;
int dat[100][100];
int cost[100];
int done[100];

void prim(){
	for(int i=0;i<n;i++){
		cost[i]=1<<21;
		done[i]=0;
	}
	int s=0;	
	int next, ncost=1<<21;
	done[s]=1;
	cost[s]=0;
	while(1){
		ncost=1<<21;
		for(int j=0;j<n;j++){
			if(done[j]){
				for(int i=0;i<n;i++){
					if(dat[j][i]!=-1){
						if(cost[i]>=dat[j][i]&&!done[i]){
							cost[i]=dat[j][i];
						}
						if(ncost>cost[i]&&!done[i]){
							next=i;
							ncost=cost[i];
						}
					}
				}
			}
		}
//		cout<<"next:"<<next<<" cost:"<<cost[next]<<endl;
		done[next]=1;
		int flag=true;
		for(int i=0;i<n;i++){
			if(!done[i]) flag = false;
		}
		if(flag)
			return;
	}
}


void dijk(){
	for(int i=0;i<n;i++){
		cost[i]=1<<21;
		done[i]=0;
	}
	int s=0;	
	int next, ncost=1<<21;
	done[s]=1;
	cost[s]=0;
	while(1){
		ncost=1<<21;
		for(int j=0;j<n;j++){
			if(done[j]){
				for(int i=0;i<n;i++){
					if(dat[j][i]!=0){
						if(cost[i]>=dat[j][i]+cost[j]){
							cost[i]=dat[j][i]+cost[j];
						}
						if(ncost>cost[i]&&!done[i]){
							next=i;
							ncost=cost[i];
						}
					}
				}
			}
		}
//		cout<<"next:"<<next<<" cost:"<<cost[next]<<endl;
		done[next]=1;
		int flag=true;
		for(int i=0;i<n;i++){
			if(!done[i]) flag = false;
		}
		if(flag)
			return;
	}
}


int main(){
	int num, from, dist, c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>from>>num;
		for(int j=0;j<num;j++){
			cin>>dist>>c;
			dat[from][dist]=c;
		}
	}
	dijk();
	for(int i=0;i<n;i++){
		cout<<i<<" "<<cost[i]<<endl;
	}
	return 0;
}