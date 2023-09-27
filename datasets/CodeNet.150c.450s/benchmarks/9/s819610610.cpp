#include<iostream>
#include<string>

using namespace std;

int main()
{
	string word;
	char oki;
	int m,h,su;
	cin>>word;
	
	while(word!="-"){
		cin>>m;
		su=word.size();
		for(int i=1;i<=m;i++){
			cin>>h;
			
			for(int j=0;j<h;j++){
				oki=word[0];
				for(int k=0;word[k]!='\0';k++){
					word[k]=word[k+1];
				}
				word[su-1]=oki;
			}
		}
		cout<<word<<endl;
		cin>>word;
	}
	return 0;
}