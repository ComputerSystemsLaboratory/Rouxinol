#include<iostream>
#include<vector>
#include<climits>
using namespace std;

long long merge(vector<int>& A, const int left, const int mid, const int right){
    int n1 = mid - left;
    int n2 = right - mid;
    vector<int> L(n1+1), R(n2+1);   //新しく配列分の領域が必要
                                    //他のソートアルゴリズムに比べメモリが必要になる
                                    //番兵分に一つ多くの要素が必要
    for(int i = 0; i < n1; ++i){
        L[i] = A[left + i];
    }
    for(int i = 0; i < n2; ++i){
        R[i] = A[mid + i];
    }

    L[n1] = R[n2] = INT_MAX;    //番兵
    
    int i = 0, j = 0;
    long long cnt = 0;
    for(int k = left; k < right; ++k){
        if(L[i] <= R[j]){
            A[k] = L[i++];
        }
        else{   // R[j] が L[i] より小さいと反転が起きる
            A[k] = R[j++];
            cnt += (long long)n1 - i;
        }
    }
    return cnt;
}

// 戻り値は比較した回数
long long merge_sort(vector<int>& A, const int left, const int right){
    long long cnt = 0;
    if(left+1 < right){             //1つになるまで分割
        int mid = (left + right)/2;
        cnt += merge_sort(A, left, mid);
        cnt += merge_sort(A, mid, right);
        cnt += merge(A, left, mid, right);
    }
    return cnt;
}

int main(){

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    long long cnt = merge_sort(a, 0, n);

    cout << cnt << endl;

    return 0;
}
