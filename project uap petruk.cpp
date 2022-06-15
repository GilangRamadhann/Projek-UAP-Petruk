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

int main(){
	
	int p;
	
	do{
		
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
