#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

char const mozi1[]={'.',',','!','?',' '},mozi2[]={'a','b','c'},mozi3[]={'d','e','f'},mozi4[]={'g','h','i'},mozi5[]={'j','k','l'},mozi6[]={'m','n','o'},mozi7[]={'p','q','r','s'},mozi8[]={'t','u','v'},mozi9[]={'w','x','y','z'};
char mozi(int,char);
int main(){
	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		string keitai;

		cin>>keitai;
		int cnt=0;
		for(int i=0;i<keitai.size();i++){

			if(keitai[i]=='0')	continue;

			else{
				int kazu=1;
				while(keitai[i+1]!='0'){
					kazu++;
					i++;
				}
			cout<<mozi(kazu,keitai[i]);
			i++;
			cnt++;
			}
		}
		cout<<endl;
	}
	return 0;
}


char mozi(int kazu,char keitai){
	switch (keitai)
	{
	case '1':
		kazu=kazu%5-1;
		if(kazu==-1)	return mozi1[4];
		return mozi1[kazu];
		
	case '2':
		kazu=kazu%3-1;
		if(kazu==-1)	return mozi2[2];
		return mozi2[kazu];
		
	case '3':
		kazu=kazu%3-1;
		if(kazu==-1)	return mozi3[2];
		return mozi3[kazu];
		
	case '4':
		kazu=kazu%3-1;
		if(kazu==-1)	return mozi4[2];
		return mozi4[kazu];
		
	case '5':
		kazu=kazu%3-1;
		if(kazu==-1)	return mozi5[2];
		return mozi5[kazu];
		
	case '6':
		kazu=kazu%3-1;
		if(kazu==-1)	return mozi6[2];
		return mozi6[kazu];
		
	case '7':
		kazu=kazu%4-1;
		if(kazu==-1)	return mozi7[3];
		return mozi7[kazu];
		
	case '8':
		kazu=kazu%3-1;
		if(kazu==-1)	return mozi8[2];
		return mozi8[kazu];
		
	case '9':
		kazu=kazu%4-1;
		if(kazu==-1)	return mozi9[3];
		return mozi9[kazu];
	default:
		return '0';
	}
}