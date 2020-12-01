#include <iostream>

using namespace std;

class kimlik{
	private:
		string name;
		char ch;
		int kilo;
		double boy;
	public:
		void deger_ata(string n,char c,int k,double b)
		{
			name = n;
			ch = c;
			kilo = k;
			boy = b; 
		}
		void deger_oku(void)
		{
			cout<<"isim= "<<name<<"\n Cinsiyet = "<<ch<<"\n Kilo "<<kilo<<"\n Boy = "<<boy;
		}
	
};

int main()
{
	kimlik k1;
	k1.deger_ata("Dogan Ay",'e',73,1.72);
	k1.deger_oku();
}
