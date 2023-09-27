#include<iostream>
#include<map>
#include<set>
#include<stack>
using namespace std;
typedef struct node{
    int id;
    node *left, *right;
    node(int id):id(id),left(NULL),right(NULL){}
} Node;
class Solution{
private:
       map<int,Node*> hashMapping;
       set<int> rootCandidates, nonRootNodes;

       Node* createNode(int ID){
              if(ID!=-1){
               if(hashMapping.find(ID) == hashMapping.end()){
                    hashMapping[ID] = new Node(ID);
              } 
              return hashMapping[ID];
           }else{
              return NULL; 
           }
       }
       void preorder(Node* root){
          stack<Node*> stk;
          Node* prev = NULL;
          if(root){
              stk.push(root);
          }        
          while(!stk.empty()){
             Node* curr = stk.top();
             stk.pop();
             cout<<" "<< curr -> id;
             if(curr->right){
               stk.push(curr->right);
             }              
	     if(curr->left){     
               stk.push(curr->left);
             }                   
          }
       }
       void inorder(Node* root){
          stack<Node*> stk;
          Node* prev = NULL;
          if(root){
              stk.push(root);
          }        
          while(!stk.empty()){
             Node* curr = stk.top();
             if(!prev || prev->left == curr || prev->right == curr){
                 if(curr->left){
                    stk.push(curr->left);
                 }
             }else{
                 cout<<" "<< curr -> id;
                 stk.pop();
                 if(curr->right){
                    stk.push(curr->right);    
                 }                              
             } 
             prev = curr;         
          }     
       }
       void postorder(Node* root){ 
          stack<Node*> stk;
          Node* prev = NULL;
          if(root){
              stk.push(root);
          }
          while(!stk.empty()){
             Node* curr = stk.top();
             if(!prev || prev->left == curr || prev->right == curr){
                 if(curr->left){
                    stk.push(curr->left);
                 }else
                 if(curr->right){
                    stk.push(curr->right);                 
                 }
             }else{
                 if(curr->left == prev){
                   if(curr->right){
                     stk.push(curr->right);    
                   }             
                 }else{
                     cout<<" "<< curr -> id;
                     stk.pop();
                 }
             }   
             prev = curr;
          }           
       }
public:
     node* buildTree(){
           hashMapping.clear();
           rootCandidates.clear();
           nonRootNodes.clear();
           int num,rootID=-1;
           cin>>num;
           while(num--){
                 int ID,leftID,rightID;
                 cin>>ID>>leftID>>rightID;
                 if(nonRootNodes.find(ID) == nonRootNodes.end()){
                    rootCandidates.insert(ID);
                 }
                 nonRootNodes.insert(leftID);
                 rootCandidates.erase(leftID);
                 nonRootNodes.insert(rightID);
                 rootCandidates.erase(rightID);
                 createNode(ID)->left = createNode(leftID); 
                 createNode(ID)->right = createNode(rightID); 
           }
           return hashMapping[*rootCandidates.begin()];
     }
void printPreOrder(node *root){
         cout<<"Preorder"<<endl;
         preorder(root);
         cout<<endl;
     }
void printInOrder(node *root){
         cout<<"Inorder"<<endl;
         inorder(root);
         cout<<endl;
     }
void printPostOrder(node *root){
         cout<<"Postorder"<<endl;
         postorder(root);
         cout<<endl;
    }
} sln;
int main(int argc,char* argv[]){
    ios::sync_with_stdio(false);
    node *root = sln.buildTree(); 
    sln.printPreOrder(root);
    sln.printInOrder(root);
    sln.printPostOrder(root);
    return 0;
}