#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	while(cin>>n,n){
		string str,s[4]={"lu","ru","ld","rd"};
		int f,ans=0;
		cin>>str;
		for(int i=0;i<4;i++){
			if(str==s[i])
			f=i;
		}
		for(int i=1;i<n;i++){
			cin>>str;
			for(int j=0;j<4;j++){
				if(str==s[j]){
					if(f+j==1 ||  f+j==5){
						ans++;
					}
					f=j;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}