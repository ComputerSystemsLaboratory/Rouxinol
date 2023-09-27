/* 2013 0903 1649
と思ったけど、やっぱりSTL（Standard Template Library）
使うのやめて、 new deleteで動的に作って、リストみたいにポインタで管理して
行くことにする。
!（iteratorのアドレスはちょいちょい変わっちゃうらしいので,ポインタみたいに
ずっと所持っていうのは無理っぽい気がすると思ったので）

iteratorはポインタっぽいけど、使うのはやっぱりSTLに対してで、　
今回のだと、別にvectorに入れる必要もないし要らないかな。

木（リスト）は「頭付き」にしない。
rootになるやつのparentをnullにして、探査とかは、(nill!=parent)を毎回入れればいいだろう。

*/



/*2013 0903 1648
ALDS1_8-A Binary Search Tree I の Template in C 見たら、
リストで実装してて、leftとrightにはポインタ入れてたので

//自分の実装でもIDとか要素持たせないで、iterator使う。
//これで、idとvector添え字そろえるsortとか、findでid探したりとかが要らなくなる。

*/

/*
二分木は、子が一つしかなくても、それが右の子か左の子かラベル付けされていなければならないようだ。

詳しくは、IDEONE「子の左右を区別しない版 AOJ Algorithms and Data Structures I - Tree - Tree Walk(不正解である)」
ALDS1_7_C: Tree Walk test cace 6より
等を参照。
a
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>


using namespace std;

class Binary_Search_Tree
{

public:
	//int id;  //idはなくす。　全部添え字で管理　そうしないと配列内でidに対してfindしないといけなくなり、実行時間増えるので
	//bstなら、idでなくkeyて名前にしとこうか...面倒なのでやっぱりいい。

	int key;
	Binary_Search_Tree *parent; 
	//int degree;
	Binary_Search_Tree *left;
	Binary_Search_Tree *right; 

	Binary_Search_Tree()
    {
        parent = left = right = NULL;
    }

};

//最後に同じところでキーの大小比較を二回やるので無駄なように思えるが、多分これが一番すっきりしていて早いのだろう。
void TREE_INSERT(Binary_Search_Tree *&T, Binary_Search_Tree *z){
	Binary_Search_Tree *y, *x;

	y=NULL;
	x=T;
	while(x!=NULL){
		y=x;
		if(z->key < x->key) x=x->left;
		else x=x->right;
	}
	z->parent = y;
	if(y==NULL) T=z; //if T is empty
	else{ 
		if(z->key < y->key) y->left=z;
		else y->right=z;
	}
}

void TREE_FIND(Binary_Search_Tree *node, int k){
	Binary_Search_Tree *hoge=node;
	
	while(hoge != NULL){
		
		if(hoge->key==k){
			cout << "yes" << endl;
			return;
		}
		if(hoge->key < k) hoge=hoge->right;
		else hoge=hoge->left;
	}
	cout << "no" << endl;
}


//2013 0904 1502 この探索法だと、二分探索にならないので　時間かかりすぎる。
//再帰で探索。　戻り値の中にTRUEがあれば、ずっと戻ってくる
bool recursion_TREE_FIND(Binary_Search_Tree *node, int k){
	
	if(node==NULL) return false;
	if(node->key==k) return true;

	return  recursion_TREE_FIND(node->left, k) + recursion_TREE_FIND(node->right, k); //論理和
}




void Preorder(Binary_Search_Tree *node){

	cout << " " << node->key;
	if(node->left!=NULL) Preorder(node->left);
	if(node->right!=NULL) Preorder(node->right);
}

void Inorder(Binary_Search_Tree *node){

	if(node->left!=NULL) Inorder(node->left);
	cout << " " << node->key;
	if(node->right!=NULL) Inorder(node->right);
}

void Postorder(Binary_Search_Tree *node){

	if(node->left!=NULL) Postorder(node->left);
	if(node->right!=NULL) Postorder(node->right);
	cout << " " << node->key;
}




int main() {
	int i,j;
	int n,k;
	string s_buf;
	Binary_Search_Tree *bst=NULL; //in root address 

	//input
	// 標準入力をファイルに変更////////////////////////////////////////////////////////
    //FILE* fp_in = freopen("\\\\k1300\\k1300\\s1350010\\.windows\\Desktop\\input_data.txt", "r", stdin);
	/////////////////////////////////////////////////////////////////////////////////////
	cin >> n;
	for(i=0; i<n; i++){
		Binary_Search_Tree *buf;
		buf = new Binary_Search_Tree;

		cin >> s_buf;
		if(s_buf=="insert"){
			cin >> buf->key;
			TREE_INSERT(bst, buf);
		}
		else if(s_buf=="find"){
			cin >> k;
			TREE_FIND(bst,k);
		}
		else if(s_buf=="print"){
			Inorder(bst);
			cout << endl;

			Preorder(bst);
			cout << endl;
		}

	}
	// ファイルを閉じる//////////////////////////////////////////////////////////////////
    //fclose(fp_in);
	/////////////////////////////////////////////////////////////////////////////////////

	
	return 0;
}