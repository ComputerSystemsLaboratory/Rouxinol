/*** ?¬?????????? ***/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, p;
	int i;
	int count, size;
	int max, num;
	
	cin >> n >> p;
	while(n!=0 || p!=0){
		vector<int> v;
		for(i=0; i<n; ++i) v.push_back(0);
		count=0;
		size=p;
		
		while(1){
			for(i=size; 0<i; --i){
				++v[count];
				count=(count+1)%n;
			}
			
			max=0;
			num=-1;
			for(i=0; i<n; ++i){
				if(max<v[i]){
					max=v[i];
					num=i;
				}
			}
			if(max==p) break;
			
			while(v[count]==0) count=(count+1)%n;
			size=v[count];
			v[count]=0;
			count=(count+1)%n;
		}
		cout << num << endl;
		
		cin >> n >> p;
	}
	return 0;
}