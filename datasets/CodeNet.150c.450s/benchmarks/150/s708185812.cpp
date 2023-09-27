#include<iostream>
#include<vector>
#include<cstring>
#include<cstdlib>

const int MAX=10010;

void countingSort(std::vector<int> &A,std::vector<int> &sorted){
    int count[MAX];
    int n=A.size();
    memset(count,0,sizeof(count));
    for(int i=0;i<n;i++)
        count[A[i]]++;
    for(int i=0;i<MAX;i++)
        count[i+1]+=count[i];
    for(int i=n-1;i>=0;i--)
        sorted[--count[A[i]]]=A[i];
}

int main(void){
    int n;
    std::cin>>n;
    std::vector<int> A(n);
    for(int i=0;i<n;i++)
        std::cin>>A[i];
    std::vector<int> sorted(n);
    countingSort(A,sorted);
    for(int i=0;i<n;i++)
        std::cout<<(i?" ":"")<<sorted[i];
    std::cout<<std::endl;

    return 0;
}
