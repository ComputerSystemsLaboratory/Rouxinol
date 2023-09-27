#include <iostream>
using namespace std;

char dic[64][2]={""};

int main(){
	int n,i,tail;
	char s;
	while(1){
		tail=0;
		cin>>n;
		if(!n) return 0;
		while(n--){
			cin>>dic[tail][0];
			cin>>dic[tail++][1];
		}
		cin>>n;
		while(n--){
			for(cin>>s,i=0;i<tail;i++) if(s == dic[i][0]){ cout<<dic[i][1]; break;}
      if(i==tail) cout<<s;
		}
	cout<<endl;
	}
}