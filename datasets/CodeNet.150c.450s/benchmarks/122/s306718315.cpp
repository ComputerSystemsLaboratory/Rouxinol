#include <iostream>

using namespace std;

struct MaxHeap{
    int h [2000000];
    int lastPos; //index of last element=number of elements
    
    MaxHeap(){ 
        lastPos=0;
    } 
    
    bool isLeaf(int pos){ 
        if (pos>(lastPos/2) && pos <=lastPos){
            return true;
        } else {
            return false;
        }
    }

    void siftDown(int pos) {
        bool isHeap=false;
        int lc, rc, temp;
        while (!isLeaf(pos) && isHeap==false){
            lc = 2*pos, rc= 2*pos+1; //lc=leftChild, rc=rightChild
            if (rc <=lastPos){ //if it has a right son
                if (h[rc]>h[lc]){
                    lc=rc; //rc is greater than lc
                }
            }
            if (h[pos]>=h[lc]){
                isHeap=true;
            } else {
                temp=h[pos];
                h[pos]=h[lc];
                h[lc]=temp;
                pos=lc; //moving down
            }
        }
    }
    
    //increases the number of elements and insert the new key k at the end of the array, then compare with 
    //the parent's value, if the k's value is less than of its parent it's a heap, if not swap k and its father,
    //keep comparing until k is in its right position
    void insert(int k) {
        int currPos, temp;
        lastPos++;
        currPos=lastPos;
        h[currPos] = k; 
        while (currPos>1 && h[currPos]>h[currPos/2]){ //currPos/2=parent's position
            temp=h[currPos];
            h[currPos]=h[currPos/2];
            h[currPos/2]=temp;
            currPos=currPos/2;
        }
    }
    int removeMax() {
        int root=h[1], temp; //root=max value
        temp=h[1];
        h[1]=h[lastPos];
        h[lastPos]=temp;
        lastPos--;
        siftDown(1);
        return root;
    }
};

int main(){
    string op;
    int k, removed;
    MaxHeap heap;
    while(cin>>op && op.compare("end")!=0){
        if(op[0]=='i'){ //insert
            cin>>k;
            heap.insert(k);
        } else { //extract
            removed=heap.removeMax();
            cout<<removed<<endl;
        }
    }
    return 0;
}
