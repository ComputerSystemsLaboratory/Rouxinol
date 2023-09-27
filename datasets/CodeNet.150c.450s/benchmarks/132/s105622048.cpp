#include<iostream>

using namespace std;


int next(int now,int n){
	if(now+1<n)return now+1;
	return 0;
}
int main(){
	int n,q;
	while(cin>>n>>q&&n&&q){
		int data[50];
		int wan=q;
		fill(data,data+50,0);
		int now=0;
		bool end=false;
		while(!end){
			if(wan>0){
				data[now]++;
				wan--;
			}
			else {
				wan=data[now];
				data[now]=0;
			}
			if(data[now]==q){
				end=true;
				cout<<now<<endl;
			}
			now=next(now,n);
		}
	}
	
	
}