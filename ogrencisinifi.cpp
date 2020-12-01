#include <iostream>

using namespace std;

class Ogrenci{
	string ogrenciname;
	int vize;
	int final;
	public:
		void setdeger(string n,int v,int f) ;
		int getdeger(void);
		double ort(int v,int f);
		Ogrenci(string n,int v,int f);
		~Ogrenci();
};
Ogrenci::Ogrenci(string n,int v,int f)
{
	ogrenciname=n;
	vize=v;
	final=f;
	cout<<"Constructor olusturuldu \n";
}
/*void Ogrenci::setdeger(string n,int v,int f)
{
	ogrenciname=n;
	vize=v;
	final=f;
}*/
int Ogrenci::getdeger(void)
{
	cout<<"Ogrenci adi = "<<ogrenciname<<"Vize notu "<<vize<<"Final notu "<<final<<endl;
}
double Ogrenci::ort(int v,int f)
{
	return (vize *0.4 )+ (final *0.6);
}
Ogrenci::~Ogrenci()
{
	cout<<"Destructor yikildi \n ";
}

int main()
{
	Ogrenci o1("Dogan",80,24);
	Ogrenci o2("Ahmet",23,100);
	cout<<"Ogrencinin ortalama = "<<o1.ort(80,24);
	cout<<"\n Ogrencinin ortalamasi = "<<o2.ort(23,100);
}


