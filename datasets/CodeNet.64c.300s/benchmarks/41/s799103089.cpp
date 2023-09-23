#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;

int p[500000];
int id,q;
int k;

int parent(int i){
    if(i%2==0){
        return i/2;
    }else{
        return (i-1)/2;
    }
}

int left(int i){
    return 2*i;
}

int right(int i){
    return 2*i+1;
}

int inside(int i){
    if(i > id || i <= 0){
        return 0;
    }else{
        return 1;
    }
}

void maxHeapify(int i){
    if(inside(left(i))==0||(p[right(i)]<=p[i]&&p[left(i)]<=p[i])){
    }else{
        if(p[left(i)]>=p[right(i)]){
            q = p[left(i)];
            p[left(i)] = p[i];
            p[i] = q;
            maxHeapify(left(i));
        }else{
            q = p[right(i)];
            p[right(i)] = p[i];
            p[i] = q;
            maxHeapify(right(i));
        }
    }
}

int main(){
    cin >> id;
    for(int m = 0; m <= 8; m++){
        if(id>=pow(2,m)){
            k = (int)pow(2,m);
        }
    }
    for(int m = 1; m <= id; m++){
        cin >> p[m];
    }
    for(int m = id; m >= 1; m--){
        maxHeapify(m);
    }
    for(int m = 1; m <= id; m++){
        printf(" %d", p[m]);
    }
    printf("\n");
    return 0;
}