 #include <iostream>
 #include <vector>
 
 using namespace std;

struct E
{
	int w;
	int l;
	int r;
};

vector<E> D;

int getw(char * str)
{
	int w = 0;
	while (1)
	{
		w *= 5;
		switch(*str++)
		{
		case 'A': w += 1; break;
		case 'C': w += 2; break;
		case 'G': w += 3; break;
		case 'T': w += 4; break;
		default: return w/5;
		}
	}
}

int find(int w)
{
	int c = 0;
	while (1)
	{
		auto e = D[c];
		if (e.w == w) return -1;
		auto p = c;
		if (e.w < w) c = e.r;
		else c = e.l;
		if (!c) return p;
	}
}

 int main()
{
	E e = {0};
	D.push_back(e);
	D.push_back(e);
	int n;
	cin >> n;
	char inst[16];
	char str[16];
	while(n--)
	{
		cin >> inst >> str;
		int w = getw(str);
		int k = find(w);
		if (inst[0] == 'i')
		{
			if (k>=0)
			{
				E e = { w, 0, 0};
				auto & p = D[k];
				int kk = D.size();
				if (p.w < w) p.r = kk;
				else p.l = kk;
				D.push_back(e);
			}
		}
		else
		{
			cout << (k >= 0? "no" : "yes") << endl;
		}
	}
}