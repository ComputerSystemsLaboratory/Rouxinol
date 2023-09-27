#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main(){
int a,b,c[60],d[30];
cin >> a;cin >> b;
for(int i = 0;i <= (b - 1);i++){
	scanf("%d,%d",&c[2 * i],&c[2 * i + 1]);
}
for(int e = 1;e <= a;e++){
	d[e - 1] = e;
}
for(int f = 0;f <= b - 1;f++){
	swap(d[c[2 * f] - 1],d[c[2 * f + 1] - 1]);
}
for(int g = 0;g <= a - 1;g++){
	cout << d[g] << endl;
}
fflush(stdin);
getchar();


return 0;
}