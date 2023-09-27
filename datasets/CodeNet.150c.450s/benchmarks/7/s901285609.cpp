#include<iostream>
using namespace std;

int main(){

const int n = 3;
const int num = 10;
int t;

int a[num] = {0};
int b[n] = {0};
for(int i = 0; i < num; i++)
{
	cin >> a[i];
}
b[0] = a[0];
for(int i = 1; i < num; i++)
{
	t = a[i];
	for(int j = 0;j < n; j++)
	{
		if(t > b[j])
		{
			for(int k = n-1; k >= j+1; k--)
			{
			b[k] = b[k-1];
			}
		b[j] = t;
		break;
		}
	
	}

}
for(int i = 0;i < n;i++)
	cout << b[i] << "\n";
    return 0;
}