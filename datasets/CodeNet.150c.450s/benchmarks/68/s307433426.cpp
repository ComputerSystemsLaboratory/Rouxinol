#include <iostream>
using namespace std;

// 再帰関数
static void Sub_QuickSort(int* pnData, int nFirst, int nLast);
// クイックソート
void QuickSort(int* pnData, int nNumOf)
{
    Sub_QuickSort(pnData, 0, nNumOf - 1);
}

int main(void){
    // Your code here!
    
    int n;
    while(1){
        cin >> n;
        if(n==0){
            break;
        }else{
            int a[n];
            for(int i=0;i<n;i++){
                cin >> a[i];
            }
            
            QuickSort(a,n);
            int min = 1000000;
            
            for(int i=1;i<n;i++){
                if(a[i]-a[i-1]<min) min = a[i]-a[i-1];
            }
            cout << min << endl;
        }
        
    }
    

    return 0;
}

// 再帰関数
// nFirst : ブロックの最初のインデックス
// nLast  : ブロックの最後のインデックス
static void Sub_QuickSort(int* pnData, int nFirst, int nLast)
{
    int iLess    = nFirst;  // 前半のインデックス
    int iGreater = nLast;   // 後半のインデックス
    int x;                  // 「ある値」

    // 「ある値」は両端の要素の平均値にする
    x = (pnData[nFirst] + pnData[nLast]) / 2;

    // 交換ループ
    // 位置が逆になると終了
    while(iLess < iGreater)
    {
        // x より小さい要素は無視
        while(pnData[iLess] < x)
            iLess++;
        // x より大きい要素は無視
        while(pnData[iGreater] > x)
            iGreater--;

        // 位置がちゃんとしているときは交換し、
        // iLess と iGreater を１つずつ進める
        if(iLess < iGreater)
            swap(pnData[iLess++], pnData[iGreater--]);
    }
    // iLess == iGreater で終わった時は、
    // iGreater < iLess になるようにする
    if(iLess == iGreater)
    {
        if(pnData[iLess] < x)
            iLess++;
        else if(pnData[iLess] > x)
            iGreater--;
    }

    // 次のブロックのサイズが２以上の時は再帰
    if(iLess >= nFirst + 2)
        Sub_QuickSort(pnData, nFirst, iLess - 1);
    if(iGreater <= nLast - 2)
        Sub_QuickSort(pnData, iGreater + 1, nLast);
}
