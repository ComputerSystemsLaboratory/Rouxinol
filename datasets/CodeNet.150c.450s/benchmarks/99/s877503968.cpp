#include<iostream>
#include<string>

using namespace std;


char mcxi[]={'i','x','c','m'};

int main(){
	int n;
	cin>>n;
	for(int l=0;l<n;l++){
		string s[2];
		cin>>s[0]>>s[1];
		int data[4];
		
		for(int i=0;i<4;i++)data[i]=0;
		for(int i=0;i<2;i++){
			int prev=-1;
			for(int j=0;j<s[i].size();j++){
				
				for(int k=0;k<4;k++){
					if(s[i][j]==mcxi[k]){
						if(prev==-1)data[k]+=1;
						else data[k]+=prev;
						break;
						
					}
					
				}
				
				int num=s[i][j]-'0';
				if(num>1 &&num<10)prev=num;
				else prev=-1;
			}
		}
		for(int i=0;i<3;i++){
			if(data[i]>=10){
				data[i+1]+=data[i]/10;
				data[i]%=10;
			}
		}
		for(int i=3;i>=0;i--){
			if(data[i]>0){
				if(data[i]>1)cout<<data[i];
				cout<<mcxi[i];
			}
		}
		cout<<endl;
	}

}