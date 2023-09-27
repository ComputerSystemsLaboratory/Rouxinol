#include<cstdio>
#include<cstring>
#include<stack>
#include<vector>
using namespace std;

const int MAXN = 123456;
int N, L[MAXN], R[MAXN], is_child[MAXN], root;

void preorder_traverse(int root) {
	stack<int> st;
	for(int i=root; ; ) {
		if(i != -1) {
			printf(" %d", i);
			st.push(i);
			i = L[i];
		} else {
			if(st.empty()) break;
			i = R[st.top()];
			st.pop();
		}
	}
}

void inorder_traverse(int root) {
	stack<int> st;
	for(int i=root; ; ) {
		if(i != -1) {
			st.push(i);
			i = L[i];
		} else {
			if(st.empty()) break;
			printf(" %d", st.top());
			i = R[st.top()];
			st.pop();
		}
	}
}

void postorder_traverse(int root) {
	vector<int> list;
	stack<int> st;
	for(int i=root; ; ) {
		if(i != -1) {
			list.push_back(i);
			st.push(i);
			i = R[i];
		} else {
			if(st.empty()) break;
			i = L[st.top()];
			st.pop();
		}
	}
	
	for(int i=list.size()-1; i>=0; i--) {
		printf(" %d", list[i]);
	}
}

void postorder_traverse_2(int root) {
	stack<int> st;
	int prev = -1;
	for(int i=root; ; ) {
		if(i != -1) {
			st.push(i);
			i = L[i];
		} else {
			if(st.empty()) break;
			i = st.top();
			st.pop();
			if(R[i] == -1 || R[i] == prev) {
				printf(" %d", i);
				prev = i;
				i = -1;
			} else {
				st.push(i);
				i = R[i];
			}
		}
	}
}
 
int main() {
	#ifdef LOCAL
		freopen("in.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif
	
	scanf("%d", &N);
	memset(is_child, 0, sizeof(is_child));
	for(int i=0; i<N; ++i) {
		int j;
		scanf("%d", &j);
		scanf("%d%d", &L[j], &R[j]);
		if(L[j] != -1) is_child[L[j]] = 1;
		if(R[j] != -1) is_child[R[j]] = 1;
	}
	
	for(int i=0; i<N; ++i) {
		if(!is_child[i]) {
			root = i;
			break;
		}
	}
	
	puts("Preorder");
	preorder_traverse(root);
	puts("");
	
	puts("Inorder");
	inorder_traverse(root);
	puts("");
	
	puts("Postorder");
	postorder_traverse(root);
	puts("");
	
	return 0;
}