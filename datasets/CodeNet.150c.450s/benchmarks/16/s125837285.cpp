#include <iostream>
#include <string>
#include <cstdlib>
#include <stack>
#include <queue>

using namespace std;

struct pond{
	int size;
	int left;
	int right;
};

bool inside(pond* small, pond* large);
void printpond(pond* p);
void printstack(stack<pond*> s);
void printqueue(queue<pond*> q);
void printanswer(stack<pond*> s);
void aaa(queue<pond*> q);

int main(){
	string str;
	cin >> str;
	stack<int> s;
	queue<pond*> q;
	stack<pond*> pondstack;
	int ans = 0;
	pond* p;
	for (int i=0; i<str.length(); i++){
		if (str[i]=='\\'){
			s.push(i);
		}
		else if (str[i]=='/'){
			if (s.size() != 0){
				ans += i-s.top();
				p = new pond;
				p->size = i-s.top();	
				p->left = s.top();
				p->right = i;
				s.pop();
				q.push(p);
			}
		}
	}

	cout << ans << endl;

	aaa(q);

	return 0;
}

bool inside(stack<pond*> s, pond* large){
	if (s.empty()){
		return false;
	}
	pond* small;
	small = s.top();
	return ((large->left < small->left) && (small->right < large->right));
}

void printstack(stack<pond*> s){
	while (!s.empty()){
		printpond(s.top());
		s.pop();
	}	
}

void printqueue(queue<pond*> q){
	while(!q.empty()){
		printpond(q.front());
		q.pop();
	}
}

void printpond(pond* p){
	cout << "size: " << p->size << ", left: " << p->left << ", right" << p->right << endl;
}

void printanswer(stack<pond*> s){
	int size;
	size = s.size();
	int l[size];
	for (int i=0; i<size; i++){
		l[size-i-1] = s.top()->size;
		s.pop();
	}
	cout << size;
	for (int i=0; i<size; i++){
		cout << " " << l[i];
	}
	cout << endl;

}

void aaa(queue<pond*> q){
	stack<pond*> s;
	pond* tmp;
	while (!q.empty()){
		if (!s.empty()){
			while ((inside(s, q.front())) && (!s.empty())){
				q.front()->size += s.top()->size;
				s.pop();
			}
		}
		s.push(q.front());
		q.pop();
	}
	printanswer(s);
}












