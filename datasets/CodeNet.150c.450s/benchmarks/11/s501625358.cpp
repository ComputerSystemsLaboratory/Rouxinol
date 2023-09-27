#include<iostream>
using namespace std;

int main()
{
	int n;
	char mark;
	int lank;
	int Slank[13]={0}, Hlank[13]={0}, Clank[13]={0}, Dlank[13]={0};
	int i;
	
	cin >> n;
	
	for(i=0;i<n;i++){
		cin >> mark >> lank;
		if(mark=='S')
			Slank[lank-1]=lank;
		else if(mark=='H')
			Hlank[lank-1]=lank;
		else if(mark=='C')
			Clank[lank-1]=lank;
		else if(mark=='D')
			Dlank[lank-1]=lank;
	}
	
	for(i=0;i<13;i++){
		if(Slank[i]==0)
			cout << 'S' << ' ' << i+1 << endl;
	}
	
	for(i=0;i<13;i++){
		if(Hlank[i]==0)
			cout << 'H' << ' ' << i+1 << endl;
	}
	
	for(i=0;i<13;i++){
		if(Clank[i]==0)
			cout << 'C' << ' ' << i+1 << endl;
	}
	
	for(i=0;i<13;i++){
		if(Dlank[i]==0)
			cout << 'D' << ' ' << i+1 << endl;
	}
	
	return 0;
}