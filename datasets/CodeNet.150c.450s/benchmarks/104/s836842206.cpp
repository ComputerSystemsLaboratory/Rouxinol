#include <iostream>
using namespace std;

const int max_w = 30;
int w[max_w];

void init(int n){
	for(int i=0;i<n;i++){
		w[i] = i+1;
	}
}
void swap(int a,int b)
{
	int tmp = w[a];
	w[a] = w[b];
	w[b] = tmp;
}
void show(int n)
{
	for(int i=0;i<n;i++){
		cout << w[i] << endl;
	}
}

int main()
{
	int w,n;
	int a,b;
	char c;

	while(cin >> w && cin >> n){
		init(w);
		for(int i=0;i<n;i++){
			cin >> a  >> c >> b;
			swap(a-1,b-1);
		}
		show(w);
	}
	return 0;
}