#include<stdio.h> 
#include<stdlib.h> 
struct node{ int key; struct node *p; struct node *l; struct node *r; }; 
typedef struct node *NodePointer; 
NodePointer r,NIL; 
NodePointer find(NodePointer x,int k){ 
while(x != NIL && k != x->key){ 
if(k < x->key){ 
x = x->l; 
}else{ x = x->r; 
} 
} 
return x; 
} 
void insert(int k){ 
NodePointer y = NIL; 
NodePointer x = r; 
NodePointer z = (NodePointer)malloc(sizeof(struct node)); 
z->key = k; 
z->l = NIL; 
z->r = NIL; 
while(x != NIL){ 
y = x; 
if(z->key < x->key){
x = x->l; 
}else{ x = x->r; 
} 
} 
z->p = y; 
if(y == NIL){ 
r = z; 
}
else if(z->key < y->key){ 
y->l = z; 
}
else{ y->r = z; 
} 
} 
void inorder(NodePointer u){ 
if(u == NIL){ 
return; 
} 
inorder(u->l); 
printf(" %d",u->key); 
inorder(u->r); 
} 
void preorder(NodePointer u){ 
if(u == NIL){ 
return; 
}
printf(" %d",u->key); 
preorder(u->l); 
preorder(u->r); 
} 
void print(){ 
inorder(r); 
puts(""); 
preorder(r); 
puts(""); 
} 
int main(){ 
int n,i,j,z,x; 
char s[10]; 
scanf("%d",&n); 
for(i=0;i<n;i++){ 
scanf("%s",s); 
if(s[0] == 'f'){ 
scanf("%d",&x); 
NodePointer t = find(r,x); 
if(t == NIL)printf("no\n"); 
else printf("yes\n"); 
}
else if(s[0] == 'i')
{ scanf("%d",&z); 
insert(z); 
}
else{ 
print(); 
} 
} 
return 0; 
} 
