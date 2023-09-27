#include<iostream>
#include<string>

using namespace std;

#define NMAX 123456

int main(){

	string S[10]={"NULL",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	string in;
	int N;

	cin>>N;
	while(N--){
		cin>>in;
		int c;
		if(in[0]=='0') c=0;
		else c=1;
		for(int i=1;i<in.size();i++){
			if(in[i]=='0'){
				if(c!=0){
					cout<<S[in[i-1]-'0'][(c-1)%S[in[i-1]-'0'].size()];
					c=0;
				}
			}
			else c++;
		}
		cout<<endl;
	}

}