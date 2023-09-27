#include<iostream>
using namespace std;

int main(){
int N;
cin >> N;
int a[N];
for(int i = 0; i < N; i++){
cin >> a[i];
}

int min= a[0]; 
int max= a[0];
long long sum= a[0];

for(int i = 1; i < N; i++){
 sum += a[i];
 if(a[i] < min) min = a[i];
 if(a[i] > max) max = a[i];
}

cout << min << " " << max << " " << sum << endl;
}
