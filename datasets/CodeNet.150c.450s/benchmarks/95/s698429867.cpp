#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,r[3],l[3];
	while(true){
	cin>>n;
	if(n==0)
		break;
	string f;
	for(int i=0;i<3;i++)
		r[i]=0,l[i]=0;
	int count=0;
	for(int i=0;i<n;i++){
		cin>>f;
		if(f=="ru")
			r[0]=min(1,r[0]+1);
		if(f=="rd")
			r[0]=max(0,r[0]-1);
		if(f=="lu")
			l[0]=min(1,l[0]+1);
		if(f=="ld")
			l[0]=max(0,l[0]-1);
		if(r[0]==l[0]&&r[2]==l[2]&&r[0]!=r[2])
			count++;
		r[2]=r[1],r[1]=r[0];
		l[2]=l[1],l[1]=l[0];
	}
	cout<<count<<endl;
	}
	return 0;
}