#include<stdio.h>
#define MAX 100000
#define SENTINEL 2000000000

struct Card{
    char suit;//絵柄
    int value;//数字
};

struct Card L[MAX/2+2], R[MAX/2+2];

void merge(struct Card Merge[], int n, int left, int mid, int right){
    int i, j, k;
    int n1 = mid - left;
    int n2 = right - mid;
    for(i=0; i<n1; i++){
        L[i] = Merge[left+i];
    }
    for(i=0; i<n2; i++){
        R[i] = Merge[mid+i];
    }
    L[n1].value = R[n2].value = SENTINEL;
    i=j=0;
    for(k = left; k< right; k++){
        if (L[i].value <= R[j].value){
            Merge[k] = L[i++];
        } else{
            Merge[k] = R[j++];
        }
    }
}

void mergeSort(struct Card Merge[], int n, int left, int right){
    int middle;
    if(left + 1 < right){
        middle = (left + right) / 2;
        mergeSort(Merge, n, left, middle);
        mergeSort(Merge, n, middle, right);
        merge(Merge, n, left, middle, right);
    }
}

int partition(struct Card Quick[], int n, int p,int r){
    int i,j;
    struct Card t, x;
    x = Quick[r];
    i = p-1;
    for(j=p; j<r; j++){
        if(Quick[j].value <= x.value){//基準の値より小さい場合は大きいと分類された先頭の値を入れ替える
            i++;
            t = Quick[i];
            Quick[i] = Quick[j];
            Quick[j] = t;
        }
    }
    //基準の値と大きいと分類された先頭の値を入れ替える
    t = Quick[i+1];
    Quick[i+1] = Quick[r];
    Quick[r] = t;
    return i+1;
}

void quickSort(struct Card Quick[], int n, int p, int r){//パーティションを繰り返してソートを行う
    int q;
    if(p < r){
        q = partition(Quick, n, p, r);
        quickSort(Quick, n, p, q-1);
        quickSort(Quick, n, q+1, r);
    }
}

int main(){
    int num,i,v;
    struct Card Merge[MAX], Quick[MAX];
    char design[10];
    int stable = 1;
    scanf("%d", &num);

    for(i=0; i<num; i++){
        scanf("%s %d", design, &v);//入力された絵柄と数字を入れていく
        Merge[i].suit = Quick[i].suit = design[0];
        Merge[i].value = Quick[i].value = v;
    }

    mergeSort(Merge, num, 0, num);
    quickSort(Quick, num, 0, num-1);

    for(i=0; i<num; i++){
        //マージソートは同じ数字の場合,絵柄は入力された順序で並ぶためマージソートと一致するときは,安定な出力となる
        if(Merge[i].suit != Quick[i].suit){
            stable = 0;
        }
    }
    if(stable ==1){
        printf("Stable\n");
    }
    else{
        printf("Not stable\n");
    }
    for(i=0; i<num; i++){
        printf("%c %d\n", Quick[i].suit, Quick[i].value);
    }
    return 0;
}
