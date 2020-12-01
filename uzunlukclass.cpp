#include <iostream>

using namespace std;



class Ornek{
	protected:
		int sayi1;
		double sayi2;
	public:
		void set_uzunluk(int s1,double s2);
		double get_uzunluk(void);
		double topla(int s1,double s2);
		Ornek(int s1,double s2);
		~Ornek();
};
Ornek::Ornek(int s1,double s2)
{
	sayi1=s1;
	sayi2=s2;
}
Ornek::~Ornek()
{
	cout<<"\nConstructor to destructor";	
}
void Ornek::set_uzunluk(int s1,double s2)
{
	sayi1=s1;
	sayi2=s2;
}
double Ornek::get_uzunluk(void)
{
	cout<<"Sayi 1 = "<<sayi1<<" Sayi 2 = "<<sayi2<<endl;
}
double Ornek::topla(int s1,double s2)
{
	return sayi1+sayi2;
}

int main()
{
	Ornek u1(11,6.5),u2(12,5.3);
	cout<<"\n u 1 ="<<u1.get_uzunluk()<<endl;
	cout<<"\n u 2 ="<<u2.get_uzunluk()<<endl;
	cout<<" \n toplami= "<<u1.topla(11,6.5);
}




