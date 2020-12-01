#include <iostream>

using namespace std;

class Car{
	private:
		int satno;
		string model;
		int fiyat;
	public:
		void set_degeral(string m,int f){
			model =m;
			fiyat =f;
		}
		void get_degeroku(void){
			cout<<"Satis no: "<<satno<<endl<<"Model "<<model<<endl<<"Fiyat  "<<fiyat;
		}
		Car (){
			satno=0;
			satno+=1;
		}
	
};
int main(){
	string models;
	int fiyats;
	Car c1;
	cout<<"Modeli giriniz : \n";
	getline(cin,models);
	cout<<"Fiyatý giriniz = \n";
	cin>>fiyats;
	c1.set_degeral(models,fiyats);
	c1.get_degeroku();
}
