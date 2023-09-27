#include <iostream>
#include <string>


using namespace std;

int main(){
	int n,m;
	string *u,*t;

	cin>>n;
	u = new string [n];

	for(int i=0;i<n;i++)cin>>u[i];

	cin>>m;
	t = new string [m];
	for(int i=0;i<m;i++)cin>>t[i];

	int state=0;
	int flag=0;

	for(int i=0;i<m;i++){
		flag=0;
		for(int j=0;j<n;j++){
			if(t[i] == u[j]){
				flag=1;
				if(state==0){
					cout<<"Opened by "<<t[i]<<endl;
				}
				else{
					cout<<"Closed by "<<t[i]<<endl;
				}
				state++;
				state%=2;
				break;
			}
		}
		if(flag==0){
			cout<<"Unknown "<<t[i]<<endl;
		}
	}

	return 0;
}