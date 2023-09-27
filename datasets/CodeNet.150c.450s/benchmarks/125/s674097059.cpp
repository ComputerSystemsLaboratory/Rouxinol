#include<iostream>
#include<vector>
#include<stack>

const static int MAX = 100;
int G[MAX][MAX];
int nt[MAX];
int n;

int nextNode(int x){
    for(int i = nt[x]; i < n; i++){
	if(G[x][i] == 1){
	    nt[x] = i + 1;
	    return i;
	}
    }
    return -1;
}

int main(void){
    std::stack<int> st;
    int color[MAX], a[MAX], b[MAX];
    int u, k, v, time;

    time = 0;
    std::cin >> n;

    for(int i = 0; i < n; i++){
	color[i] = 0;
    }

    for(int i = 0; i < n; i++){
	std::cin >> u >> k;
	u--;
	for(int j = 0; j < k; j++){
	    std::cin >> v;
	    v--;
	    G[u][v] = 1;
	}
    }

    for(int i = 0; i < n; i++){
	if(color[i] == 0){
	    st.push(i);
	    color[i] = 1;
	    a[i] = ++time;
	}
	while(!st.empty()){
	    int cur = st.top();
	    int next = nextNode(cur);
	    if(color[next] == 0 && next != -1){
	        st.push(next);
	        color[next] = 1;
	        a[next] = ++time;
	    }
	    if(next == -1){
		st.pop();
		b[cur] = ++time;
	    }
	}
    }

    for(int i = 0; i < n; i++){
        std::cout << i+1 << " " << a[i] << " " << b[i] << std::endl;
    }


    return 0;

}

