#include<iostream>
#include<sstream>
#include<fstream>
#include<cstdio>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<string>
using namespace std;

int main(){
	int num1[4],num2[4];
	while(cin>>num1[0]>>num1[1]>>num1[2]>>num1[3]>>num2[0]>>num2[1]>>num2[2]>>num2[3]){
		int h=0,b=0;
		for(int x=0;x<4;++x){
			for(int y=0;y<4;++y){
				if(num1[x]==num2[y])++b;
				if(x==y && num1[x]==num2[y])++h;
			}		
		}
		cout<<h<<" "<<b-h<<endl;
	}	
	return 0;
}	