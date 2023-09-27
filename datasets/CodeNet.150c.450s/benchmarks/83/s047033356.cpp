#include<iostream>
#include<algorithm>
using namespace std;
static const int NMAX = 101;
static const int WMAX = 10001;

struct Item {
    int value, weight;
};

struct Item items[NMAX];
int N,W;
int C[NMAX][WMAX];

int knapsack(){

    int i,w;
    
    // init
    for(i=0;i<N;i++)C[i][0]=0;
    for(w=1;w<W;w++)C[0][w]=0;
    
    for(i=1;i<=N;i++){
	for(w=1;w<=W;w++){
	    if (items[i].weight <= w){
		C[i][w]=max(items[i].value+C[i-1][w - items[i].weight], C[i-1][w]);
	    }
	    else C[i][w]=C[i-1][w];
	}
    }
    return C[N][W];
}

int main(){
    cin >> N>>W;
    int i;

    for(i=1;i<=N;i++){
	cin>>items[i].value >> items[i].weight;
    }

    cout << knapsack() << endl;

    return 0;

}