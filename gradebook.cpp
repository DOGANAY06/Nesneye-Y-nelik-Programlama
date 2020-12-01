#include <iostream>

using namespace std;

class GradeBook{
	private:
		string name;
	public:
	    void set_coursename (string n);
		string get_coursename (void) ;
		GradeBook(string n);
		~GradeBook();
};

GradeBook::GradeBook(string n)
{
	cout <<"Yapýcý oluþturuldu \n";
	name =n;
}
void GradeBook::set_coursename(string n)
{
	name =n ;
}
string GradeBook::get_coursename()
{
	cout<<"Girmek istediginiz ders = "<<name<<endl;
}
GradeBook::~GradeBook()
{
	cout<<"\n Yikici cagrildi"<<endl;
}

int main()
{
	string n;
	cout<<"Girmek istediginiz dersi yaziniz "<<endl;
	getline(cin,n); //string degeri alýyoruz
	GradeBook b1(n);
	b1.get_coursename();
	
}







