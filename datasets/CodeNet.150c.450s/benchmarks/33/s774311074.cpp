#include<iostream>
#include<string>
using namespace std;
int main(){
	int x,y,s;
	while(true){
		cin>>x>>y>>s;
		if(x==0)
			break;
		int best=0;
		for(int i=1;i<s;i++)
			for(int j=1;j<s;j++)
				if(i*(100+x)/100+j*(100+x)/100==s)
					if(i*(100+y)/100+j*(100+y)/100>best)
						best=i*(100+y)/100+j*(100+y)/100;
		cout<<best<<endl;

	}
    return 0;
}