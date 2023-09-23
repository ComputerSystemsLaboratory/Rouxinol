#include<iostream>
#include<algorithm>
using namespace std;
const int Limit = 21, Sentry = 10;
int main(){
	long work[2*Limit+4*Sentry]={};
	long *list = work+Sentry, *list_tmp = work+Limit+3*Sentry;
	int N,num;
	cin >> N >> num;
	list[num]=1;
	for (int n = 1; n < N - 1; n++) {
		cin >> num;
		for (int i = 0; i < Limit; i++)list_tmp[i] = list[i - num] + list[i + num];
		swap(list_tmp, list);
	}
	cin>>num;
	cout<< list[num]<<endl;
	return 0;
}