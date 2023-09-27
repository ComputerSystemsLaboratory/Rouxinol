#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;
 
int main () {
	int n,i;
	int a,b,c,d,f,g;
	string s;
	cin >> a >> b >> c >> d >> f >> g ;
	cin >> s;
	n=s.size();
	int a1[n+1],a2[n+1],a3[n+1],a4[n+1],a5[n+1],a6[n+1];
	a1[0]=a; a2[0]=b; a3[0]=c; a4[0]=d; a5[0]=f; a6[0]=g;
	for(i=0;i<n;i++){
		if(s[i]=='S'){
			a1[i+1]=a5[i]; a2[i+1]=a1[i]; a3[i+1]=a3[i]; a4[i+1]=a4[i]; a5[i+1]=a6[i]; a6[i+1]=a2[i];
		}
		else if(s[i]=='N'){
			a1[i+1]=a2[i]; a2[i+1]=a6[i]; a3[i+1]=a3[i]; a4[i+1]=a4[i]; a5[i+1]=a1[i]; a6[i+1]=a5[i];
		}
		else if(s[i]=='W'){
			a1[i+1]=a3[i]; a2[i+1]=a2[i]; a3[i+1]=a6[i]; a4[i+1]=a1[i]; a5[i+1]=a5[i]; a6[i+1]=a4[i];
		}
		else if(s[i]=='E'){
			a1[i+1]=a4[i]; a2[i+1]=a2[i]; a3[i+1]=a1[i]; a4[i+1]=a6[i]; a5[i+1]=a5[i]; a6[i+1]=a3[i];
		}
	}
	cout << a1[n] << endl;
}