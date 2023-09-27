#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, c=0, m;
        bool flag = 0;
  	cin >> n;
        int k=(int)sqrt(n)+2;
	vector<int> a(k);
	m = n;
	for(int i=0;i<k;i++){
		a[i] = 0; 
	}
	while(n!=1){
                if(flag){
                         break;
                }
		for(int i=2;i<=n;i++){
                        if(m < i*i){
                                a[c+1] = n;
                                flag = 1;
                                break;
                         }
                        
                         
			if(n%i==0){
				n /= i;
				c++;
				a[c] = i;
				break;
			}
		}
	}
	cout<< m<<":";
	for(int i=0;i<k;i++){
		if(a[i]!=0){
			cout<< " "<<a[i];
		}
		
	}
	cout<<endl;
}
