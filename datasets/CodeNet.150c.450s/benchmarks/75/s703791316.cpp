#include <cassert>
#include <algorithm>
#include <iostream>
#include <vector>

int left(int i){return i*2;}
int right(int i){return i*2+1;}
void maxHeapify(std::vector<int>& A, int i)
{
    int H = A.size();
    int l = left(i);
    int r = right(i);
    int largest;
    if(l <= H && A[l] > A[i]){
        largest = l;
    }else{
        largest = i;
    }
    if(r <= H && A[r] > A[largest]){
        largest = r;
    }
    if(largest != i){
        std::swap(A[i], A[largest]);
        maxHeapify(A, largest);
    }
}

void buildMaxHeap(std::vector<int>& A)
{
    int H = A.size() + 1;
    for(std::size_t i = H/2; i; --i){
        maxHeapify(A, i);
    }
}

int main()
{
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);
    int H;
    std::cin >> H;
    std::vector<int> A(H+1);
    for(std::size_t i = 1; i <= H; ++i){
        int Value;
        std::cin >> Value;
        A[i] = Value;
    }
    buildMaxHeap(A);
    for(std::size_t i = 1; i <= H; ++i){
        std::cout << " " << A[i];
    }
    std::cout << std::endl;
    return 0;
}