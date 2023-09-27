#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
int main() {
    int n;
    while(cin>>n&&n!=0){int cnt=0;
        for(int i=2;i<n;i++){
            int tmp=0;
            for(int j=1;j<=i;j++)
                tmp+=j;
            if((n-tmp)%i==0&&tmp<=n)cnt++;
        }
        cout<<cnt<<endl;}}