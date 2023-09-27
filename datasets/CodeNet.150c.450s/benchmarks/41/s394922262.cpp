//
//  main.cpp
//  all_pairs_shortest_path
//
//  Created by ???????????? on 2017/11/13.
//  Copyright ?? 2017 ????????????. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <climits>

//#define INF 200000000

using namespace std;

static const int MAX = 100;
static const long long INF = (1LL<<32);

long long A[MAX][MAX];


void initA(int num){
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            if(i == j) A[i][j] = 0;
            else A[i][j] = INF;
        }
    }
}

void warshallFloyd(int numVertex){
    for(int k = 0; k < numVertex; k++){
        for(int i = 0; i < numVertex; i++){
            if (A[i][k] == INF) continue;
            for (int j = 0; j < numVertex; j++){
                if (A[k][j] == INF) continue;
                A[i][j] = min(A[i][j], A[i][k] + A[k][j]);
            }
        }
    }
}

bool isNegativeCycle(int num){
    for(int i = 0; i < num; i++){
        if(A[i][i] != 0){
            return true;
        }
    }
    return false;
}

void printA(int num){
    if  (isNegativeCycle(num)) {
        cout << "NEGATIVE CYCLE" << endl;
        return;
    }
    else{
        for(int i = 0; i < num; i++){
            for(int j = 0; j < num; j++){
                if(j) cout << " ";
                
                if(A[i][j] == INF) cout << "INF";
                else cout<<A[i][j];
            }
            cout<<endl;
        }
    }
}

int main(int argc, const char * argv[]) {
    int numVertex, numEdge;
    scanf("%d %d", &numVertex, &numEdge);
    
    initA(numVertex);
//    int T[numVertex][numVertex];
    int x, y, distance;
    for (int i = 0; i < numEdge; i++){
        scanf("%d %d %d", &x, &y, &distance);
        A[x][y] = distance;
    }
    warshallFloyd(numVertex);
    
    printA(numVertex);
    
//    std::cout << "Hello, World!\n";
    return 0;
}