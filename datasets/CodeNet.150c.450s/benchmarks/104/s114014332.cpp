#include <iostream>
using namespace std;

int main(){
	int end[35];
	for(int i = 1;i<=30;i++)
		end[i]= i;
	int w;
	int n;
	
	cin >> w;
	cin >> n;
	for(int i = 1; i<=n;i++){
		int a,b;
		char c;
		cin >> a;
		cin >> c;
		cin >> b;
		int temp = end[b];
		end[b]=end[a];
		end[a]=temp;
	
	}
	for(int i = 1;i<=w;i++)
		cout << end[i] << endl;
		
	return 0;
}