#include<iostream>
#include<list>
#include<iterator>
using namespace std;

list<int>Kereta;
int temp;

void Push(){
	cout<<"masukan nomor antrian: ";
	cin>>temp;
	Kereta.push_back(temp);
	
}

void pop(){
	Kereta.pop_front();
}

int main(){
	
	int p;
	
	do{
		print();
		cout<<"\nMenu\n";
		cout<<"1. Tambah Antrian\n";
		cout<<"2. Panggil Antrian\n";
		cout<<"3. Kosongkan Antrian\n";
		cout<<"4. Exit\n";
		
		cout<<"pilih menu: ";
		cin>>p;
		system("cls");
		
		if(p == 1){
			Push();
		}else if(p == 2){
			//prospop
		}else if(p == 3){
			//prosclear
		}else if(p == 4){
			cout<<"~~~TERIMAKASIH ATAS KUNJUNGANYA~~~\n";
		}else{
			cout<<"TIDAK TERDETEKSI PADA SISTEM STASIUN MANAPUN!!\n"
		}
		
		
	}
	while(p != 4);
	
}
