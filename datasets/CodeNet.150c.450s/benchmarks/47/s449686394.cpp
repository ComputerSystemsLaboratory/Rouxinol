#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int W,H,x,y,r;
	scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
	if(x-r>=0 && x+r<=W && y-r>=0 && y+r<=H){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
	return 0;
}