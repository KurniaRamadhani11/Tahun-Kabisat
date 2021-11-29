#include <iostream>
using namespace std;

int main(){
	
	//Kurnia Ramadhani 2117051073//
	
	
	int x;
	
	cout<<"Masukkan Tahun\t:";
	cin>>x;
	
	if (x%400==0){
		cout << x << " adalah tahun kabisat"<<endl;
	} else if (x%100==0){
		cout << x << " Bukan tahun kabisat"<<endl;
	} else if (x%4==0){
		cout << x << " adalah tahun kabisat"<<endl;
	} else {
        cout << x << " Bukan tahun kabisat"<<endl;
	}
	
	
	
	return 0;
}
