#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

int count;

void pre(vector<vector<int> > &tree,int now)
{
	cout << " " << tree[now][0];
	for(int i=1;i<3;i++)
	{
		if(tree[now][i] != numeric_limits<int>::min())
		{
			pre(tree,tree[now][i]);
		}
	}
}

void ino(vector<vector<int> > &tree,int now)
{
	int size = tree[now].size();
	if(tree[now][1] == numeric_limits<int>::min() && tree[now][2] == numeric_limits<int>::min())
	{
		cout << " " << tree[now][0];
	}
	else
	{
		if(tree[now][1]!=numeric_limits<int>::min())
		{
			ino(tree,tree[now][1]);
		}
		cout << " " << tree[now][0];
		if(tree[now][2]!=numeric_limits<int>::min())
		{
			ino(tree,tree[now][2]);
		}
	}
}

void print(vector<vector<int> > &tree)
{
	ino(tree,0);
	cout << endl;
	pre(tree,0);
	cout << endl;
}

void insert(vector<vector<int> > &tree,int key,int now)
{
	if(count == 0)					//root none
	{
		tree[0][0] = key;
	}
	else
	{
		if(tree[now][0] > key)		//left
		{
			if(tree[now][1] == numeric_limits<int>::min())	//child none
			{
				tree[now][1] = count;
				tree[count][0] = key;
			}
			else											//child exist
			{
				insert(tree,key,tree[now][1]);
			}
		}
		else						//right
		{
			if(tree[now][2] == numeric_limits<int>::min())	//child none
			{
				tree[now][2] = count;
				tree[count][0] = key;
			}
			else
			{
				insert(tree,key,tree[now][2]);
			}
		}
	}
}

int main(void)
{
	count = 0;
    vector<vector<int> > tree;
	int n,num;
	string command;
	cin >> n;
    tree = vector<vector<int> >(n,vector<int>(3,numeric_limits<int>::min()));

	for(int i=0;i<n;i++)
	{
		cin >> command;
		if(command == "insert")
		{
			cin >> num;		//input node num
			insert(tree,num,0);
			count++;
		}
		else if(command == "print")
		{
			print(tree);
		}
	}

	return 0;
}