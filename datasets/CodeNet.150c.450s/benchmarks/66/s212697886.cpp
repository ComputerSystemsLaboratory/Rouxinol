#include<bits/stdc++.h>
using namespace std;
 
int main(){
    unordered_set<string>a;
    int b;
    cin>>b;
    for(int c=0;c<b;c++){
	string d;
	cin>>d;
	a.insert(d);
	}
    bool e=false;
    int f;
    cin>>f;
    for(int g=0;g<f;g++){
	string h;
	cin>>h;
	if(a.find(h)!=a.end()){
	    if(e){e=false;cout<<"Closed by "<<h<<endl;}
	    else {e=true;cout<<"Opened by "<<h<<endl;}
	    }
	   else cout<<"Unknown "<<h<<endl;
	}
    }