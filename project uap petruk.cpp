#include<iostream>
#include<list>
#include<iterator>
using namespace std;

list<int>Kereta;
list<int>::iterator it;
int temp;


void push(){
	cout<<"Masukan Nomor Antrian Anda : ";
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
	cout<<"=======================\n";
    for(it = Kereta.begin(); it != Kereta.end();it++){
        cout<<"\t>>"<<*it<<"<<\n";
    }
    cout<<"=======================\n";
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
		
		cout<<"Pilih Menu: ";
		cin>>p;
		
		system("cls");
		
		if(p==1){
			push();
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
