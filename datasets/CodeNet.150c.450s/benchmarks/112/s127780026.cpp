
#include <iostream>
#include <string>
#include <map>

using namespace std;

typedef pair<char, char> PCC;
typedef map<char, char> MCC;

int main()
{
	MCC m_map;
	int n, m;
	char ch, ch1, ch2;

	while(scanf("%d\n", &n), n)
	{
		m_map.clear();
		for(int i=0; i<n; i++)
		{
			scanf("%c %c\n", &ch1, &ch2);
			m_map[ch1] = ch2;
		}

		scanf("%d\n", &m);
		for(int i=0; i<m; i++)
		{
			scanf("%c\n", &ch);
			putchar(m_map[ch] ? m_map[ch] : ch);
		}
		putchar('\n');
	}
	
	return 0;
}