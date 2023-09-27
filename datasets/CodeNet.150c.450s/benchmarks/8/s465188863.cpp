#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string taro, hanako;
	int x=0,y=0;
	
	int n;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> taro >> hanako;
		if (taro > hanako) x+=3;
		else if(taro == hanako) x+=1, y+=1;
		else if(taro < hanako) y+=3;
	}
	cout << x << " " << y << endl;
	return 0;
}