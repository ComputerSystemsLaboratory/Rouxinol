#include<bits/stdc++.h>

using namespace std;

vector<int> a;

int left(int a){
    return 2*a;
}

int right(int a){
    return 2*a+1;
}

void maxHeapify(int i){
    int l = left(i);
    int r = right(i);
    //自分、左の子、右の子の中でもっとも多き値をもつ節点を保持する
    int largest = i;
    if(r < a.size() && a[largest] < a[r])largest = r;
    if(l < a.size() && a[largest] < a[l])largest = l;
    //iの子のほうが大きかったら、子を上のノードにやらなきゃなので交換してもっかい呼ぶ
    if(largest != i){
        swap(a[i], a[largest]);
        maxHeapify(largest);
    }
}

int main(void){
    int n;
    cin >> n;
    a.push_back(0);
    for(int i = 1; i <= n; i++){
        int t;
        cin >> t;
        a.push_back(t);
    }
    for(int i = n/2; 1 <= i; i--){
        maxHeapify(i);
    }
    a.erase(a.begin());
    for(auto i: a){
        cout << " " << i;
    }
    cout << endl;
    return 0;
}
