#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;

int p[2000000];
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

void insert(int k){
    id++;
    int i = id;
    p[id] = k;
    for(;;){
        if(i != 1&&p[parent(i)]<=p[i]){
            q = p[parent(i)];
            p[parent(i)] = p[i];
            p[i] = q;
            i = parent(i);
        }else{
            break;
        }
    }
}

int extract(){
    int ret = p[1];
    p[1] = p[id];
    id--;
    maxHeapify(1);
    return(ret);
}

int main(){
    for(;;){
        char s_[100];
        scanf("%s", s_);
        string s = s_;
        if(s=="end"){
            break;
        }else if(s=="insert"){
            int k;
            scanf("%d", &k);
            insert(k);
        }else if(s=="extract"){
            printf("%d\n", extract());
        }
    }
    return 0;
}