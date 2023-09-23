#include <iostream>
using namespace std;

int SelectionSort(int a[],int n);

int main(){
    
    int a[1000],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int count =SelectionSort(a,n);
    for(int i=0;i<n;i++){
        if(i)cout<<" ";//i!=0//0以外ならここが起動する
        cout<<a[i];
    }
    cout <<'\n';
    cout <<count<<'\n';

    return 0;
}

int SelectionSort(int a[],int n){
    int count=0;
    for(int i=0;i<n;i++){//未ソート部index 0からスタート
        int minj = i;
        for(int j=minj;j<n;j++){
            if(a[j]<a[minj]){ //minj 固定して
                minj=j;//より小さいのがあれば更新
            }
        }
        swap(a[i],a[minj]);
        if(i != minj)count +=1;
    }
    return count;
}

//未ソート部から最小の位置を特定する。
//最小の位置と未ソート部先頭を入れ替えて一回の処理が完了。これを繰り返す。
