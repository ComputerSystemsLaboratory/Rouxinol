#include <iostream>
#include <string>
using namespace std;
int main(){
	int w,h,ct;
	string s;
	while(cin>>w>>h){
		if(w==0&&h==0) break;
		int a[w+2][h+2];
		for(int i=0;i<h+2;i++){
			for(int j=0;j<w+2;j++){
				a[j][i]=0;
			}
		}
		int num=1;
		for(int i=1;i<h+1;i++){
			cin>>s;
			for(int j=1;j<w+1;j++){
				if(s[j-1]=='.'){
					a[j][i]=1;
				}
				else if(s[j-1]=='#'){
					a[j][i]=0;
				}
				else if(s[j-1]=='@'){
					a[j][i]=2;
				}
			}
		}
		do{
			ct=0;
			for(int i=1;i<h+1;i++){
				for(int j=1;j<w+1;j++){
					if(a[j][i]==2&&a[j-1][i]==1){
						a[j-1][i]=2;
						ct++;
						num++;
					}
					else if(a[j][i]==2&&a[j+1][i]==1){
						a[j+1][i]=2;
						ct++;
						num++;
					}
					else if(a[j][i]==2&&a[j][i-1]==1){
						a[j][i-1]=2;
						ct++;
						num++;
					}
					else if(a[j][i]==2&&a[j][i+1]==1){
						a[j][i+1]=2;
						ct++;
						num++;
					}
				}
			}
		} while(ct>0);
		cout<<num<<endl;
	}
    return 0;
}