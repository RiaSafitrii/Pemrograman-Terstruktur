#include<iostream>
using namespace std;

class Mahasiswa{
	public:
		string nama, npm;
		
		void Perkenalan(){
			cout << "Nama : " << nama << endl;
			cout << "Npm : " << npm;
		}
};

int main(){
	Mahasiswa Mhs;
	
	cin >> Mhs.nama >> Mhs.npm;
	
	Mhs.Perkenalan();
}
