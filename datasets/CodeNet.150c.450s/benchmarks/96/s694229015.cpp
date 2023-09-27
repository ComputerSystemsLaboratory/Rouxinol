#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		int ans=0;
		int j=0;
		while(j<s.size()){
			int cnt=0;
			int t=0;
			while(s[j+t+1]!='0'){
				if(s[j]=='0')break;
				t++;
			}
			if(s[j]=='1'){
				if((t+1)%5==1){
					cout<<".";
				}
				if((t+1)%5==2){
					cout<<",";
				}
				if((t+1)%5==3){
					cout<<"!";
				}
				if((t+1)%5==4){
					cout<<"?";
				}
				if((t+1)%5==0){
					cout<<" ";
				}
			}
			if(s[j]=='2'){
				if((t+1)%3==1){
					cout<<"a";
				}
				if((t+1)%3==2){
					cout<<"b";
				}
				if((t+1)%3==0){
					cout<<"c";
				}
			}
			if(s[j]=='3'){
				if((t+1)%3==1){
					cout<<"d";
				}
				if((t+1)%3==2){
					cout<<"e";
				}
				if((t+1)%3==0){
					cout<<"f";
				}

			}
			if(s[j]=='4'){
				if((t+1)%3==1){
					cout<<"g";
				}
				if((t+1)%3==2){
					cout<<"h";
				}
				if((t+1)%3==0){
					cout<<"i";
				}
			}
			if(s[j]=='5'){
				if((t+1)%3==1){
					cout<<"j";
				}
				if((t+1)%3==2){
					cout<<"k";
				}
				if((t+1)%3==0){
					cout<<"l";
				}
			}
			if(s[j]=='6'){
				if((t+1)%3==1){
					cout<<"m";
				}
				if((t+1)%3==2){
					cout<<"n";
				}
				if((t+1)%3==0){
					cout<<"o";
				}
			}
			if(s[j]=='7'){
				if((t+1)%4==1){
					cout<<"p";
				}
				if((t+1)%4==2){
					cout<<"q";
				}
				if((t+1)%4==3){
					cout<<"r";
				}
				if((t+1)%4==0){
					cout<<"s";
				}
			}
			if(s[j]=='8'){
				if((t+1)%3==1){
					cout<<"t";
				}
				if((t+1)%3==2){
					cout<<"u";
				}
				if((t+1)%3==0){
					cout<<"v";
				}
			}
			if(s[j]=='9'){
				if((t+1)%4==1){
					cout<<"w";
				}
				if((t+1)%4==2){
					cout<<"x";
				}
				if((t+1)%4==3){
					cout<<"y";
				}
				if((t+1)%4==0){
					cout<<"z";
				}
			}
			j+=t+1;
			
		}
		cout<<endl;
	}
	return 0;
}