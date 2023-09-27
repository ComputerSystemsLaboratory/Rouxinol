#include<iostream>
#include<list>
#include<string>

using namespace std;

void Output(list<int> ilist)
{
	list<int>::iterator it = ilist.begin();
	cout << *it;
	it++;
	while(it != ilist.end()){
		cout << " " << *it;
		it++;
	}
	cout << endl;
}

list<int> DealDelete(int &key,list<int> &ilist)
{
	list<int>::iterator it = ilist.begin();
	
	while(it != ilist.end()){
		if(*it == key){
			ilist.erase(it);
			return ilist;
		}
		it++;
	}
	return ilist;
}

void Deal(string &command,list<int> &ilist)//??\???????????£??????????????¨????±???????
{
	if(command == "insert"){
		int key;
		cin >> key;
		ilist.push_front(key);
	}else if(command == "delete"){
		int key;
		cin >> key;
		DealDelete(key,ilist);
	}else if(command == "deleteFirst"){
		ilist.pop_front();
	}else{
		ilist.pop_back();
	}
	return;
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n;
	list<int> ilist;
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		string command;
		cin >> command;
		Deal(command,ilist);//??\???????????????
	}
	Output(ilist);//??¨?????????
}