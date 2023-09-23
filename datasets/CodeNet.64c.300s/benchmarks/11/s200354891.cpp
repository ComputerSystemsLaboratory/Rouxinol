#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
 
using namespace std;


int main(){
	int S,h,m,s;
	cin >> S;
	h=S/3600;
	m=(S-(h*3600))/60;
	s=(S-(h*3600))%60;
	cout << h << ':' << m << ':' << s << endl;
	
}
