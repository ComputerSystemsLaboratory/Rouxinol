#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

#define MAX 100000

struct TRAMP{
    char mark;
    int number,inputed_order;
};

TRAMP cards[MAX];

int n;

int Partition(int left,int right){
    int i = left-1,pivot = cards[right].number;
    for(int start = left; start < right; start++){
        if(cards[start].number <= pivot){
                i++;
                std::swap(cards[i],cards[start]);
        }
    }

    std::swap(cards[i+1],cards[right]);

    return i+1;
}

void quickSort(int left,int right){
    if(left < right){
        int q = Partition(left,right);
        quickSort(left,q-1);
        quickSort(q+1,right);
    }
}


int main(){

    bool stableFLG = true;
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        scanf("%s %d",&cards[i].mark,&cards[i].number);
        cards[i].inputed_order = i;
    }

    quickSort(0,n-1);

    for(int i = 1; i < n; i++){
        if(cards[i].number == cards[i-1].number && cards[i].inputed_order < cards[i-1].inputed_order){
        	stableFLG = false;
        	break;
        }
    }

    if(stableFLG){
        printf("Stable\n");
    }else{
        printf("Not stable\n");
    }

    for(int i = 0; i < n; i++)   printf("%c %d\n",cards[i].mark,cards[i].number);
}
