#include<iostream>
#include<string>
using namespace std;


int main(){
	int n,m,l,s;
	cin>>n>>m;
	int numbers[n][m];
	int numbers2[m];
	for(int v=0;v<n;v++){
		for(int x=0;x<m;x++){
			cin>>l;
			numbers[v][x]=l;
		}
	}
	for(int y=0;y<m;y++){
		cin>>l;
		numbers2[y]=l;
	}

	for(int v2=0;v2<n;v2++){
		s=0;	
		for(int x2=0;x2<m;x2++){
			s+=numbers[v2][x2]*numbers2[x2];
		}
		cout<<s<<endl;
	}

}

