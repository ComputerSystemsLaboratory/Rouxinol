#include<iostream>
#include<map>

using namespace std;

int data[105]={0};
int main(){
	int x;
	int ma=0;
	while(cin>>x){
		data[x]++;
		ma=max(data[x],ma);
	}
	for(int i=0;i<105;i++){
		if(data[i]==ma)cout<<i<<endl;
	}
	
}