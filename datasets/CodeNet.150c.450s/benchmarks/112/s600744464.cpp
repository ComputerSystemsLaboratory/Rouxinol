#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n,m;
	char c;
	pair<char,char> data[10000];
	while(true){
		cin>>n;
		if(!n)break;
		for(int i=0;i<n;i++)cin>>data[i].first>>data[i].second;
		cin>>m;
		for(int i=0;i<m;i++){
			cin>>c;
			for(int j=0;j<n;j++)if(data[j].first==c){c=data[j].second;break;}
			cout<<c;
		}
		cout<<endl;
	}
    return 0;
}