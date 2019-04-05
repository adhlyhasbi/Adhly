#include <iostream>
using namespace std;

class bapak{
	public :
		void Nama(string nama){
			cout<<"nama bapak : "<<nama<<endl;
		}
		void sifatBapak(){
			cout<<"sifat : tegas dan periang"<<endl;
		}
};

class ibu{
	public :
		void Nama(string nama){
			cout<<"nama ibu : "<<nama<<endl;
		}
		void sifatIbu(){
			cout<<"sifat : penyayang dan lembut"<<endl;
		}
};

class anak : public bapak, public ibu{
	public :
		void Nama(string nama){
			cout<<"nama anak : "<<nama<<endl;
		}
};

int main(){
	bapak bp;
	ibu ib;
	anak an;
	cout<<"Bapak : "<<endl;
	bp.Nama("jaenal");
	bp.sifatBapak();
	cout<<endl<<"Ibu : "<<endl;
	ib.Nama("sumaedah");
	ib.sifatIbu();
	cout<<endl<<"Anak : "<<endl;
	an.Nama("ucup");
	an.sifatBapak();
	an.sifatIbu();
}
