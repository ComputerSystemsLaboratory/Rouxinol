#include <iostream>
#include <stdlib.h>
 
using namespace std;
 
class node{
public:
    int key;
    node *parent;
    node *right;
    node *left;
    node(){
        this->key = 0;
        this->parent = NULL;
        this->right = NULL;
        this->left = NULL;
    }
};

void maxHeapModiyfy(int i,int n,node H[]){

  int left = ((i)*2)+1;
  int right = (((i)*2)+1)+1;
  int large = 0;
  node temp;

  //cout << "left:" << left << " right:" << right << endl;

  if(left < n && H[left].key > H[i].key){
    large = left;
  }
  else {
    large = i;
  }

  if(right < n && H[right].key > H[large].key){
    large = right;
  }

  if(large != i){
    temp = H[i];
    H[i] = H[large];
    H[large] = temp;
    maxHeapModiyfy(large,n,H);
  }
}

void buildMaxHeap(int n,node H[]){

  int i;

  for(i = (n/2)-1;i >= 0;i--){
    maxHeapModiyfy(i,n,H);
  }
}

void printKey(int n,node H[]){

  int i;

  for(i = 0;i < n;i++){
    cout << ' ' << H[i].key;
  }
  cout << endl;
}

void print(int n,node H[]){
 
    int i;
 
    for(i = 0;i < n;i++){
        cout << "node " << i+1 << ": ";
        cout << "key = " << H[i].key << ", ";
        if(H[i].parent != NULL){
            cout << "parent key = " << H[i].parent->key << ", ";
        }
        if(H[i].left != NULL){
            cout << "left key = " << H[i].left->key << ", ";
        }
        if(H[i].right != NULL){
            cout << "right key = " << H[i].right->key << ", ";
        }
        cout << endl;
    }
}
 
int main(){
 
    int i;
    int n;
    node* H;
 
    cin >> n;
 
    H = new node[n];
 
    for(i = 0;i < n;i++){
        cin >> H[i].key;
        if(i != 0){
            H[i].parent = &H[((i+1)/2)-1];
        }
        if((i+1)*2 <= n){
            H[i].left = &H[((i+1)*2)-1];
        }
        if((i+1)*2+1 <= n){
            H[i].right = &H[(((i+1)*2)+1)-1];
        }
    }
 
    buildMaxHeap(n,H);

    printKey(n,H);
 
    delete[] H;
 
    return 0;
}