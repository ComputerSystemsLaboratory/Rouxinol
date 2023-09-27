#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void Makepn(vector<int>&v , int n){
	int count=0;
	int i, j;
	vector<bool> pn(n+1 , true);
	pn[0]=false;
	pn[1]=false;
	for(i=2;i<sqrt(n); i++){
		if(pn[i]){
			for(j=0 ; i*(j+2)< n ; j++){
				pn[i*(j+2)]=false;
			}	
		}
	}
	for(i=2 ; i<n ; i++){
		if(pn[i]){
			count++;
		}
	}
	v.resize(count);

	v[0]=2;
	j=1;
	for(i=3;i<=n;i+=2){
		if(pn[i]){
			v[j++]=i;
		}
	}
	return;
}

int main(){
	ios::sync_with_stdio(false);
	vector<int> pn;
	Makepn(pn , 10000);
	int n , num , ans;
	cin>>n;
	ans=n;
	for(int i=0 ; i<n ; i++){
		cin >> num;
		for(int j=0 ; j<pn.size(); j++){
			if(pn[j]*pn[j]>num) break;
			if(num%pn[j]==0){
				ans--;
				break;
			}
		}
	}
	cout << ans << endl;
	return 0;
}