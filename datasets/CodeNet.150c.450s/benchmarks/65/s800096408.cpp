#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
	string card[36],card2[36],tem;
	int n,ans=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>card[i];
		card2[i]=card[i];
	}
	//bubblesort
	for(int i=0;i<=n-1;++i){
		for(int j=n-1;j>=i+1;j--){
			if(card[j][1]-'0'<card[j-1][1]-'0'){
				//tem=card[j];
				//card[j]=card[j-1];
				//card[j-1]=tem;
				swap(card[j],card[j-1]);
			}
		}
	}
    for(int i=0;i<=n-1;i++){
		if(i!=n-1)cout<<card[i]<<" ";
		else cout<<card[i]<<endl;
	}
	cout<<"Stable"<<endl;
	//selectionsort
	int minj=0;
	for(int i=0;i<=n-1;i++){
		minj=i;
		for(int j=i;j<=n-1;j++){
			if(card2[j][1]-'0'<card2[minj][1]-'0'){
				minj=j;	
		}
		}
			if(i!=minj){swap(card2[i],card2[minj]);}
	}
	//stable or not stable 
	for(int i=0;i<n;i++){
		if(i!=n-1)cout<<card2[i]<<" ";
		else cout<<card2[i]<<endl;
		if(card[i]==card2[i]){
			ans++;
		}
	}
	ans==n ? cout<<"Stable"<<endl  : cout<<"Not stable"<<endl;
	string a;cin>>a;
    return 0;
}