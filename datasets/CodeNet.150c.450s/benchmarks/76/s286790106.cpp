#include<iostream>
using namespace std;
struct Node{
Node(){
left=right=0;
}
Node(int tmp,Node* l=0,Node *r=0){
data=tmp;
left=l;
right=r;
}
Node *left;
Node *right;
int data;
};
class tree{
public:
tree(){
first = 0;
}
void insert(int tmp){
if(!first){
first=new Node(tmp);
return;
}
Node *link = first;
while(true){
if(link->data<tmp)
{
if(link->right)link=link->right;
else{
link->right=new Node(tmp);
return;
}
}
else if(link->data>tmp)
{
if(link->left)link=link->left;
else
{
link->left=new Node(tmp);
return;
}
}
else return;
}
}
void pre(Node *tmp){
if(!tmp)return;
cout<<' '<<tmp->data;
pre(tmp->left);
pre(tmp->right);
}
void in(Node *tmp){
if(!tmp)return;
in(tmp->left);
cout<<' '<<tmp->data;
in(tmp->right);
}
void print(){
in(first);
cout<<endl;
pre(first);
cout<<endl;
}
void find(int tmp)
{
if(!first){
cout<<"no"<<endl;
return;
}
Node *link = first;
while(true){
if(link->data<tmp)
{
if(link->right)link=link->right;
else{
cout<<"no"<<endl;
return;
}
}
else if(link->data>tmp)
{
if(link->left)link=link->left;
else
{
cout<<"no"<<endl;
return;
}
}
else{
cout<<"yes"<<endl;
return;
}
}
}
void del(int tmp){
if(!first)return;
Node *link = first;
Node *parent=NULL;
while(true){
if(link->data>tmp){
parent = link;
if(link->left)link=link->left	;
else return;
}
else if(link->data<tmp){
parent = link;
if(link->right)link=link->right	;
else return;
}
else break;
}
Node *bedel;
if(link->left&&link->right)
{
	bedel = link->right;
parent=NULL;
while(bedel->left){
parent=bedel;
bedel=bedel->left;
}
if(!bedel->right){
if(!parent){
link->data=bedel->data;
link->right=NULL;
delete bedel;
return;
}
else
{
parent->left=NULL;
link->data=bedel->data;
delete bedel;
return;
}}
else{
if(!parent){
link->data=bedel->data;
link->right=bedel->right;
delete bedel;
return;
}
else{
link->data=bedel->data;
parent->left=bedel->right;
delete bedel;
return;
}
}

}
else if(link->left){
if(parent){
	if(parent->left==link){
parent->left=link->left;
}
else parent->right=link->left;
delete link;
return;
}
first=first->left;
delete link;
}
else
 {
if(parent){
	if(parent->left==link){
parent->left=link->right;
}
else parent->right=link->right;
delete link;
return;
}
first=first->right;
delete link;
}
}
private:Node*first;
};
int main(){
	char s[30];
	int n,tmp;
	tree a;
	cin>>n;
	while(n--){
		cin>>s;
		switch(s[0]){
			case 'i':cin>>tmp;a.insert(tmp);break;
			case 'p':a.print();break;
			case 'd':cin>>tmp;a.del(tmp);break;
			case 'f':cin>>tmp;a.find(tmp);break;
			default:break;
			}
		}
	return 0;
	}
