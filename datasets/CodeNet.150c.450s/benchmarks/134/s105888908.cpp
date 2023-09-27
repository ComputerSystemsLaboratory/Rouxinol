/*
二分木は、子が一つしかなくても、それが右の子か左の子かラベル付けされていなければならないようだ。
以下のは、ラベル付けがされている答えと、されてない私の実行結果の違いである。（inorderが違くなる）

 ALDS1_7_C: Tree Walk test cace 6より

7
0 -1 -1
1 -1 4
4 5 -1
2 3 1
3 -1 0
6 -1 -1
5 6 -1

 correct answer
Preorder
 2 3 0 1 4 5 6
Inorder
 3 0 2 1 6 5 4
Postorder
 0 3 6 5 4 1 2

 my answer 
Preorder
 2 3 0 1 4 5 6
Inorder
 0 3 2 6 5 4 1
Postorder
 0 3 6 5 4 1 2
*/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>


using namespace std;

class Rooted_Tree
{

public:
	int id;  //idはなくす。　全部添え字で管理　そうしないと配列内でidに対してfindしないといけなくなり、実行時間増えるので
	int parent;
	//int degree;
	int l_sub; //left subtree.
	int r_sub; //right subtree.

	Rooted_Tree()
    {
        id = parent = -1;
    }

};


void Preorder(vector<Rooted_Tree> &rt, int id){

	cout << " " << id;
	if(rt[id].l_sub!=-1) Preorder(rt, rt[id].l_sub);
	if(rt[id].r_sub!=-1) Preorder(rt, rt[id].r_sub);
}

void Inorder(vector<Rooted_Tree> &rt, int id){

	if(rt[id].l_sub!=-1) Inorder(rt, rt[id].l_sub);
	cout << " " << id;
	if(rt[id].r_sub!=-1) Inorder(rt, rt[id].r_sub);
}

void Postorder(vector<Rooted_Tree> &rt, int id){

	if(rt[id].l_sub!=-1) Postorder(rt, rt[id].l_sub);
	if(rt[id].r_sub!=-1) Postorder(rt, rt[id].r_sub);
	cout << " " << id;
}


bool asc(const Rooted_Tree &right, const Rooted_Tree &left){ return right.id < left.id;}

int main() {
	int i,j,i_buf;
	int n;
	vector<Rooted_Tree> rt;
	vector<int> out_buf;

	//input
	// 標準入出力をファイルに変更////////////////////////////////////////////////////////
    //FILE* fp_in = freopen("\\\\k1300\\k1300\\s1350010\\.windows\\Desktop\\input_data.txt", "r", stdin);
	/////////////////////////////////////////////////////////////////////////////////////
	cin >> n;
	for(i=0; i<n; i++){
		Rooted_Tree buf;
		cin >> buf.id;
		cin >> buf.l_sub;
		cin >> buf.r_sub;
		rt.push_back(buf);
	}
	// ファイルを閉じる//////////////////////////////////////////////////////////////////
    //fclose(fp_in);
	/////////////////////////////////////////////////////////////////////////////////////
	

	//id==添え字　にする
	sort(rt.begin(), rt.end(), asc);
	
	// fill parent
	//ID==iのnodeが持っている子のnodeを埋めていく。
	for(i=0; i<n; i++){
		if(rt[i].l_sub !=-1) rt[ rt[i].l_sub ].parent=rt[i].id;
		if(rt[i].r_sub !=-1) rt[ rt[i].r_sub ].parent=rt[i].id;
	}

	//出力はout_bufにためて、output_node()で成形して出す。
	for(i=0; i<n; i++){
		//rootをさがす。わざわざループ使わなくてもfindとかでもいいが、構造体のvectorなので検索専用の関数作るのめんどくさいからやめた
		if(rt[i].parent==-1){
			printf("Preorder\n");
			Preorder(rt, i);
			cout << endl;

			printf("Inorder\n");
			Inorder(rt, i);
			cout << endl;

			printf("Postorder\n");
			Postorder(rt, i);
			cout << endl;

			break;
		}
	}
	

	
	return 0;
}