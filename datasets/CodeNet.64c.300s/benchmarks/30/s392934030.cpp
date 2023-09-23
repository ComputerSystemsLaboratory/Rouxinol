#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n[6], count=0, coin[] = { 500,100,50,10,5 };

    for (int i=0; i<6; i++) 
{
cin >> n[i];
if(!n[i])break;
}

    for (int i=0;i<6;i++) {
	if(n[i] == 0) break;

	int s=1000 - n[i];

	for (int j=0;j<5;j++) {
	   int m = s / coin[j];
	   count += m;
	   s -= m * coin[j];
	}

	count += s;
	cout << count << endl;
count = 0;
    }
    return 0;
}