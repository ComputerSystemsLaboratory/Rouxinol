#include <map>
#include <set>
#include <list>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>

#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define repi(i,a,b) for(int i = (a); i < (b); i++)

using namespace std;

typedef    long long          ll;
typedef    unsigned long long ull;
typedef    vector<bool>       vb;
typedef    vector<int>        vi;
typedef    vector<vb>         vvb;
typedef    vector<vi>         vvi;
typedef    pair<int,int>      pii;

const int INF=1<<29;
const double EPS=1e-9;

const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};
// ss_wk参考
class Rooted_Tree
{
public:
	int id;
	int parent;
	int sibling;//兄弟
	int depth;//深さ
	int height;//高さ
	string type;//種類
	int degree;//字数
	vector<int> child;//子供
	Rooted_Tree(){
		id =parent= sibling =degree =depth =height = -1;
		type ="non";
	}
};
//再帰で木をたどり高さと深さを求める
int fill_depth(vector<Rooted_Tree> &rt,int id,int depth){
	int buf =-1;
	rt[id].depth =depth;
	rt[id].height = 0;
	for(int i =0;i <rt[id].degree;i++){
		buf = fill_depth(rt, rt[id].child[i], depth+1);
		rt[id].height =max(rt[id].height,buf);
	}
	return rt[id].height+1;
}
bool asc(const Rooted_Tree &right,const Rooted_Tree &left){
	return right.id <left.id;
}
//先行順巡回
void Preorder(vector<Rooted_Tree> rt,int node){//現在のノード
	if(node==-1)return;
	cout <<" "<<node;//<<" "<<rt[node].child[0]<<" "<<rt[node].child[1]<<endl;
	Preorder(rt, rt[node].child[0]);
	Preorder(rt, rt[node].child[1]);
	return ;
}

void Inorder(vector<Rooted_Tree> rt,int node){
	if(node==-1)return;
	Inorder(rt,rt[node].child[0]);
	cout <<" "<<node;
	Inorder(rt, rt[node].child[1]);
}

void postorder(vector<Rooted_Tree> rt,int node){
	if(node==-1)return;
	postorder(rt, rt[node].child[0]);
	if(rt[node].child[1]==-1){
		cout <<" "<<node;
	}else{
		postorder(rt,rt[node].child[1]);
		cout <<" "<<node;
	}
}
int main(){
	int n;
	vector<Rooted_Tree> rt;
	cin>>n;
	for(int i =0;i < n;i++){
		Rooted_Tree buf;
		cin>>buf.id;
		buf.degree = 0;
		for(int j =0;j <2;j++){
			int i_buf;
			cin>>i_buf;
			if(i_buf !=-1){
				buf.degree++;
			}
			buf.child.push_back(i_buf);
		}
		rt.push_back(buf);
	}
	//id番号でsort
	sort(rt.begin(),rt.end(),asc);
	 //ID==iのnodeが持っている子のnodeを埋めていく。
    //子が　(いない場合)、一人の場合、二人の場合の三つで場合分け。
	for(int i =0;i < n;i++){
		if(rt[i].degree==1){
			if(rt[i].child[0]!=-1){
				rt[rt[i].child[0]].parent =rt[i].id;
			}else{
				rt[rt[i].child[1]].parent =rt[i].id;
			}
		}else if(rt[i].degree==2){
			if(rt[i].child[0]!=-1){
				rt[rt[i].child[0]].parent =rt[i].id;
			}
			//rt[rt[i].child[0]].sibling =rt[i].child[1];
			if(rt[i].child[1]!=-1){
				rt[ rt[i].child[1] ].parent=rt[i].id;
			}
			//rt[ rt[i].child[1] ].sibling=rt[i].child[0];
		}
	}
	for(int i =0;i < n;i++){
		if(rt[i].parent==-1){
			rt[i].type ="root";
			//fill_depth(rt, i, 0);
			//cout <<"root = "<<i<<endl;
			cout <<"Preorder"<<endl;
			Preorder(rt,i);
			cout<<endl;
			cout<<"Inorder"<<endl;
			Inorder(rt, i);
			cout<<endl;
			cout<<"Postorder"<<endl;
			postorder(rt,i);
			cout <<endl;
			return 0;
		}else{
			if(rt[i].degree!=0)rt[i].type ="internal node";
			else rt[i].type ="leaf";
		}
	}
	//出力
	/*for(int i=0; i<n; i++){
		printf("node %d: parent = %d, sibling = %d, degree = %d, depth = %d, height = %d, %s\n", rt[i].id, rt[i].parent, rt[i].sibling, rt[i].degree, rt[i].depth, rt[i].height, rt[i].type.c_str());
	}*/

		return 0;
	}