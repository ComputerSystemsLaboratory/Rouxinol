#include<iostream>
#include<cmath>
using namespace std;

struct Card{char pic;int num;};
//partitionでは末尾も含む。
int partition(int p,int r,Card A[]){
    int x=A[r].num;//基準
    int i=p-1;
    for(int j=p;j<r+1;j++){
        if(A[j].num<=x){//A[j]の方が大きいならそのまま
        Card tmp=A[j];
        A[j]=A[++i];
        A[i]=tmp;
        if(j==r)return i;
        }
    }
    return r;//[]で括るために取り出さないと。
}
void quickSort(int p,int r,Card A[]){//分ける部分は先の問題のi。
    if(p<r){
    int q=partition(p,r,A);
    quickSort(p,q-1,A);
    quickSort(q,r,A);
    }
}
void merge(int left,int mid,int right,Card B[]){
    //2つの配列をmerge,つまりソートする
    int n1=mid-left;//本来の要素数より1つ多いのは、最後に
    int n2=right-mid;//番兵をいれたいから。
    Card L[n1+1],R[n2+1];
    for(int i=0;i<n1;i++){
        L[i]=B[left+i];
    }L[n1].num=pow(10,9)+1;
    for(int j=0;j<n2;j++){
        R[j]=B[mid+j];
    }R[n2].num=pow(10,9)+1;
    int i=0,j=0;//インデックスを比較していく
    while(i<n1 || j<n2){
        //どっちも番兵に来たらオワリ
        if(L[i].num<=R[j].num){
            B[left+i+j]=L[i];
            i++;
        }
        else{
            B[left+i+j]=R[j];
            j++;
        }
    }
}

void mergeSort(int left,int right,Card B[]){
    if(right>left+1){
        int mid = (right+left)/2;
        mergeSort(left,mid,B);
        mergeSort(mid,right,B);
        merge(left,mid,right,B);
    }
}

int main(){//安定か否かは、安定なソートと比べるのが一番良い。先ほどやったmergeSortは安定だよね。
    int n;cin>>n;Card A[n];for(int i=0;i<n;i++)cin>>A[i].pic>>A[i].num;
    Card B[n];for(int j=0;j<n;j++)B[j]=A[j];//比較用。BはmergeSortする。
    quickSort(0,n-1,A);
    mergeSort(0,n,B);//mergeSortは右端を入れないスタイル。
    bool flg=0;
    for(int k=0;k<n;k++){
        if(A[k].pic!=B[k].pic || A[k].num!=B[k].num){
            flg=1;
            break;
        }
    }
    if(flg==1)cout<<"Not stable"<<endl;
    else{cout<<"Stable"<<endl;}
    for(int i=0;i<n;i++){
        cout<<A[i].pic<<' '<<A[i].num<<endl;
    }
    return 0;
}
