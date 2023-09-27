#include<iostream>
using namespace std;
int main(){
while(true){
int n;
cin >> n;
if(n == 0)return 0;
int a[n];
for(int i = 0; i < n; i++)
cin >> a[i];

int max = 0;
int min = 1000;
int sum = 0;

for(int i = 0 ; i < n ; i++){
	if(a[i] > max)
	max = a[i];
	if (a[i] < min)
	min = a[i];
	sum += a[i];
}
cout << (sum-max-min)/(n-2) << endl;

}
}