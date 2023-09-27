#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
     int n;
     int s[103];
     while(cin >> n && n != 0){
	     for(int i=0; i<n;i++){
	     	cin >> s[i];
	     }
	     sort(s, s+n);
	     long long sum=0;
	     for(int i=1; i<n-1;i++){
	     	sum += s[i];
	     }
	     cout << sum/(n-2) << endl;
	}
	return 0;
}