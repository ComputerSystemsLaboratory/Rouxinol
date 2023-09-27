#include <bits/stdc++.h>

using namespace std;

class D3
{
public:
	long double X , Y , Z , EPS;

	D3(long double x_ = 0.0L , long double y_ = 0.0L , long double z_ = 0.0L)
	{
		X = x_;
		Y = y_;
		Z = z_;
		EPS = 1e-9L;
	}

	bool operator== (D3 Partner)
	{
		return abs(X - Partner.X) < EPS&&abs(Y - Partner.Y) < EPS&&abs(Z - Partner.Z) < EPS;
	}

	D3 operator*(long double ld)
	{
		return D3(X*ld , Y*ld , Z*ld);
	}

	D3 operator/(long double ld)
	{
		return  *this*( ld*-1.L );
	}
};

class Point :private D3
{

public:
	Point(long double x_ = 0.0L , long double y_ = 0.0L , long double z_ = 0.0L)
	{
		X = x_;
		Y = y_;
		Z = z_;
	}

	//x??§?¨??????????
	long double getX()
	{
		return X;
	}

	//y??§?¨??????????
	long double getY()
	{
		return Y;
	}

	//z??§?¨??????????
	long double getZ()
	{
		return Z;
	}

	bool operator== (Point Partner)
	{
		return *this == Partner;
	}
};

class Vec
{
private:
	Point SP;//Starting Point
	D3 Direction;

	//??????????????¨?§???????????????????????????????
	Vec(D3 Direction_ , Point SP_)
	{
		Direction = Direction_;
		SP = SP_;
	}
public:

	//?§??????¨???????????????????????????????????????????????????
	Vec(long double x_ = 0.0L , long double y_ = 0.0L , long double z_ = 0.0L , Point SP_ = Point())
	{
		*this = Vec(D3(x_ , y_ , z_) , SP_);
	}

	Vec operator+(Vec Partner)
	{
		return Vec(Direction.X + Partner.Direction.X , Direction.Y + Partner.Direction.Y , Direction.Z + Partner.Direction.Z , SP);
	}

	Vec operator*(Vec Partner)
	{
		return Vec(Direction.X * Partner.Direction.X , Direction.Y * Partner.Direction.Y , Direction.Z * Partner.Direction.Z , SP);
	}

	Vec operator*(long double ld)
	{
		return Vec(Direction*ld , SP);
	}

	Vec operator-(Vec Partner)
	{
		return *this + ( Partner*( -1.L ) );
	}

	Vec operator/(Vec Partner)
	{
		return Vec(Direction.X / Partner.Direction.X , Direction.Y / Partner.Direction.Y , Direction.Z / Partner.Direction.Z , SP);
	}

	Vec operator/(long double ld)
	{
		return *this*( 1.L / ld );
	}

	bool operator== (Vec Partner)
	{
		return Direction == Partner.Direction&&SP == Partner.SP;
	}


	//??????
	Vec Cross_product(Vec partner)
	{
		return Vec(Direction.Y*partner.Direction.Z - Direction.Z*partner.Direction.Y , Direction.Z*partner.Direction.X - Direction.X*partner.Direction.Z , Direction.X*partner.Direction.Y - Direction.Y*partner.Direction.X);
	}

	//??????
	double Inner_product(Vec partner)
	{
		return Direction.X*partner.Direction.X + Direction.Y*partner.Direction.Y + Direction.Z*partner.Direction.Z;
	}


	//???????????????????????????????????????
	Vec(Point A , Point B)
	{
		*this = Vec(A.getX() - B.getX() , A.getY() - B.getY() , A.getZ() - B.getZ() , B);
	}

	//?§?????????????
	Point getSP()
	{
		return SP;
	}

	//???????????????
	Point getGP()
	{
		return Point(SP.getX() + Direction.X , SP.getZ() + Direction.Z , SP.getZ() + Direction.Z);
	}

	//???????????????
	D3 getDirection()
	{
		return Direction;
	}

	//???????????????
	long double length()
	{
		return sqrtl(Direction.X*Direction.X + Direction.Y*Direction.Y + Direction.Z*Direction.Z);
	}

	//??????????????????(??????1)?????????
	Vec Unit_vec()
	{
		return Vec(*this) / ( *this ).length();
	}

	//????????????????????????
	Vec Inverse_vec()
	{
		return ( *this )*-1.L;
	}

	//?????´????????????
	bool Vertical(Vec Partner)
	{
		return ( *this ).Inner_product(Partner) == 0;
	}

	//??????????????????
	bool Parallel(Vec Partner)
	{
		return ( *this ).Unit_vec().getDirection() == Partner.Unit_vec().getDirection() || ( *this ).Unit_vec().Inverse_vec().getDirection() == Partner.Unit_vec().getDirection();
	}

};

int main()
{
	int N;
	cin>>N;
	for(size_t i = 0; i < N; i++)
	{
		long double D[8];
		for(size_t j = 0; j < 8; j++)
		{
			cin>>D[j];
		}
		Vec AB(Point(D[0],D[1]),Point(D[2],D[3])),CD(Point(D[4],D[5]),Point(D[6],D[7]));
		if(AB.Parallel(CD))
		{
			cout<<"YES"<<endl;
		} else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}