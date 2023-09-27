#include<cstdio>
#include<algorithm>
using namespace std;

const int nil=-1;
struct node{
	int parent;
	int degree;
	int left;
	int right;
	int depth;
	int height;
};
node *nodes;int n;

int height_setd(int id, int d) //????????????height, ????????¨??¨??????depth????¨????
{
	int res;
	if( id==nil ){
		res=-1;
	}else{
		nodes[id].depth=d;
		res= nodes[id].height=max(
			1 +height_setd(nodes[id].left, d+1),
		 	1 +height_setd(nodes[id].right, d+1)
		);
	}
	return res;

}
int trackroot(int start){
	int prt=nodes[start].parent;
	if( prt==nil )
		return start;
	else
		return trackroot(prt);
}
int getsib(int id)
{
	int p=nodes[id].parent;
	if( p==nil ){
		return nil;
	}else{
		return nodes[p].left+nodes[p].right-id;
	}
}
void show_preorder(int id)
{
	if(id==nil){
		return;
	}else{
		printf(" %d",id);
		show_preorder(nodes[id].left);
		show_preorder(nodes[id].right);
	}
}
void show_inorder(int id)
{
	if(id==nil){
		return;
	}else{
		show_inorder(nodes[id].left);
		printf(" %d",id);
		show_inorder(nodes[id].right);
	}
}
void show_postorder(int id)
{
	if(id==nil){
		return;
	}else{
		show_postorder(nodes[id].left);
		show_postorder(nodes[id].right);
		printf(" %d",id);
	}
}

int main()
{
	scanf("%d",&n);nodes=new node[n];

	for(int i=0;i<n;i++)
		nodes[i].parent=nodes[i].left=nodes[i].right=nil;
	

	for(int i=0,id,l,r; i<n; i++){
		scanf("%d %d %d",&id,&l,&r);
		if( l!=nil ){
			nodes[id].left=l;
			nodes[l].parent=id;
		}
		if( r!=nil ){
			nodes[id].right=r;
			nodes[r].parent=id;
		}
		if( r!=nil && l!=nil ){
			nodes[id].degree=2;
		}else if( r==nil && l==nil ){
			nodes[id].degree=0;
		}else{
			nodes[id].degree=1;
		}
		l=r=nil;
	}
	int root=trackroot(0);
	height_setd(root, 0);

	printf("Preorder\n");show_preorder(root);printf("\n");
	printf("Inorder\n");show_inorder(root);printf("\n");
	printf("Postorder\n");show_postorder(root);printf("\n");
	
}