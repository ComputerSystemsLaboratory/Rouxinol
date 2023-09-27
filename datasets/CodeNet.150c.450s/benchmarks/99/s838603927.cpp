#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>

using namespace std; 

string list = "0123456789";

int MCXItoINT(string s)
{
	int l=s.length(), n=0, b=1;
	string t;

	for(int i=0; i<l; i++){
		t = s.substr(i,1);
		if(t=="m"){n += (b*1000); b=1;}
		else if(t=="c"){n += (b*100); b=1;}
		else if(t=="x"){n += (b*10); b=1;}
		else if(t=="i"){n += b; b=1;}
		else{b=atoi(t.c_str());}
	}

	return n;
}

void INTtoMCXI(int z)
{
	string s="";
	int m,c,x,i;

	m=z/1000;
	c=(z%1000)/100;
	x=(z%100)/10;
	i= z%10;

	if(m==1){s = s+"m";}
	else if(m!=0){s = s + list.substr(m,1)+"m";}

	if(c==1){s = s+"c";}
	else if(c!=0){s = s + list.substr(c,1)+"c";}

	if(x==1){s = s+"x";}
	else if(x!=0){s = s + list.substr(x,1)+"x";}

	if(i==1){s = s+"i";}
	else if(i!=0){s = s + list.substr(i,1)+"i";}

	cout << s << endl;

}

int main()
{
	int n;
	string a, b;

	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a >> b;
		INTtoMCXI( MCXItoINT(a) + MCXItoINT(b) );
	}

	return 0;
}