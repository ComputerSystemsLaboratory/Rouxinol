#include <iostream>
#include <cstdio>
#include <string>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    int N,num;
	int so[10000]={};
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>num;
		so[num]++;
	}
	for(int j=0,i=0;j<N;i++){
		if(so[i]){
			if(j){
				for(int k=0;k<so[i];k++){
					cout<<' '<<i;
					j++;
				}
			}else{
				cout<<i;
				j++;
				for(int k=1;k<so[i];k++){
					cout<<' '<<i;
					j++;
				}
			}
		}
	}
	cout<<endl;
}