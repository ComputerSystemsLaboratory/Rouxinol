#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> A;
int H=0;

void maxHeapify(int idx)
{
    int left=2*idx, right=2*idx+1;
    int largest;
    if(left<=H && A[left]>A[idx]){
        largest=left;
    } else{
        largest=idx;
    }
    if(right<=H && A[right]>A[largest]){
        largest=right;
    }
    if(largest!=idx){
        swap(A[largest], A[idx]);
        maxHeapify(largest);
    }
}

void insert()
{
    int idx=H;
    int parent=idx/2;
    while(parent && A[idx]>A[parent]){
        swap(A[idx], A[parent]);
        idx=parent;
        parent/=2;
    }
}

int main()
{
    A.push_back(-1); // dummy
    while(true){
        char buf[8]; scanf("%s", buf);
        if(*buf=='i'){
            int k; scanf("%d", &k);
            A.push_back(k);
            H++;
            insert();
        } else if(buf[1]=='x'){
            printf("%d\n", A[1]);
            A[1]=A[H];
            H--;
            A.pop_back();
            maxHeapify(1);
        } else{
            break;
        }
    }
    return 0;
}