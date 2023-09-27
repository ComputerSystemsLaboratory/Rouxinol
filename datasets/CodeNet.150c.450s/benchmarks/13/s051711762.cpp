#include <iostream>
#include <string>

using std::string;

bool ring_found(string& s, string& p, size_t s_idx)
{
	bool found = true;
	size_t s_length = s.length();
	size_t p_length = p.length();

	for(size_t p_idx = 0; p_idx < p_length; p_idx++)
	{
		if( s[s_idx] != p[p_idx] )
		{
			found = false;
			break;
		}
		s_idx = (s_idx + 1) % s_length;
	}

	return found;
}

int main()
{
	string s,p;

	std::cin >> s >> p;

	size_t s_length = s.length();

	bool found = false;
	for(size_t i = 0; i < s_length; i++)
	{
		if( ring_found(s, p, i) == true )
		{
			found = true;
			break;
		}
	}

	if( found )
	{
		std::cout << "Yes" << std::endl;
	}
	else
	{
		std::cout << "No" << std::endl;
	}

    return 0;
}