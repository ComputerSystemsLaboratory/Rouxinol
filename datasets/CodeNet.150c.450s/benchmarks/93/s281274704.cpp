#include <iostream>
#include <ios>
#include <utility>
#include <vector>

using namespace std;

struct Card
{
    char suit;
    int value;    
};


int partition(Card A[], int p, int r){
    int x = A[r].value;
    int i = p - 1;
    for (int j = p; j != r; ++j){
        if (A[j].value <= x) swap(A[++i], A[j]);
    }
    swap(A[i + 1], A[r]);
    return i + 1;
}

void quicksort(Card A[], int p, int r){
    if (p < r){
        int q = partition(A, p, r);
        quicksort(A, p, q - 1);
        quicksort(A, q + 1, r);
    }
}

const int SENTINEL = 1000000005;

void merge(vector<Card> & A, int left, int mid, int right){
    auto n1 = mid - left;
    auto n2 = right - mid;
    vector<Card> L(n1);
    vector<Card> R(n2);
    copy(A.begin() + left, A.begin() + mid  , L.begin());
    copy(A.begin() + mid , A.begin() + right, R.begin());
    L.push_back(Card{'A', SENTINEL});
    R.push_back(Card{'A', SENTINEL});
    auto itL = L.begin();
    auto itR = R.begin();
    for (auto itA = A.begin() + left; itA != A.begin() + right; ++itA){
        if (itL->value <= itR->value){
            *itA = *itL;
            ++itL;
        }else{
            *itA = *itR;
            ++itR;
        }
    }
}

void merge_sort(vector<Card> & A, int left, int right){
    if (left + 1 < right){
        auto mid = (left + right) / 2;
        merge_sort(A, left, mid);
        merge_sort(A, mid, right);
        merge(A, left, mid, right);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    Card A[100000] = {};
    vector<Card> B;
    for (int i = 0; i != n; ++i){
        cin >> A[i].suit >> A[i].value;
        B.push_back(A[i]);
    }
    quicksort(A, 0, n - 1);
    merge_sort(B, 0, n);
    bool is_stable = true;
    for (int i = 0; i != n; ++i){
        if (A[i].suit != B[i].suit){
            is_stable = false;
            break;
        }
    }
    if (is_stable){
        cout << "Stable" << endl;
    }else{
        cout << "Not stable" << endl;
    }
    for (int i = 0; i != n; ++i) cout << A[i].suit << ' ' << A[i].value << endl;
    return 0;
}