#include<iostream>
using namespace std;

int main(){
int a[30];
for(int i = 0;i <= 29;i++){
a[i] = 0;
}
for(int ii = 1;ii <= 28;ii++){
int n;
cin >> n;
a[n - 1] = 1;
}
for(int p = 0;p <= 29;p++){
if(a[p] == 0){
cout << p + 1 << endl;
}
}
    return 0;
}