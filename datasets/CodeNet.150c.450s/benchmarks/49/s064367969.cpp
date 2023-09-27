#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,s[120],count;;
	while(true){
		cin>>n;
		if(n==0)
			break;
		count=0;
		for(int i=0;i<n;i++){
			cin>>s[i];
			count+=s[i];
		}
		for(int i=0;i<n-1;i++){
			for(int j=n-1;j>i;j--){
				if(s[j]<s[j-1]){
					int tmp=s[j];
					s[j]=s[j-1];
					s[j-1]=tmp;
				}
			}
		}
		count-=s[0];
		count-=s[n-1];
		cout<<count/(n-2)<<endl;
	}
    return 0;
}
 