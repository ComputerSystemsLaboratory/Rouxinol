#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	cin>>n;
	string str,num[10]={"0","1","2","3","4","5","6","7","8","9"};
	string s[10]={" ",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	for(int i=0;i<n;i++){
		cin>>str;
		for(int j=0;j<str.size();j++){
			for(int k=1;k<=9;k++){
				if(num[k][0]==str[j]){
					int cnt=-1;
					while(str[j]!='0'){
						cnt++;
						j++;
					}
					string S=s[k];
					cout<<S[cnt%S.size()];
				}
			}
		}
		cout<<endl;
	}
	return 0;
}