#include <iostream>
using namespace std;

int maxNum(int num,int length){
	int data[10];

	for(int i=0;i<10;i++){
		data[i]=0;
	}

	for(int i=0;i<length;i++){
		data[num%10]++;
		num/=10;
	}

	int ten=1;
	for(int i=1;i<length;i++){
		ten*=10;
	}

	int ans=0;

	for(int j=9;j>=0;j--){
		while(data[j]>0){
			ans += (ten*j);
			data[j]--;
			ten/=10;
		}
	}

	return ans;
}

int minNum(int num,int length){
	int data[10];
	for(int i=0;i<10;i++)data[i]=0;

	int cnt=0;

	while(1){
		data[num%10]++;
		num/=10;	
		if(num==0)break;
	}

	for(int i=1;i<=9;i++){
		cnt+=data[i];
	}
		

	if(cnt>=length)cnt = length;

	int ten=1;
	for(int i=1;i<cnt;i++)ten*=10;

	int ans=0;


	for(int i=1;i<10;i++){
		while(data[i]>0){
			ans += i*ten;
			data[i]--;
			ten/=10;
		}
	}

	return ans;
}

int main(){

	int a,n;
	int data[30];

	while(cin>>a>>n){

		if(a==0 && n==0)break;
		
		for(int i=0;i<30;i++)data[i]=0;
		data[0] = a;

		for(int i=1;i<30;i++){
			data[i] = maxNum(data[i-1],n)-minNum(data[i-1],n);
		//	cout<<"i="<<i<<"max="<<maxNum(data[i-1],n)<<"min="<<minNum(data[i-1],n)<<"ans="<<data[i]<<endl;
		}

		int flag=0;
		for(int i=1;i<30;i++){
			for(int j=0;j<i;j++){
				if(data[i]==data[j]){
					cout<<j<<" "<<data[i]<<" "<<i-j<<endl;
					flag=1;
					break;
				}
			}
			if(flag==1)break;
		}

	}
	return 0;
}