#include <iostream>
#include <cstdio>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<pair<char, int> > A(N), B;
    for(auto it=A.begin(); it!=A.end(); it++){
        char suit;
        int value;
        cin >> suit >> value;
        *it=make_pair(suit, value);
    }
    copy(A.begin(), A.end(), back_inserter(B));

    auto print=[](vector<pair<char, int> > &A){
        for(auto it=A.begin(); it!=A.end(); it++){
            if(it!=A.begin()){
                printf(" ");
            }
            printf("%c%d", (*it).first, (*it).second);
        }
        printf("\n");
    };

    [&A, N]{
        for(int i=0; i<N; i++){
            for(int j=N-1; j>=i; j--){
                if(A[j].second < A[j-1].second){
                    swap(A[j], A[j-1]);
                }
            }
        }
    }();

    print(A);
    printf("Stable\n");

    [&B, N]{
        for(int i=0; i<N; i++){
            int minj=i;
            for(int j=i; j<N; j++){
                if(B[j].second < B[minj].second){
                    minj=j;
                }
            }
            swap(B[i], B[minj]);
        }
    }();

    print(B);
    if(A==B){
        printf("Stable\n");
    } else{
        printf("Not stable\n");
    }

    return 0;
}