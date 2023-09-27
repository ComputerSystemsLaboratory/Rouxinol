#include<iostream>
using namespace std;

int main(){
int w = 0;
cin >> w ;
int n = 0;
cin >> n;
int i = 1;
int a[w];
for(i = 0;i < w;i++){
a[i] = i + 1;
}
for(i = 1;i <= n;i++){
int aa = 0;int bb = 0;
char split;
cin >> aa >> split >> bb ;
int c = 0;
c = a[aa - 1];
a[aa - 1] = a[bb - 1];
a[bb - 1] = c;
}
for(i = 0;i < w; i++){
cout << a[i] << endl;
}
    return 0;
}