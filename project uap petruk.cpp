#include<iostream>
#include<list>
#include<iterator>
#include<windows.h>
using namespace std;

list<int>Kereta;
list<int>::iterator it;
int temp;


void Push(){
	cout<<"Masukan Nomor Antrian: ";
	cin>>temp;
	Kereta.push_back(temp);
	
}

void pop(){
	Kereta.pop_front();
}

void clear(){
	Kereta.clear();
}
void print(){
	cout<<"\tantrian: "<<endl;
	cout<<"==========================\n";
    for(it = Kereta.begin(); it != Kereta.end();it++){
	    Sleep(500);
        cout<<"||antrian nomor >> "<<*it<<" <<||\n";
    }
    cout<<"==========================\n\n";
}

int main(){
	
	int p;
	
	do{
		print();
		cout<<"~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"\tMenu"<<endl;;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"1. Tambah Antrian"<<endl;
		cout<<"2. Panggil Antrian"<<endl;
		cout<<"3. Kosongkan Antrian"<<endl;
		cout<<"4. Exit"<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~\n";
		
		cout<<"Pilih Menu: ";
		cin>>p;
		
		system("cls");
		
		if(p==1){
			Push();
		}else if(p==2){
			pop();
			cout<<"ANTRIAN PALING DEPAN TELAH DIPANGGIL~~\n";
		}else if(p==3){
			clear();
			cout<<"ANTRIAN PADA STASIUN TELAH DIBERSIHKAN!\n";
		}else if(p==4){
			cout<<"~TERIMAKASIH ATAS KUNJUNGANYA~\n";
		}else{
			cout<<"TIDAK TERDETEKSI DALAM SISTEM STASIUN MANAPUN!\n";
		}
	}
	while(p != 4);
	
	return 0;
}
