#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

struct card{
    char suit;
    int number;
};

int partition(vector<card> &a, int p, int r){
    card base = a.at(r);
    int i = p - 1;
    for(int j = p; j < r; j++){
        if(a.at(j).number <= base.number){
            i++;
            card tmp = a.at(i);
            a.at(i) = a.at(j);
            a.at(j) = tmp;
        }
    }
    a.at(r) = a.at(i+1);
    a.at(i+1) = base;
    return i+1;
}

void quickSort(vector<card> &a, int p, int r){
    if(p < r){
        int q = partition(a, p, r);
        quickSort(a, p, q - 1);
        quickSort(a, q + 1, r);
    }
}


void merge(vector<card> &s, int left, int mid, int right){
    vector<card> n1(mid - left);
    vector<card> n2(right - mid);

    rep(i, mid - left){
        n1.at(i) = s.at(left + i);
    }
    rep(i, right - mid){
        n2.at(i) = s.at(mid + i);
    }
    card sentinel;
    sentinel.suit = 'A';
    sentinel.number = INT_MAX;

    n1.push_back(sentinel);
    n2.push_back(sentinel);

    int n1_index = 0;
    int n2_index = 0;

    // cout << "left mid right " << left << " " << mid << " " << right << endl;
    for(int i = left; i < right; i++){
        if(n1.at(n1_index).number > n2.at(n2_index).number){
            s.at(i) = n2.at(n2_index);
            n2_index++;
        }else{
            s.at(i) = n1.at(n1_index);
            n1_index++;
        }
    }
}

void mergeSort(vector<card> &s, int left, int right){
    if(left + 1 < right){
        int mid = (right + left) / 2;
        mergeSort(s, left, mid);
        mergeSort(s, mid, right);
        merge(s, left, mid, right);
    }

}


int main(){
    int n; cin >> n;
    vector<card> a(n);
    vector<card> b(n);
    rep(i, n){
        cin >> a.at(i).suit >> a.at(i).number;
    }

    b = a;

    // rep(i, n){
    //     cout << before_sort.at(i).suit << before_sort.at(i).number << " ";
    // }
    // cout << endl;

    quickSort(a, 0, n-1);
    mergeSort(b, 0, n);

    string is_stable = "Stable";
    rep(i, n){
        if(a.at(i).suit != b.at(i).suit){
            is_stable = "Not stable";
            break;
        }
    }
    cout << is_stable << endl;

    rep(i, n){
        cout << a.at(i).suit << " " << a.at(i).number << endl;
    }



}
