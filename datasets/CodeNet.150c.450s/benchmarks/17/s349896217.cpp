#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main(){
	int tem;
	vector<int> v1;
	for(int i=0;i<5;i++)
		cin >> tem,v1.push_back(tem);
	sort(v1.begin(),v1.end(),greater<int>());
	for(int i=0;i<5;i++)
		cout << (i?" ":"")<< v1[i] ;
	cout << endl;
    return 0;
}