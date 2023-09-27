#include <iostream>

using namespace std;

int main() {
	int d[101]={0},a,m=0;
    while(cin>>a){
        d[a]++;
        m=max(m,d[a]);
    }
    for(int i=1;i<=100;i++){
        if(m==d[i])cout<<i<<endl;
    }
	return 0;
}