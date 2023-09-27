
#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    while(n !=0 && k !=0){
        int a;
        int s[100010];
        s[0]=0;
        for(int i=0;i<n;i++){
            cin >> a;
            s[i+1]=s[i]+a;
        }
        int m=0;
        for(int i=0;i<n-k;i++){ 
            if(m < s[i+k]-s[i]){
                m = s[i+k]-s[i];
            }
        }
        cout << m << endl;
        cin >> n >> k;
    }
}

