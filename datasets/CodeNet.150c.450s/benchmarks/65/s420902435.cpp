#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>
#include<math.h>
#include<string>
using namespace std;

	struct  card{
	char e;
	int n;
	
	};
	
	bool check(card *card1,card *card2,int N){//card2が元
		vector<bool>flag;
		for(int i=0;i<N;i++){
			for(int j=i+1;j<N;j++){
				if(card2[i].n==card2[j].n){
					for(int k=0;i<N;k++){
						if(card1[k].n==card2[i].n&&card1[k].e==card2[i].e){
						break;
						}
						else if(card1[k].n==card2[j].n&&card1[k].e==card2[j].e)return false;
					
					}
				}	
			}
		}
	return true;
}

int main(){
	bool flag;
	
	//int a[100],b[100];string aaa[100];
	 card c1[100],c3[100];
	int N;cin>>N;
	
	for(int i=0;i<N;i++)cin>>c1[i].e>>c1[i].n;

	card c2[100];
		for(int i=0;i<N;i++){c2[i]=c1[i];c3[i]=c2[i];}
		//for(int i=0;i<N;i++)cout<<c2[i].e<<c2[i].n<<endl;
	///バブルソート
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N-1;j++){
			if(c1[j].n>c1[j+1].n)swap(c1[j],c1[j+1]);
		}
	}
	for(int i=0;i<N-1;i++)cout<<c1[i].e<<c1[i].n<<" ";
	cout<<c1[N-1].e<<c1[N-1].n<<endl;
	string em=(check(c1,c3,N)) ? "Stable" : "Not stable";
	cout<<em<<endl;
	
	//選択ソート
	for(int i=0;i<N;i++){
		int mini=i;
		for(int j=i;j<N;j++){
			if(c2[j].n<c2[mini].n)mini=j;
		}
		swap(c2[i],c2[mini]);
	}
	for(int i=0;i<N-1;i++)cout<<c2[i].e<<c2[i].n<<" ";
	cout<<c2[N-1].e<<c2[N-1].n<<endl;
	 em=(check(c2,c3,N)) ? "Stable" : "Not stable";
	cout<<em<<endl;

	return 0;
}