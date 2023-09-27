#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n,temp,sum,box[]={1,5,3,3,3,3,3,4,3,4};
	char s[1030];
	char tab[20][10]={" ",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	cin>>n;
	while(n--){
		cin>>s;
		sum=0;
		for(int i=0;i<(int)strlen(s);i++){
			if(s[i]=='0'){
				if(sum!=0){
					cout<<tab[temp][(sum-1)%box[temp]];
				}
				sum=0;
			}
			else{
				temp=s[i]-'0';
				sum++;
			}
		}
		cout<<endl;
	}
	return 0;
}