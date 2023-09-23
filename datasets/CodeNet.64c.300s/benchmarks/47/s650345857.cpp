#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
int a[100],b[100];    
int main() {
	int n,i,j,k=0;
	while(cin >> n) {
       for (i=0;i<k;i++) if (a[i]==n) b[i]++; 
	   if (i==k) { a[k]=n; b[k]=1; k++; }
	}
	for (i=0;i<k;i++) for (j=0;j<i;j++) if (b[j]<b[j+1]) {swap(b[j],b[j+1]); swap(a[j],a[j+1]); }
	for (n=0; b[n]==b[0] && n<k;n++);
	for (i=0;i<n;i++) for (j=0;j<i;j++) if (a[j]>a[j+1]) swap(a[j],a[j+1]);
    for (i=0;i<n;i++) cout << a[i] << endl;
  	return 0;
}