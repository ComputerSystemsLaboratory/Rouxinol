#include <iostream>
#include <stdio.h>
#include <utility>

#define MAX_N 100

void select_sort(int*,int);
void bubble_sort(int*,int);

int A[MAX_N];
int count = 0;
int n;
int d[MAX_N];
char c[MAX_N];


struct card
{
    char c;
    int d;
    int initial_index;
} card[MAX_N];

struct card_s
{
    char c;
    int d;
    int initial_index;
} card_s[MAX_N];


int main(){

    scanf("%d\n",&n);
    for(int i = 0; i < (n-1); i++){
        scanf("%c%d ",&card[i].c,&card[i].d);
        card_s[i].c = card[i].c;
        card_s[i].d = card[i].d;
        card[i].initial_index = i;
        card_s[i].initial_index = i;
    }
    scanf("%c%d",&card[n-1].c,&card[n-1].d);
    card[n-1].initial_index = n-1;
    card_s[n-1].initial_index = n-1;
    card_s[n-1].c = card[n-1].c;
    card_s[n-1].d = card[n-1].d;
    
//    for(int i = 0; i < n; i++){
//        printf("c %c d %d initial_index %d\n",card[i].c,card[i].d,card[i].initial_index);
//    }
    for(int times = 0; times < 2; times++){
        if(times == 0){bubble_sort(d,n);}
        else{
            for(int i = 0; i < n; i++){
                card[i].c = card_s[i].c;
                card[i].d = card_s[i].d;
                card[i].initial_index = card_s[i].initial_index;
            }
            select_sort(d,n);
        }
        for(int i = 0; i < n; i++){
            if(i<(n-1))printf("%c%d ",card[i].c,card[i].d);
            if(i == (n-1)) printf("%c%d\n",card[i].c,card[i].d);
        }
        bool stable = true;
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                if(card[i].d == card[j].d){
                    if(card[i].initial_index > card[j].initial_index){
                        stable = false;
                    }
                }
            }
        }
        if(stable){printf("Stable\n");}
        else{printf("Not stable\n");}
    }
}

void bubble_sort(int* a,int n){
    for(int i = 0; i < n; i++){
        for(int j = (n - 1); j > i; j--){
            if(card[j].d < card[j-1].d){
//                if(d[j] == d[j-1] && c[j] == c[j-1]) count++;
                std::swap(card[j],card[j-1]);
            }
        }
    }

}


void select_sort(int* a,int n){
    for(int i = 0; i < (n-1); i++){
        int a_min = MAX_N;
        int a_min_idx = MAX_N + 1;

        for(int j = i+1; j <n; j++){
            if(card[j].d < a_min){
                a_min = card[j].d;
                a_min_idx = j;
            }
        }
        if(card[i].d > card[a_min_idx].d){
            std::swap(card[i],card[a_min_idx]);
        }
    }
}