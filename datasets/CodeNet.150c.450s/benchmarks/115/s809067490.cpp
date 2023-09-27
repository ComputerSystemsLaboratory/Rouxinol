#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cstring>

using namespace std;

string s1,s2;
int l[1010][1010];
bool flag[1010][1010];

int L(int i,int j){
	//cout<<i<<" "<<j<<endl;
	if(i<0||j<0){
		return 0;
	}
	else if(s1.at(i)==s2.at(j)){
		if(!flag[i][j]){
			l[i][j]=1+L(i-1,j-1);
			flag[i][j]=true;
		}
		return l[i][j];
	}
	else{
		if(!flag[i][j]){
			int a=L(i,j-1);
			int b=L(i-1,j);
			l[i][j]=a>b?a:b;
			flag[i][j]=true;
		}
		return l[i][j];
	}
}

int main(){
	int q;
	cin>>q;
	for(int i=0; i<q; i++){
		cin>>s1>>s2;
		for(int j=0; j<1010; j++){
			for(int k=0; k<1010; k++){
				flag[j][k]=false;
			}
		}

		cout<<L(s1.size()-1,s2.size()-1)<<endl;
	}
}