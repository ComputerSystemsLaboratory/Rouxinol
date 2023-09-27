#include <iostream>
#include <algorithm>

using namespace std;

#define N 100000

pair<int, char> Left[N],Right[N];

void merge(pair<int,char> cards[],int left,int mid,int right){
    int n1 = mid - left;
    int n2 = right - mid;
    
    for(int i = 0;i < n1;++i){
        Left[i] = cards[left + i];
    }
    for(int i = 0;i < n2;++i){
        Right[i] = cards[mid + i];
    }
    Left[n1].first = Right[n2].first = __INT_MAX__;
    int i = 0;
    int j = 0;
    for(int k = left;k < right;++k){
        if(Left[i].first <= Right[j].first){
            cards[k] = Left[i++];
        }else{
            cards[k] = Right[j++];
        }
    }
}

void mergeSort(pair<int,char> cards[],int left,int right){
    int mid;
    if(left + 1 < right){
        mid = (left + right) / 2;
        mergeSort(cards,  left, mid);
        mergeSort(cards,  mid, right);
        merge(cards,left,mid,right);
    }
}

int partition(pair<int,char> cards[],int p,int r){
    // 末端
    int x = cards[r].first;
    int i = p - 1;
    for(int j = p;j < r;++j){
        if(cards[j].first <= x){
            ++i;
            swap(cards[i],cards[j]);
        }
    }
    swap(cards[i + 1],cards[r]);
    return i + 1;
}

void quickSort(pair<int,char> A[],int p,int r){
    if(p < r){
        int q = partition(A,p, r);
        quickSort(A,p, q - 1);
        quickSort(A,q+1, r);
    }
}

int main(void){
    int n;
    pair<int,char> cards1[N];
    pair<int,char> cards2[N];

    cin >> n;
    for(int i = 0;i < n;++i){
        cin >> cards1[i].second >> cards1[i].first;
        cards2[i].second = cards1[i].second;
        cards2[i].first = cards1[i].first;
    }
    
    quickSort(cards1,0, n - 1);
    mergeSort(cards2, 0, n);
    
    string stable = "Stable";
    
    for(int i = 0;i < n;++i){
        if(cards1[i].second != cards2[i].second){
            stable = "Not stable";
            break;
        }
    }
    
    // output
    cout << stable << endl;
    for(int i = 0;i < n;++i){
        cout << cards1[i].second << " " << cards1[i].first << endl;
    }
}

