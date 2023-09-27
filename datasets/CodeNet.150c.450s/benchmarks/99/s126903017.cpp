#include<string>
#include<iostream>
#include<vector>
using namespace std;


int main()
{
	int n;
	int sum = 0;

	/*
	char c = '3';
	cout << (int)(c-'0')<<endl;
	*/
	cin >> n;
	
	for(int i=0;i<n;i++){
		string str1, str2;
		cin >> str1 >> str2;
		int s = 1;
		int mcxi1 = 0, mcxi2=0;
		for(int j=0;j<str1.size();j++){
			int temp=0;
			 if(str1[j]=='m'){
				 temp+=1000*s;
				 s=1;
			 }else if(str1[j]=='c'){
				 temp+=100*s;
				 s=1;
			 }else if(str1[j]=='x'){
				 temp+=10*s;
				 s=1;
			 }else if(str1[j]=='i'){
				 temp+=s;
				 s=1;
			 }else{
				 s=(int)(str1[j]-'0');
			 }
			 mcxi1+=temp;
		}
		//cout << mcxi1<<endl;
		for(int j=0;j<str2.size();j++){
			int temp=0;
			 if(str2[j]=='m'){
				 temp+=1000*s;
				 s=1;
			 }else if(str2[j]=='c'){
				 temp+=100*s;
				 s=1;
			 }else if(str2[j]=='x'){
				 temp+=10*s;
				 s=1;
			 }else if(str2[j]=='i'){
				 temp+=s;
				 s=1;
			 }else{
				 s=(int)(str2[j]-'0');
			 }
			 //cout<<temp<<endl;
			 mcxi2+=temp;
		}
		//cout<<mcxi<<endl;
		int mcxi = mcxi1+mcxi2;
		//cout << mcxi << endl<<endl;
		string ans ="";
		int sen = mcxi/1000;
		if(sen==1){
			ans+="m";
		}else if(sen>0){
			ans+=(char)(sen+'0');
			ans+="m";
		}
		if(sen>0){
			mcxi-=sen*1000;
		}
		//cout << mcxi << endl;

		int hyaku = mcxi/100;
		if(hyaku==1){
			ans+="c";
		}else if(hyaku>0){
			ans+=(char)(hyaku+'0');
			ans+="c";
		}
		if(hyaku>0){
			mcxi-=hyaku*100;
		}
		//cout << mcxi << endl;

		int ju = mcxi/10;
		if(ju==1){
			ans+="x";
		}else if(ju>0){
			ans+=(char)(ju+'0');
			ans+="x";
		}
		if(ju>0){
			mcxi-=ju*10;
		}
		//cout << mcxi << endl;

		if(mcxi==1){
			ans+="i";
		}else if(mcxi>0){
			ans+=(char)(mcxi+'0');
			ans+="i";
		}
		//cout << mcxi << endl;
		cout << ans <<endl;
	}
	//cout<<sum<<endl;
	return 0;
}