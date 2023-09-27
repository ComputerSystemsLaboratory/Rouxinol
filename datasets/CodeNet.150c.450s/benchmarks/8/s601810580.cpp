#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	string Taro, Hanako;
	int Tscore=0, Hscore=0;
	int i;
	
	cin >> n;
	
	for(i=0;i<n;i++){
		cin >> Taro >> Hanako;
		
		if(Taro==Hanako){
			Tscore++;
			Hscore++;
		}
		else if(Taro>Hanako)
			Tscore+=3;
		else if(Hanako>Taro)
			Hscore+=3;
	}
	
	cout << Tscore << ' ' << Hscore << endl;
	
	return 0;
}