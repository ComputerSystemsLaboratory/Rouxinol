#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, m[200001];
	
	cin >> n;
	
	for (int i = 0; i < n; i++){
		cin >> m[i];
	}
	int m_max = -1000000000, m_min = m[0];
	
	for (int i = 1; i < n; i++){
		m_max = max(m_max, m[i] - m_min);
		m_min = min(m_min, m[i]);
	}
	
	cout << m_max << endl;
	
	return (0);
	
}