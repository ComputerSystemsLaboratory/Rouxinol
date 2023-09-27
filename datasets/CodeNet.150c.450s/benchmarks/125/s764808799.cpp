#include<iostream>
#include<vector>
#include<stack>
using namespace std;

struct Vertex {
	int id;
	vector<int> vertices;
	int visited;
	int completed;
};

int getNext(Vertex vertices[], int id){
	Vertex v = vertices[id-1];
	int size = v.vertices.size();
	for(int i=0;i<size;i++){
		int nId = v.vertices[i];
		if (vertices[nId-1].visited==-1){
			return nId;
		}
	}
	return -1;
}

void dfs(int n, Vertex vertices[]){
	
	int time = 0;

	for(int i=0;i<n;i++){
		Vertex cur=vertices[i];
		stack<int> st;
		if(cur.visited==-1){
			st.push(cur.id);
		}
		while(!st.empty()){
			int id=st.top();
			if(vertices[id-1].visited==-1){
				vertices[id-1].visited=++time;
			}
			int nId=getNext(vertices,id);
			if(nId!=-1){
				vertices[nId-1].visited=++time;
				st.push(nId);
			} else {
				vertices[id-1].completed=++time;
				st.pop();
			}
		}
	}
}

int main(){
	int n;
	cin >> n;
	Vertex vertices[n];
	for(int i=0;i<n;i++){
		int id;
		cin >> id;
		vertices[i].id = id;
		vertices[i].visited = -1;
		vertices[i].completed = -1;
		int cnt;
		cin >> cnt;
		for(int j=0;j<cnt;j++){
			cin >> id;
			vertices[i].vertices.push_back(id);
		}
	}
	
	dfs(n,vertices);
	
	for(int i=0;i<n;i++){
		Vertex v = vertices[i];
		cout << v.id << " ";
		cout << v.visited << " ";
		cout << v.completed << endl;
	}
	return 0;
}

