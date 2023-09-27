#include <iostream>
#include <vector>
using namespace std;

struct Node {
  int id;
  int depth;
  int height;
  int parent;
  int left;
  int right;
  Node(int id,int left,int right) {
    this->id = id;
    this->left = left;
    this->right = right;
    this->height = -1;
    this->depth = -1;
    this->parent = -1;
  }
  void regist_parent(int parent) {
    this->parent = parent;
  }
  void regist_height(int height) {
    this->height = height;
  }
  void regist_depth(int depth) {
    this->depth = depth;
  }
};

Node* return_parent(vector<Node*>& node_list,int n) {
  Node* current = node_list[0];
  while(true) {
    bool is_parent = true;
    // ????????????????????¨???????????§Parent?????§??°?????????
    for(int i=0;i<n;i++) {
      int left = node_list[i]->left;
      int right = node_list[i]->right;
      if(left == current->id || right == current->id) {
        current = node_list[i];
        is_parent = false;
      }
    }
    if(is_parent) {
      current->regist_parent(-1);
      current->regist_depth(0);
      return current;
    }
  }
  return NULL;
}

void set_depth_from_parent(Node* node, vector<Node*> &node_list) {
  if(node->left == -1 && node->right == -1) {
    return;
  }
  int parent = node->id;
  int depth = node->depth + 1;
  if(node->left != -1) {
    node_list[node->left]->regist_parent(parent);
    node_list[node->left]->regist_depth(depth);
    set_depth_from_parent(node_list[node->left],node_list);
  }
  if(node->right != -1) {
    node_list[node->right]->regist_parent(parent);
    node_list[node->right]->regist_depth(depth);
    set_depth_from_parent(node_list[node->right],node_list);
  }
}

void set_height_from_leaf(Node* leaf,vector<Node*> &node_list,int n) {
  int height = 0;
  leaf->regist_height(0);
  Node* current = leaf;
  while(true) {
    if(current->height < height) {
      current->regist_height(height);
    }

    if(current->parent != -1) {
      current = node_list[current->parent];
      height++;
    }
    else {
      return;
    }
  }
  return;
}

void crawl_preorder(vector<Node*> &node_list, vector<Node*> &order_list, Node* node) {
  order_list.push_back(node);
  if(node->left != -1)
    crawl_preorder(node_list,order_list,node_list[node->left]);
  if(node->right != -1)
    crawl_preorder(node_list,order_list,node_list[node->right]);
  return;
}
void crawl_inorder(vector<Node*> &node_list, vector<Node*> &order_list, Node* node) {
  if(node->left != -1) {
    crawl_inorder(node_list,order_list,node_list[node->left]);
  }
  order_list.push_back(node);
  if(node->right != -1) {
    crawl_inorder(node_list,order_list,node_list[node->right]);
  }
  return;
}
void crawl_postorder(vector<Node*> &node_list, vector<Node*> &order_list, Node* node) {
  if(node->left != -1) {
    crawl_postorder(node_list,order_list,node_list[node->left]);
  }
  if(node->right != -1) {
    crawl_postorder(node_list,order_list,node_list[node->right]);
  }
  order_list.push_back(node);
  return;
}


int main() {
  int n; cin >> n;
  vector<Node*> node_list(n,NULL);

  /* input */
  for(int i=0;i<n;i++) {
    int id; cin >> id;
    int left,right; cin >> left >> right;
    node_list[id] = new Node(id,left,right);
  }
  /* make binary trees */
  Node* parent = return_parent(node_list,n);
  set_depth_from_parent(parent,node_list);
  for(int i=0;i<n;i++) {
    if(node_list[i]->left == -1 && node_list[i]->right == -1)
      set_height_from_leaf(node_list[i],node_list,n);
  }
  /* order */
  vector<Node*> preorder_list;
  crawl_preorder(node_list,preorder_list,parent);
  vector<Node*> inorder_list;
  crawl_inorder(node_list,inorder_list,parent);
  vector<Node*> postorder_list;
  crawl_postorder(node_list,postorder_list,parent);

  /* output */
  cout << "Preorder" << endl;
  cout << " ";
  for(int i=0;i<n-1;i++) {
    cout << preorder_list[i]->id << " ";
  }
  cout << preorder_list[n-1]->id << endl;

  cout << "Inorder" << endl;
  cout << " ";
  for(int i=0;i<n-1;i++) {
    cout << inorder_list[i]->id << " ";
  }
  cout << inorder_list[n-1]->id << endl;

  cout << "Postorder" << endl;
  cout << " ";
  for(int i=0;i<n-1;i++) {
    cout << postorder_list[i]->id << " ";
  }
  cout << postorder_list[n-1]->id << endl;
}