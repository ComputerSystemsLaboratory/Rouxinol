#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	int i;
	int box[51];
	i=-1;
	while(1){
		//cout<<i<<endl;
		cin>>n;
		if(cin.eof())	break;
		if(n==0){
			cout<<box[i]<<endl;
			i--;
		}
		else{
			i++;
			box[i]=n;
		}
	}
	return 0;
}	
