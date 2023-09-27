#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	string str("0123456789");
	int n;
	while(cin>>n){
		if(n==0) break;
		string s;
		int a[n][2];
		for(int i=0;i<n;i++){
			a[i][0]=0;
			a[i][1]=0;
			cin>>s;
			for(int j=0;j<10;j++){
				if(s[0]==str[j]){
					a[i][0]=a[i][0]+60*60*10*j;
				}
				if(s[1]==str[j]){
					a[i][0]=a[i][0]+60*60*j;
				}
				if(s[3]==str[j]){
					a[i][0]=a[i][0]+60*10*j;
				}
				if(s[4]==str[j]){
					a[i][0]=a[i][0]+60*j;
				}
				if(s[6]==str[j]){
					a[i][0]=a[i][0]+10*j;
				}
				if(s[7]==str[j]){
					a[i][0]=a[i][0]+j;
				}
			}
			cin>>s;
			for(int j=0;j<10;j++){
				if(s[0]==str[j]){
					a[i][1]=a[i][1]+60*60*10*j;
				}
				if(s[1]==str[j]){
					a[i][1]=a[i][1]+60*60*j;
				}
				if(s[3]==str[j]){
					a[i][1]=a[i][1]+60*10*j;
				}
				if(s[4]==str[j]){
					a[i][1]=a[i][1]+60*j;
				}
				if(s[6]==str[j]){
					a[i][1]=a[i][1]+10*j;
				}
				if(s[7]==str[j]){
					a[i][1]=a[i][1]+j;
				}
			}
		}
		int ct=0,iru=0;
		for(int i=0;i<86400;i++){
			for(int j=0;j<n;j++){
				if(a[j][0]==i){
					ct++;
				}
				else if(a[j][1]==i){
					ct--;
				}
			}
			iru=max(iru,ct);
		}
		cout<<iru<<endl;
	}
    return 0;
}