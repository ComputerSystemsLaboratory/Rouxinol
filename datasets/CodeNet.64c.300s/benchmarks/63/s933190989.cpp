#include<iostream>

bool listen_numbers(int &,int &);

class Nums
{
private:
	int a,b;//a>=b
	int gcd;
	int lcm;
	
	void calc_gcd();
	void calc_lcm();
public:
	Nums(int,int);
	void echo_gcd();
	void echo_lcm();
};

Nums::Nums(int x,int y)
{
	if(x>=y)
	{
		this->a=x;
		this->b=y;
	}
	else
	{
		this->a=y;
		this->b=x;
	}
	
	this->gcd=0;
	this->lcm=0;
	
}

void Nums::calc_gcd()
{
	int rest1=this->a;
	int rest2=this->b;
	
	int tmp;
	while(rest1!=0 && rest2!=0)
	{
		tmp=rest1%rest2;
		rest1=rest2;
		rest2=tmp;
	}
	this->gcd=rest1;
}

void Nums::calc_lcm()
{
	if(this->gcd==0)
	{
		this->calc_gcd();
	}
	
	this->lcm=(int)((double)this->a*this->b/this->gcd);
}

void Nums::echo_gcd()
{
	if(this->gcd==0)
	{
		this->calc_gcd();
	}
	std::cout<<this->gcd;
}

void Nums::echo_lcm()
{
	if(this->lcm==0)
	{
		this->calc_lcm();
	}
	std::cout<<this->lcm;
}

int main()
{
	int a,b;
	
	for(;listen_numbers(a,b);)
	{
		Nums num=Nums(a,b);
		
		num.echo_gcd();
		std::cout<<" ";
		
		num.echo_lcm();
		std::cout<<std::endl;
	}
	
	return 0;
}

bool listen_numbers(int &a,int &b)
{
	using namespace std;
	
	cin>>a>>b;
	
	if(cin.eof())
	{
		return false;
	}
	else
	{
		return true;
	}
}