#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;

int W[100001];
int n,k;

int rec(int p){
    int maxw = 0;
    int numtr = 1;
    int tr = p;
    int i;
    for (i = 0; i < n; i++) {
        if (tr - W[i] >= 0) {
            tr -= W[i];
        }else if(numtr < k){
            tr = p;
            i--;
            numtr++;
        }else{
            break;
        }
    }
    return i;
}

int binary(int left, int right){
    //cout << left << "???" << right << endl;
    
    if (right - left == 1) return right;
    int mid = (right + left)/2;
    int nn = rec(mid);
    if (nn >= n) {
        return binary(left,mid);
    }else{
        return binary(mid,right);
    }
}

int main(){
    int sum=0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        scanf("%d",&W[i]);
        sum += W[i];
    }
    int min_p = sum/k;
    if (sum%k != 0) {
        min_p++;
    }
    cout << binary(min_p-1,sum) << endl;
    
    
    return 0;
}