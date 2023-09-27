#include<bits/stdc++.h>
using namespace std;

int main(){
	int m;
	cin>>m;
	for(int i = 0; i < m; i++){
		string str[1000] = {}, temp;
		int si, count = 0, f;
		cin>>temp;
		
		si = temp.size();
		for(int j = 1; j < si; j++){
			string temp2[2][2] = {}, temp3[20] = {};
			int count2 = 0;
			for(int k = 0; k < j; k++){
				temp2[0][0] += temp[k];
				temp2[0][1] += temp[j-k-1];
			}
			for(int k = j; k < si; k++){
				temp2[1][0] += temp[k];
				temp2[1][1] += temp[si-(k-j)-1];
			}
			/*
			cout<<temp2[0][0]<<endl;
			cout<<temp2[0][1]<<endl;
			cout<<temp2[1][0]<<endl;
			cout<<temp2[1][1]<<endl;*/
			for(int k = 0; k < 8; k++)temp3[k] = temp2[k/4][(k/2)%2] + temp2[(k/4 + 1)%2][k%2];//cout<<temp3[k]<<" "<<k/4<<(k/2)%2<<(k/4 + 1)%2<<k%2<<endl;
			//cin>>f;
			for(int k = 0; k < 8; k++){
				f = 0;
				for(int l = 0; l < count; l++){
					if(temp3[k] == str[l]) f = 1;
				}
				if(f == 0)str[count++] = temp3[k];
			}
		}
		
		cout<<count<<endl;
	}
	return 0;
}
