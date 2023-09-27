#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int an,A[10000],bn,count=0;
    cin >> an;
    for (int i = 0; i < an; i++) {
        scanf("%d",&A[i]);
    }
    cin >> bn;
    for (int i = 0; i < bn; i++) {
        int k;
        scanf("%d",&k);
        for (int j = 0; j < an; j++) {
            if (k == A[j]) {
                count++;
                break;
            }
        }
    }
    
    cout << count << endl;
    
    return 0;
}