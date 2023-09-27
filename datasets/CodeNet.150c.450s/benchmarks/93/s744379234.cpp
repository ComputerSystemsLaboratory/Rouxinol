#include <stdio.h>
#include <iostream>
using namespace std;

struct Card{
    char mark;
    int num;
};

void merge(struct Card *card, int left, int mid, int right){
    int n1 = mid - left;
    int n2 = right - mid;

    struct Card L[n1 + 1];
    for(int i = 0; i < n1; i++){
        L[i].mark = card[left + i].mark;
        L[i].num = card[left + i].num;
    }
    struct Card R[n2 + 1];
    for(int i = 0; i < n2; i++){
        R[i].mark = card[mid + i].mark;
        R[i].num = card[mid + i].num;
    }

    L[n1].num = 1000000001;
    R[n2].num = 1000000001;

    int i = 0;
    int j = 0;
    int k = 0;
    for(k = left; k < right; k++){
        if(L[i].num <= R[j].num){
            card[k].mark = L[i].mark;
            card[k].num = L[i].num;
            i++;
        }else{
            card[k].mark = R[j].mark;
            card[k].num = R[j].num;
            j++;
        }
    }
}

void mergeSort(struct Card *card, int left, int right){
    if(left + 1 < right){
        int mid = (left + right) / 2;
        mergeSort(card, left, mid);
        mergeSort(card, mid, right);
        merge(card, left, mid, right);
    }
}

int partition(struct Card *card, int p, int r){
    int x = card[r].num;
    int i = p - 1;
    for(int j = p; j < r; j++){
        if(card[j].num <= x){
            i++;
            swap(card[i], card[j]);
        }
    }
    swap(card[i + 1], card[r]);
    return i + 1;
}

void quickSort(struct Card *card , int p, int r){
    if(p < r){
        int q = partition(card, p, r);
        quickSort(card, p, q - 1);
        quickSort(card, q + 1, r);
    }
}

int main(void){
    int n;
    scanf("%d", &n);

    struct Card card[100000];
    for(int i = 0; i < n; i++){
        char S[10];
        scanf("%s %d", S, &card[i].num);
        card[i].mark = S[0];
    }

    struct Card card_copy[100000];
    for(int i = 0; i < n; i++){
        card_copy[i].mark = card[i].mark;
        card_copy[i].num = card[i].num;
    }

    quickSort(card, 0, n - 1);
    mergeSort(card_copy, 0, n);

    bool is_stable = true;
    for(int i = 0; i < n; i++){
        if(card[i].num != card_copy[i].num || card[i].mark != card_copy[i].mark){
            is_stable = false;
            break;
        }
    }

    if(is_stable){
        printf("Stable\n");
    }else{
        printf("Not stable\n");
    }

    for(int i = 0; i < n; i++){
        printf("%c %d\n", card[i].mark, card[i].num);
    }
}


