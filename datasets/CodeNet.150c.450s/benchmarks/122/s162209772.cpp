#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
 
void maxHeapify(vector<int>& A, int i, int H) {
    int l=2*i;
    int r=2*i+1;
    int largest=i;
 
    if(l<=H && A[i]<A[l]) {
        largest = l;
    }
 
    if(r<=H && A[largest]<A[r]) {
        largest = r;
    }
 
    if(largest!=i) {
        swap(A[i],A[largest]);
        maxHeapify(A,largest,H);
    }
 
    return;
}
 
int main() {
    int n;
    int H=0;
    int i;
    vector<int> A;
    string cmd;
 
    A.push_back(-1);
 
    cin >> cmd;
    while(cmd!="end") {
        if(cmd=="insert") {
            ++H;
            cin >> n;
            A.push_back(n);
            i=H;
            while(i/2!=0) {
                if(A[i]>A[i/2]) {
                    swap(A[i],A[i/2]);
                }
                i=i/2;
            }
        } else if(cmd=="extract") {
            cout << A[1] << endl;
            A[1]=A[H];
            --H;
            A.pop_back();
            maxHeapify(A,1,H);
        }
        cin >> cmd;
    }
    return 0;
}
