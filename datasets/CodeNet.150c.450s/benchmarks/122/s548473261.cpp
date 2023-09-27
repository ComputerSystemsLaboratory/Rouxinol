#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;
int N;
int H[2000001];

int left(int i){
    return i*2;
}
int right(int i){
    return i*2+1;
}
int parent(int i){
    return i/2;
}

void Maximize(int i){
    int l = left(i);
    int r = right(i);
    
    int largest = i;
    if (l <= N && H[l] > H[largest]) largest = l;
    if (r <= N && H[r] > H[largest]) largest = r;
    
    if (largest != i) {
        swap(H[largest],H[i]);
        Maximize(largest);
    }
}

void Minimize(int i){
    int p = parent(i);
    
    if (p > 0 && H[p] < H[i]){
        swap(H[p],H[i]);
        Minimize(p);
    }
}

void extract(){
    if (N == 0) return;
    
    cout << H[1] << endl;
    H[1] = H[N];
    N--;
    Maximize(1);
}

void insert(int x){
    N++;
    H[N] = x;
    Minimize(N);
}

int main(){
    int command;
    N = 0;
    
    while (true) {
        char com[16];
        scanf("%s",com);
        if (com[2] == 'd') break;
        
        if (com[0] == 'i'){
            int num;
            cin >> num;
            insert(num);
        }else{
            extract();
        }
    }
    
    return 0;
}