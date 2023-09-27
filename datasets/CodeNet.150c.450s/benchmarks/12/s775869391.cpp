#include<iostream>
#define PARENT(x) ((x)/2)
#define LEFT(x) ((x)*2)
#define RIGHT(x) ((x)*2+1)

using namespace std;
int H[255];
int n;

bool valid(int key){
	return (key <= n) && (key > 0);
}

void printNode(int id){
	cout<<"node "<<id<<": key = "<<H[id]<<", ";
	int parent = PARENT(id);
	int left = LEFT(id);
	int right = RIGHT(id);
	if(valid(parent)){
		cout<<"parent key = "<<H[parent]<<", ";
	}
	if(valid(left)){
		cout<<"left key = "<<H[left]<<", ";
		if(valid(right)){
			cout<<"right key = "<<H[right]<<", ";
		}
	}
	cout<<endl;
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>H[i];
	}
	for(int i=1;i<=n;i++){
		printNode(i);
	}
	//system("pause");
	return 0;
}
