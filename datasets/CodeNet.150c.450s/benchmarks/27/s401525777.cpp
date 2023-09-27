#include<iostream>

template<class T>
struct binary_serch_tree{
  struct tree{
    T id;
    tree* left;
    tree* right;
    tree* parent;
  };
  tree* root;
  tree original;
  tree* null=&original;
  binary_serch_tree(){
    this->root=this->null;
    root->right=this->null;
    root->left=this->null;
  }

  void set_tree(tree* tr,tree* root){
    tree* null=this->null;
    tree* left=root->left;
    tree* right=root->right;
    if(root->id>tr->id){
      if(left==null){
        root->left=tr;
        tr->parent=root;
        tr->left=null;
        tr->right=null;
      }else{
        set_tree(tr,left);
      }
    }else{
      if(right==null){
        root->right=tr;
        tr->parent=root;
        tr->left=null;
        tr->right=null;
      }else{
        set_tree(tr,right);
      }
    }
  }

  void insert(T a){
    tree* tr=new tree;
    tr->id=a;
    if(this->root==this->null){
      this->root=tr;
      tr->left=this->null;
      tr->right=this->null;
      tr->parent=this->null;
    }else{
      set_tree(tr,this->root);
    }
  }
  void go_pre(tree* root){
    std::cout<<" "<<root->id;
    tree* left=root->left;
    tree* right=root->right;
    tree* null=this->null;
    if(left==null&&right==null){
      //do nothing
    }else if(left==null){
      go_pre(right);
    }else if(right==null){
      go_pre(left);
    }else{
      go_pre(left);
      go_pre(right);
    }
  }
  void print_pre(){
    go_pre(this->root);
  }
  void go_in(tree *root){
    tree* left=root->left;
    tree* right=root->right;
    tree* null=this->null;
    if(left==null&&right==null){
      std::cout<<" "<<root->id;
    }else if(left==null){
      std::cout<<" "<<root->id;
      go_in(right);
    }else if(right==null){
      go_in(left);
      std::cout<<" "<<root->id;
    }else{
      go_in(left);
      std::cout<<" "<<root->id;
      go_in(right);
    }
  }
  void print_in(){
    go_in(this->root);
  }
};



int main(){
  int n;
  std::cin>>n;
  binary_serch_tree<int> T;
  for(int i=0;i<n;i++){
    std::string s;
    std::cin>>s;
    if(s=="insert"){
      int a;
      std::cin>>a;
      T.insert(a);
    }else{
      T.print_in();
      std::cout<<std::endl;
      T.print_pre();
      std::cout<<std::endl;
    }
  }
}

