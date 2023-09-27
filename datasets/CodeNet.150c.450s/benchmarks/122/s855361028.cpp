#if debug
#include<iostream>

using namespace std;
int H=0;
int A[2000000+2];

void maxHeapify(int i){
	int l=2*i;
	int r=2*i+1;
	int largest;
	if(l<=H&&A[l]>A[i]){
		largest=l;
	}
	else
		largest=i;
	if(r<=H&&A[r]>A[i])
			largest=i;
	if(largest!=i){
		swap(A[largest],A[i]);
		maxHeapify(largest);
	}
}

int extract(){
	int maxv;
	if(H<1) return -1e9;
	maxv=A[1];
	A[1]=A[H--];
	maxHeapify(1);
	return maxv;
}

void increaseKey(int i,int key){
	if(key<A[i]) return;
	A[i]=key;
	while(i>1&&A[i/2]<A[i]){
		swap(A[i/2],A[i]);
		i/=2;
	}
}

void insert(int key){
	H++;
	A[H]=-1e9;
	increaseKey(H,key);	
}
#include<string>
int main(){
	int key;
	string s;
	while(cin>>s){
		if(s=="insert"){
			cin>>key;
			insert(key);
		}
		else if(s=="extract"){
			cout<<extract()<<endl;
		}
		else 
			break;
	}
	return 0;
}
#endif

#include<iostream>
#include<queue>
using namespace std;

int main(){
	char s[20];
	priority_queue<int> que;
	while(1){
		cin>>s;
		if(s[0]=='e'&&s[1]=='n') break;
		if(s[0]=='i'){
			int key;
			cin>>key;
			que.push(key);
		}
		else if(s[0]=='e'){
			cout<<que.top()<<endl;
			que.pop();
		}
	}
}