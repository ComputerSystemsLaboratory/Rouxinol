#include<iostream>
#include<string>//class string???????????????
using namespace std;

int main(){
	int n,i,t=0,h=0;
	string tstr,hstr;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> tstr >> hstr;

		if(tstr==hstr){
			t++;h++;
		}
		else if(tstr>hstr)t+=3;
		else h+=3;


	}

	cout <<t<<' '<<h<<endl;
	return 0;
}