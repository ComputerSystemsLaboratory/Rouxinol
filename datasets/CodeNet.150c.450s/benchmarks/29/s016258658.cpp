#include <iostream>
#include <string>
#include <list>

using namespace std;

void print_list(list<int> &V)
{
		for(list<int>::iterator it = V.begin();
			it != V.end();it ++)
		{
			if(it ==  V.begin()){
				cout << *it;
			}
			else{
				cout << " " << *it;
			}
		}
	cout << endl;
}
int main(void)
{	
	ios_base::sync_with_stdio(false);

	list<int> V;
	
	int n;
	cin >> n;

	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		
		int x;
		if(s == "insert"){
			cin >> x;
			//V.(V.begin(), x);
			V.push_front(x);
		}
		else if(s == "delete"){
			cin >> x;
			for(list<int>::iterator it = V.begin();
				it != V.end();it ++)
			{	
				if(*it == x){
					V.erase(it);
					break;
				}
			}
		}
		else if(s == "deleteFirst"){
			V.pop_front();
		}
		else{
			V.pop_back();
		}
	}
	print_list(V);
	
	return 0;
}