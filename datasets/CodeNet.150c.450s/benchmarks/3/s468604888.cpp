#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,to) for(int i=x;i<to;i++)

string replace(string trans,int a,int b,string re){
	rep(i,a,b+1){
		trans[i]=re[i-a];
	}
	return trans;
}

string print(string trans,int a,int b){
	string transs = trans; 
	trans = trans.substr(a,b-a+1);
	cout << trans << endl;
	return transs;
}

string reverse(string trans,int a,int b){
		int i=a;
		int j=b;
		while(i<j){
			swap(trans[i],trans[j]);
			i++;
			j--;
		}
	return trans;
}

int main(){
	int q,a,b;
	string str,trans;
	cin>>trans;
	cin>>q;
	rep(i,0,q){
		cin >> str >> a >> b;
		if(str=="print") print(trans,a,b);
		else if(str=="replace"){
			string re;
			cin >> re;
			trans=replace(trans,a,b,re);
		}
		else if(str=="reverse") trans=reverse(trans,a,b);
	}
	return 0;
}
