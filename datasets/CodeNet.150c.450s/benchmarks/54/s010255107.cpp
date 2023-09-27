#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void lower(string &s)
{
	size_t size = s.size();
	for (int i = 0; i < size; i++)
		if (s[i] >= 0x41 && s[i] <= 0x5a)
			s[i] += 0x20;
}

void cup(string w, char *q, int *cnt)
{
	if (w.size() == strlen(q) && strncmp(w.c_str(), q, w.size()) == 0)
		(*cnt)++;
}

int main()
{
	string w, t;
	getline(cin, w);
	char *T = " \t\n";
	
	while (1) 
	{
		string buf;
		getline(cin, buf);
		t += (buf + "\n");
		if (buf == "END_OF_TEXT")
			break;
	}
	
	lower(w);
	lower(t);
	
	int c = 0;
	char *q = strtok((char *)t.c_str(), T);
	if (q == NULL)
		return -1;
	cup(w, q, &c);
	
	while ((q = strtok(NULL, T)) != NULL)
	{
		cup(w, q, &c);
	}
	
	cout << c << endl;
	
	return 0;
}