#include<cstdio>

class dice{
private:
	int a,b,c,d,e,f;
public:
	void setnumber(void);
	void E(void);
	void W(void);
	void S(void);
	void N(void);
	void front(int x);
	void side(int y);
	int puta(void);
};

void dice::setnumber(void){
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
}


void dice::E(void){
int a1=a,c1=c,d1=d,f1=f;
a=d1;
c=a1;
d=f1;
f=c1;
}

void dice::W(void){
int a1=a,c1=c,d1=d,f1=f;
a=c1;
c=f1;
d=a1;
f=d1;
}

void dice::S(void){
int a1=a,b1=b,e1=e,f1=f;
a=e1;
b=a1;
e=f1;
f=b1;
}

void dice::N(void){
int a1=a,b1=b,e1=e,f1=f;
a=b1;
b=f1;
e=a1;
f=e1;
}

void dice::front(int x){
int i=0,a1,b1,c1,d1,e1,f1;
while (b!=x){
	a1=a;
	b1=b;
	c1=c;
	d1=d;
	e1=e;
	f1=f;
	a=b1;
	b=c1;
	c=a1;
	d=f1;
	e=d1;
	f=e1;
	i++;
	if(i==4)break;
}

if (b!=x){
	a=e1;
	b=f1;
	c=d1;
	d=c1;
	e=a1;
	f=b1;
}
//printf("%d %d %d %d %d %d\n",a,b,c,d,e,f);
while (b!=x){
	a1=a;
	b1=b;
	c1=c;
	d1=d;
	e1=e;
	f1=f;
	a=b1;
	b=c1;
	c=a1;
	d=f1;
	e=d1;
	f=e1;
}
//printf("front\n");
}

void dice::side(int y){
int a1,c1,d1,f1;
while(c!=y){
	a1=a;
	c1=c;
	d1=d;
	f1=f;
	a=d1;
	c=a1;
	d=f1;
	f=c1;
}
}

int dice::puta(void){
return a;
}

int main(void){
dice koro;
int q,b[24],c[24],a[24];
char ch[101];
int i=0;
koro.setnumber();
scanf("%d",&q);
for(i=0;i<q;i++){
	scanf("%d%d",&b[i],&c[i]);
	koro.front(b[i]);
	koro.side(c[i]);
	a[i]=koro.puta();
}

for(i=0;i<q;i++){
	printf("%d\n",a[i]);
}
return 0;
}

		