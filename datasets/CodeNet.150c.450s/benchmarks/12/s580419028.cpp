#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;
int D[10000];
int H[10000];


void printResult(int i, int n){
    printf("node %d: key = %d, ",i,H[i]);
    if(i!=1) printf("parent key = %d, ",H[i/2]);
    if(2*i<=n) printf("left key = %d, ",H[2*i]);
    if(2*i+1<=n) printf("right key = %d, ",H[2*i+1]);
    printf("\n");

}

int main()
{
    int n,i,x;
    string com;

    cin>>n;
    for(i=1;i<=n;i++){
        cin>>H[i];
    }
    for(i=1;i<=n;i++){
        printResult(i,n);
    }


    return 0;
}
