#include <iostream>
#include <stack>
using namespace std;

int main(){
	
	
	int n;
	int b[10];
	
	cin>>n;
	while(n>0){
		stack<int> s1,s2;
		int f=0;
		for(int i=0;i<10;i++)
			cin>>b[i];
		for(int i=0;i<10;i++){
			if(s1.empty())
			s1.push(b[i]);
			else if(s1.top()<b[i])
			s1.push(b[i]);
			else if(s2.empty())
			s2.push(b[i]);
			else if(s2.top()<b[i])
			s2.push(b[i]);
			else
				f=1;
		}
		if(f==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		n--;
			
	}
}