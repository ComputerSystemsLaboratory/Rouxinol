#include<iostream>
#include<map>
#include<set>
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
         while(root){
              while(root -> left && root -> right){                
                Node *currNode = root->left;
                while(currNode->right != NULL && 
                      currNode->right != root){
                      currNode = currNode -> right;
                }                
                if(currNode -> right == NULL){
                   currNode -> right = root;
                   break;
                }else{
                   currNode -> right = NULL;
                   root = root -> right;                   
                }            
            }
             cout<<" "<<root->id;                                     
             root = root->left? root->left : root -> right;
           }  
       }
       void inorder(Node* root){
           while(root){
              while(root -> left){                
                Node *currNode = root->left;
                while(currNode->right != NULL && 
                      currNode->right != root){
                      currNode = currNode -> right;
                }                
                if(currNode -> right == NULL){
                   currNode -> right = root;
                   root = root -> left;
                }else{
                   currNode -> right = NULL;
                   break;
                }            
            }
             cout<<" "<<root->id;                        
             root = root -> right;
           }  
       }
       void postorder(Node* root){
          if(root==NULL){
             return;
          }else{
             postorder(root->left);
             postorder(root->right);
             cout<<" "<<root->id;
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