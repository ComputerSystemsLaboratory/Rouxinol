#include <bits/stdc++.h>
using namespace std;
int main(){
int a = 0, b = 0;
int in;
for(int i = 0; i < 8; i++){
cin >> in;
if(i < 4) a += in;
else b += in;
}
cout << max(a, b) << endl;
return 0;
}
