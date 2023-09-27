#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int my_binary_search(vector<long long> & array, int left, int right, long long value){
    int med;
    while (left < right) {
        med = (left+right)/2;
        if (array[med] == value) return med;
        else if (array[med] > value) right = med;
        else left = med + 1;
    }
    return right;
}

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    const int inf = 1000000001;
    vector<long long> l(n, inf);
    l[0] = a[0];
    int length = 1;
    for(int i = 1; i < n; i++){
        //cout << "a[i]= " << a[i] << endl;
        //cout << "length= " << length << endl;
        if(l[length-1] < a[i]){
            l[length++] = a[i];
        }else{
            int j = my_binary_search(l, 0, length-1, a[i]);
            l[j] = a[i];
            //*lower_bound(l.begin(), l.end(), a[i]) = a[i];
        }
        //for(int k = 0; k < length; k++) cout << l[k] << " "; cout << endl;
        
    }
    cout << length << endl;
}