#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
#define MAX 1000000

int  b[MAX];
int H; 

void maxheap(int i);
void buildmaxheap();

int main(){
    cin >> H;
    for(int i = 1; i <= H; i++){
        cin >> b[i];
    }

    buildmaxheap();

    for(int i = 1; i <= H; i++){
        cout << " " << b[i];
    }
    cout << endl;
    return 0;
}

void maxheap(int i){
    int ind;
    if(i*2 <= H &&  b[i*2] > b[i]){
        ind = i*2;
    }else{
        ind = i;
    }
    if(i*2+1 <= H && b[i*2+1] > b[ind]){
        ind = i*2+1;
    }
    if(ind != i){
        int w = b[i];
        b[i] = b[ind]; b[ind] = w;
        maxheap(ind);
    }
}

void buildmaxheap(){
    for(int i = H/2; i > 0; i--){
        maxheap(i);
    }
}
