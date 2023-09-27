#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;
#define ref goto refrain
int main(){
	int m,tp=0,hp=0;
	cin>>m;
	string taro,hanako;
	for(int i=0;i<m;i++){
		cin>>taro;
		cin>>hanako;
		if(taro<hanako){
			hp+=3;
		}
		else if(taro>hanako){
			tp+=3;
		}
		else{
			hp++;
			tp++;
		}
	}
	cout<<tp<<' '<<hp<<endl;
	return 0;
}
		
	