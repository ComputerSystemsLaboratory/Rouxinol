#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define  all(x) (x).begin(),(x).end()
typedef long long ll;

typedef struct Card{
    char mark;
    int value;
} Card;

const Card INF = Card{'I', 1000000005};
vector<Card> L, R;

void merge(vector<Card>& m, int left, int mid, int right){
    int n1 = mid - left;
    int n2 = right - mid;
    rep(i, n1) L[i] = m[left+i];
    rep(i, n2) R[i] = m[mid+i];
    L[n1] = R[n2] = INF;
    int i = 0, j = 0;
    for(int k = left; k < right; k++){
        if (L[i].value <= R[j].value){
            m[k] = L[i++];
        }else{
            m[k] = R[j++];
        }
    }
}

void mergeSort(vector<Card>& m, int left, int right){
    if (left+1 < right){
        int mid = (left + right) / 2;
        mergeSort(m, left, mid);
        mergeSort(m, mid, right);
        merge(m, left, mid, right);
    }
}

int partition(vector<Card>& q, int p, int r){
    int x = q[r].value;
    int i = p - 1;
    for(int j = p; j < r; j++){
        if (q[j].value <= x){
            i++;
            swap(q[i], q[j]);
        }
    }
    i++;
    swap(q[i], q[r]);
    return i;
}

void quitSort(vector<Card>& q, int l, int r){
    if (l < r){
        int i = partition(q, l, r);
        quitSort(q, l, i-1);
        quitSort(q, i+1, r);
    }
}

void print(vector<Card> q, int n){
    rep(i,n){
        cout << q[i].mark << " " << q[i].value << endl;
    }
}

int main(){
    int n;
    cin >> n;
    vector<Card> q(n), m(n);
    L = R = vector<Card>(n/2 + 2);
    rep(i,n){
        char mark;
        int value;
        cin >> mark >> value;
        q[i] = Card{mark, value};
        m[i] = Card{mark, value};
    }

    quitSort(q, 0, n-1);
    mergeSort(m, 0, n);
    bool ok = true;
    rep(i, n) if(q[i].mark != m[i].mark) ok = false;
    if (ok) cout << "Stable" << endl;
    else cout << "Not stable" << endl;
    print(q, n);
    return 0;
}
