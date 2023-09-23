#include<iostream>
#include<utility>
using namespace std;

#define MAX 500000

void maxHeapify(int list[], int i, int H){
    int l, r, largest;
    l = 2 * i;
    r = 2 * i + 1;
// 左の子、自分、右の子で値が最大のノードを選ぶ
    if ( l <= H && list[l] > list[i] ) largest = l;
    else largest = i;
    if ( r <=  H && list[r] > list[largest] ) largest = r;
    if ( largest != i ){// i の子の方が値が大きい場合
        swap(list[i], list[largest]);
        maxHeapify(list, largest, H);
    }
}

int main(){
    int H, list[MAX+1];
    cin >> H;
    
    for (int i = 1; i <= H; i++ ){
        cin >> list[i];
    }
    
    for (int i = H / 2; i >= 1; i-- ){
        maxHeapify(list, i, H);
    }
    
    for (int i = 1 ; i <= H; i++ ){
        cout << " " << list[i];
    }
    cout << endl;
    
    return 0;
    
}

