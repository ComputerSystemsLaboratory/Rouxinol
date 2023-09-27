#include<iostream>

class completeBinaryTree{
public:
  int node;
  int key;
  int parent;
  int left;
  int right;
  //check if there are
  //0=false; 1=true
  int checkP;
  int checkL;
  int checkR;
};

int main(){
  int H;
  std::cin>>H;
  int A[H];
  completeBinaryTree C[H];
  for(int i=0;i<H;i++){
    std::cin>>A[i];
    C[i].node=i+1;
    C[i].key=A[i];
  }
  for(int i=0;i<H;i++){
    if(i==0){
      C[i].checkP=0;
    }else{
      C[i].checkP=1;
      C[i].parent=C[(i+1)/2-1].key;
    }
    if((i+1)*2+1<=H){
      C[i].checkL=1;
      C[i].checkR=1;
      C[i].left=C[(i+1)*2-1].key;
      C[i].right=C[(i+1)*2].key;

    }else if((i+1)*2<=H){
      C[i].checkL=1;
      C[i].checkR=0;
      C[i].left=C[(i+1)*2-1].key;
    }else{
      C[i].checkL=0;
      C[i].checkR=0;
    }
  }
  for(int i=0;i<H;i++){
    std::cout<<"node "<<C[i].node<<": ";
    std::cout<<"key = "<<C[i].key<<", ";
    if(C[i].checkP)std::cout<<"parent key = "<<C[i].parent<<", ";
    if(C[i].checkL)std::cout<<"left key = "<<C[i].left<<", ";
    if(C[i].checkR)std::cout<<"right key = "<<C[i].right<<", ";
    std::cout<<std::endl;
  }
}

