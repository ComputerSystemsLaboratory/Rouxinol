#include<string>
#include<iostream>

using namespace std;

int main()
{
	int b;
	cin >> b;
	int *a;
	a=new int(b);
	int i;
	for(i=0;i<b;i++){
		cin>> a[i];
		}
	for(i=b-1;i>0;i--){
	cout << a[i] <<" ";
	}
	cout << a[0]<<endl;
	return 0;
}