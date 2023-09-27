#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;
		
int main(void){
	string taro,hanako;
	int tp=0,hp=0;
	int turn;
	cin>>turn;
	for(int i=0;i<turn;i++){
		cin>>taro>>hanako;
		for(int j=0;j<taro.size();j++){
		   if(isupper(taro[j]))
			    taro[j] = tolower(taro[j]);
	    }
		for(int i=0;i<hanako.size();i++){
		   if(isupper(hanako[i]))
			    hanako[i] = tolower(hanako[i]);
		}
		if(taro.compare(hanako)<0)
			hp+=3;
		else if(taro.compare(hanako)>0)
			tp+=3;
		else{
			tp++;
			hp++;
		}
	}
	cout<<tp<<" "<<hp<<endl;

	return 0;
}