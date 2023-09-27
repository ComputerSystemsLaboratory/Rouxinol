#include <iostream>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <stack>
#include <queue>
#include <list>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[]) {
	string command;
	int i,n,num;
	list<int> v;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>command;
		if(command[0]=='i'){
			cin>>num;
			v.push_front(num);
		}else if(command[6]=='F'){
			v.pop_front();
		}else if(command[6]=='L'){
			v.pop_back();
		}else{
			cin>>num;
			for(list<int>::iterator it=v.begin();it!=v.end();it++){
				if(*it==num){
					v.erase(it);
					break;
			}	}
		}
	}
	i=0;
	for(list<int>::iterator it=v.begin();it!=v.end();it++)
	{
		if(i++)
			cout<<" ";
		cout<<(*it);	
	}
	cout<<endl;
	return 0;
}
