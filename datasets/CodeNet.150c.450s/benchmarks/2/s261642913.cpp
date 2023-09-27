#include<iostream>
#include <cstdlib>
#include<list>
#include<string>
#include<stack>
using namespace std;
int main() {
	int n, s[100000], small = 0, large = 0, cnt = 0; cin >> n; bool b = true;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	for (int i = 0; i < n; i++)
	{
		if(s[i]<=s[n-1]){
			small = i; cnt++;
			if (small > large) {
				swap(s[small], s[large]); large+=1;
			}
		}
		else if (b == true) { b = false; large = i; }
if(b==true){large++;}
	}
	for (int i = 0; i < n; i++)
	{
		if (i == cnt-1) {
			printf(" [%d]", s[i]);
		}
		else {
			if (i != 0) { cout << " ";
			}
			cout << s[i];
		}
	}
cout<<endl;
	return 0;
}