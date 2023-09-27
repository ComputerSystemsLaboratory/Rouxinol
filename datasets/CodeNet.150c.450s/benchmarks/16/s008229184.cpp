#include <iostream>
#include <stack>
using namespace std;

struct Flood{
	int area;
	int left_position;
};

int main ()
{
    string str = "";
    int A = 0;  // 總面積 
    stack <Flood> L;  // 存洪水的面積與數量 
    stack <int> Left; // 儲存 '\' 
    
    // 輸入 
    cin >> str;
    
    // 處理 
    for (int i = 0;i < str.size();i++)
    {
    	if (str[i] == '\\')
    	{
    		Left.push(i);
		}
		else if (str[i] == '/' && !Left.empty())
		{
			int l = Left.top();
			Left.pop();
			int a = i - l;
			
			A += a;
			
			while(!L.empty() && L.top().left_position > l)
			{
				a += L.top().area;
				L.pop();
			}
			
			Flood F {a, l};
			L.push(F);
		}
	}
	
	// 輸出 
	cout << A << endl;
	int k = L.size();
	cout << k;
	int arr[k+1];
	while(!L.empty())
	{
		Flood f = L.top();
		L.pop();
		arr[L.size()] = f.area;
	}
	for (int i = 0;i < k;i++)
	{
		cout << " " << arr[i];
	}
	cout << endl;
    return 0;
}
