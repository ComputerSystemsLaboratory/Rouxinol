#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int pow(int x,int y){
	if(y==0) return 1;
	return pow(x,y-1)*x;
}

int make_max(int x,int y){

	int keta=pow(10,y-1);
	int ans=0;

	for(int i=9;i>=0;i--){
		for(int j=0;j<=y;j++){
			if((x/pow(10,j))%10==i){
				ans+=i*keta;
				keta/=10;
			}
		}
	}

	return ans;
}

int make_small(int x,int y){

	int keta=pow(10,y);
	int ans=0;

	for(int i=0;i<=9;i++){
		for(int j=0;j<=y;j++){
			if((x/pow(10,j))%10==i){
				ans+=i*keta;
				keta/=10;
			}
		}
	}

	return ans;
}

int main(){

	int x,l;
	vector<int> data;
	int i;

	while(1){
		cin>>x>>l;
		if(x==0&&l==0) break;
		if(!data.empty()) data.clear();

		data.push_back(x);
		i=1;
		while(1){
			x=make_max(x,l)-make_small(x,l);
			if(find(data.begin(),data.end(),x)!=data.end()){
				break;
			}
			data.push_back(x);
			i++;
		}
		cout<<distance(data.begin(),find(data.begin(),data.end(),x))<<" "<<x<<" "<<i-distance(data.begin(),find(data.begin(),data.end(),x))<<endl;
	}
 
}
 