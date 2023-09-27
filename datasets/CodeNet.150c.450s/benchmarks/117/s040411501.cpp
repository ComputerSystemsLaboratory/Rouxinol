#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
int Merge(vector<int> &vec, int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
 
    vector<int> l(n1 + 1);
    for (int i = 0; i < n1; ++i) l[i] = vec[left + i];
 
    vector<int> r(n2 + 1);
    for (int i = 0; i < n2; ++i) r[i] = vec[mid + i];
    l[n1] = r[n2] = 0x7fffffff;
 
    for (int i = 0, j = 0, k = left; k < right; ++k) {
        if (l[i] <= r[j]) {
            vec[k] = l[i++];
        }
        else {
            vec[k] = r[j++];
        }
    }
 
    return right - left;
}
 
int MergeSort(vector<int> &vec, int left, int right) {
    int res = 0;
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        res += MergeSort(vec, left, mid);
        res += MergeSort(vec, mid, right);
        res += Merge(vec, left, mid, right);
    }

    return res;
}

 
int main(){
    int i,x,n;
    vector<int> S;
    cin >> n;
    for(i=0;i<n;i++) {
        int num;
        cin >> num;
        S.push_back(num);
    }
 
    x = MergeSort(S, 0, S.size());
 
    for(i=0;i<n;i++){
        if(i)cout<<" ";
        cout<<S[i];
    }
    cout<<endl;
    cout<<x<<endl;
 
    return 0;
 
}
