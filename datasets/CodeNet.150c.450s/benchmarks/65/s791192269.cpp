#include    <iostream>
#include    <vector>
#include    <string>
#include    <utility>

using namespace std;

typedef struct{
    int idx;    // 入力順のインデックス
    char dec;   // トランプの柄
    int num;    // トランプの数字
}playingCard;

void printVector(const vector<playingCard> &A) {
    for(int i = 0; i < A.size(); i++) {
        cout << A[i].dec << A[i].num;
        if(i+1 < A.size()) cout << ' ';
    }
    cout << endl;
}

void swap(playingCard &a, playingCard &b) {
        playingCard tmp = a;
        a = b;
        b = tmp;
}

vector<playingCard> bubble(vector<playingCard> A) {
    const int n = A.size();
    for(int i = 0; i < n-1; i++)
        for(int j = n-2; j >= i; j--) 
            if(A[j].num > A[j+1].num) 
                swap(A[j], A[j+1]);
    return A;
}

vector<playingCard> insertion(vector<playingCard> A) {
    const int n = A.size();
    for(int i = 0; i < n; i++) {
        int minj = i;
        for(int j = i; j < n; j++)
            if(A[j].num < A[minj].num)  minj = j;
        if(A[i].num != A[minj].num)
            swap(A[i], A[minj]);
    }
    return A;
}

bool isStable(const vector<playingCard> &A) {
    for(int i = 0; i < A.size() - 1; i++) {
        if(A[i].num == A[i+1].num && A[i].idx > A[i+1].idx) return false;    
    }
    return true;
}

int main() {
    int n;

    cin >> n;

    // 入力
    vector<playingCard> card(n);
    for(int i = 0; i < n; i++) {
        string ipt;
        cin >> ipt;
        
        card[i].idx = i;
        card[i].dec = ipt[0];
        card[i].num = ipt[1] - '0';
    }

    // 処理
    vector<playingCard> sortBubble = bubble(card);
    vector<playingCard> sortInsert = insertion(card);

    printVector(sortBubble);
    cout << (isStable(sortBubble) ? "Stable" : "Not stable") << endl;
    
    printVector(sortInsert);
    cout << (isStable(sortInsert) ? "Stable" : "Not stable") << endl;

    return 0;
}
