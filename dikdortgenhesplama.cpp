#include <iostream>

using namespace std;


class hesapla {
	int uzkenar;
	int kisakenar;
	public:
		hesapla (int u, int k)
		{
			uzkenar = u;
			kisakenar = k;
		}
		int uzdeger()
		{
			return uzkenar;
		}
		int kisadeger()
		{
			return kisakenar;
		}
};
int dikdortgen (hesapla h1)
{
	return h1.uzdeger()*h1.kisadeger();
}

int main ()
{
	hesapla d1(5,4);
	cout<<"Dikdorgenin kenar uzunluklari = "<<d1.uzdeger()<<" "<<d1.kisadeger()<<endl;
	cout<<"Dikdortgenin alan uzunlugu = "<<dikdortgen(d1);
}
