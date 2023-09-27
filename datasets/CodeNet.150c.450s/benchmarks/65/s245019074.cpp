#include <iostream>
#include <string>
#include <utility>
#include <map>
using namespace std;
typedef pair<int, char> P;
P bCards[36];
P sCards[36];
P iCards[36];
void bubbleSort(int n){
    for(int i=0; i<n; ++i){
        int x = bCards[i].first;
        for(int j=n-1; j>i; --j){
            if(bCards[j].first < bCards[j-1].first){
                swap(bCards[j], bCards[j-1]);
            }
        }
    }
}
void selectionSort(int n){
    for(int i=0; i<n; ++i){
        int idx = i;
        for(int j=i+1; j<n; ++j){
            if(sCards[idx].first > sCards[j].first){
                idx = j;
            }
        }
        swap(sCards[i], sCards[idx]);
    }
}
bool isStable(int N){
    for(int i=0; i<N; ++i){
        if(sCards[i] != bCards[i]) return false;
    }
    return true;
}
int main(){
    int N; cin >> N;
    for(int i=0; i<N; ++i){
        string card; cin >> card;
        char suit = card[0]; 
        int num = stoi(card.substr(1));
        iCards[i].second = bCards[i].second = sCards[i].second = suit;
        iCards[i].first = bCards[i].first = sCards[i].first = num;
    }
    bubbleSort(N);
    selectionSort(N);
    for(int i=0; i<N; ++i){
        if(i) cout << " ";
        cout << bCards[i].second << bCards[i].first;
    }
    cout << endl;
    cout << "Stable" << endl;
    for(int i=0; i<N; ++i){
        if(i) cout << " ";
        cout << sCards[i].second << sCards[i].first;
    }
    cout << endl;
    if(isStable(N)) cout << "Stable" << endl;
    else cout << "Not stable" << endl;  

    return 0;
}

