#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define all(c) c.begin(),c.end()
#define uni(c) c.erase(unique(c.begin(),c.end()),c.end())
#define pb push_back
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		int y,m,d;
		cin>>y>>m>>d;
		int sum=0;
		for(int i=y+1;i<1000;i++){
			sum+=10*20;
			if(i%3!=0){
				sum-=5;
			}
		}
		for(int i=m+1;i<=10;i++){
			if(y%3!=0&&i%2==0){
				sum+=19;
			}else{
				sum+=20;
			}
		}
		int lim=20;
		if(y%3!=0&&m%2==0)
			lim=19;
		sum+=lim-d;
		cout<<sum+1<<endl;
		
	}
	return 0;
}