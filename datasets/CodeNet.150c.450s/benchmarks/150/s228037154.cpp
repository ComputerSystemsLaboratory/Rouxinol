#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <math.h>

#define K 10000
typedef long long ll;

using namespace std;
int N;
vector<int> A;
vector<int> B;
vector<int> C;

void counting_sort(){
    for (int i = 0; i <= K; i++){
        C.push_back(0);
    }
    for (int j = 0; j < A.size(); j++){
        C[A[j]] = C[A[j]] + 1;
    }
    for (int i = 0; i <= K; i++){
        if (C[i] > 0){
            while (C[i] > 0){
                B.push_back(i);
                C[i] = C[i] - 1;
            }
        }
    }
}

//提出時には消す
#include <fstream>

int main()
{
    //提出時には消す
    // std::ifstream in("/home/ubuntu/procon/input.txt");
    // cin.rdbuf(in.rdbuf());

    cin.tie(0);

    int n;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> n;
        A.push_back(n);
    }

    counting_sort();
    
    for (int i = 0; i < B.size(); i++)
    {   
        if (i < B.size() - 1){
            cout << B[i] << " ";
        }else{
            cout << B[i] << "\n";
        }
    }
    return 0;
}
