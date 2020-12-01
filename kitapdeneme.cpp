#include<iostream>
using namespace std ;

class book{
	//sýnýfa özel verilerimiz
    private:
	string title ;
	string auther;
	double price ;
	int pagesnumber;
	public:
		void printinfo_degerata(string t,string a,double p,int pa) 
		{
			title =t;
			auther =a;
			price = p;
			pagesnumber =pa;
		}
	    void printinfo_degeroku(void)  
	{
		cout<<"Title of the book "<<title<<endl;
		cout<<"Auther of the book "<<auther<<endl;
		cout<<"Price of the book "<<price<<" TRY"<<endl;
		cout<<"Pages number of the book "<<pagesnumber<<endl;
		cout<<"\n\n";

	}	
};

int main()
{
	book programming ;
	book math ;
	
	programming.printinfo_degerata("Learn C++ Simply","Ayse ELDEM",750,79.99);
	math.printinfo_degerata("General Math","Deniz Akpinar",315,49.99);
	programming.printinfo_degeroku();
	programming.printinfo_degeroku();
	return 0;
}
