#include <bits/stdc++.h>
#include <sstream>
using namespace std;
int arr[100005];
int find(int index){
	while(1){
		if(arr[index]==-1)
			break;
		else
			index=arr[index];
	}
	return index;
}
int main(){
	ios::sync_with_stdio(0);cin.tie(0); 
	int n,m,a,b;
	cin >> n >> m;
	for(int i=0;i<=n;i++){
		arr[i]=-1;
	}
	while(m--){
		cin >> a >> b;
		int tmp1=find(a);
		int tmp2=find(b);
		if(tmp1!=tmp2){
			arr[tmp2]=tmp1;
		}
	}
	
	int q;
	cin >> q;
	while(q--){
		cin >> a >> b;
		if(find(a)==find(b)){
			cout << "yes" << endl;
		}
		else{
			cout << "no" << endl;
		}
 	}
	return 0;
}


