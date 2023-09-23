#include<bits/stdc++.h>
using namespace std;
 
int main(){
int n;
cin >> n;
int ara[n];
for(int i=0;i<n;i++) cin >> ara[i];
for(int i=n-1;i>=1;i--) cout << ara[i] << " ";
cout << ara[0] << endl;
return 0;
}
