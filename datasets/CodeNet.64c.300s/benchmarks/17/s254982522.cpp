#include<cstdio>
#include<iostream>
using namespace std;

int main(){
int x,y,s,max=0;
cin >> x;
cin >> y;
cin >> s;
do
	{
	for(int i=1;i<s;i++)
		for(int j=1;j<s;j++)
			if(i*(100+x)/100+j*(100+x)/100==s&&i*(100+y)/100+j*(100+y)/100>max)
				max=i*(100+y)/100+j*(100+y)/100;
	cout << max << endl;
	max=0;
	cin >> x;
	cin >> y;
	cin >> s;
	}
while (x+y+s>0);
return 0;
}