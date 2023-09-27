#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<string> D(10);
	D[0]="";
	D[1]=".,!? ";
	D[2]="abc";
	D[3]="def";
	D[4]="ghi";
	D[5]="jkl";
	D[6]="mno";
	D[7]="pqrs";
	D[8]="tuv";
	D[9]="wxyz";

	for(int i=0;i<n;i++){
		string s;
		cin>>s;

		int pos=0;
		int now=-1;
		int count=0;
		while(pos<s.size()){
			if(s[pos]=='0'){
				if(now<0){pos++;continue;}
				count%=D[now].size();
				cout<<D[now][count];
				count=0;
				pos++;
				now=-1;
			}
			else{
				if(now<0){
					now=s[pos]-'0';
					count=0;
					
				}
				else count++;
				pos++;
			}
		}
		cout<<endl;
	}
	return 0;
}