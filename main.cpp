#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <conio.h> 
using namespace std;

#include "fungsi.h"

int main(){
	data_ptr = NULL;

	do{
		system("CLS");
		tampilkan();
		cout << endl;
		cout << "\t-=[ MENU ]=-" << endl;
		cout << "\t1. Menambah Node Depan" << endl;
		cout << "\t2. Menambah Node Belakang" << endl;
		cout << "\t3. Hapus Node Depan"<< endl;
		cout << "\t4. Hapus Node Belakang" << endl;
		cout << "\t5. Menyisipkan Node diposisi tertentu" << endl;
		cout << "\t6. Hapus Node Tertentu" << endl;
		cout << "\t0. Keluar program." << endl;
		cout << "\n\tMasukkan Pilihan : ";
		cin >> option; 

		switch (option){
			case 1 : menambah_node_depan(); 
			break;
			
			case 2 : menambah_node_belakang();
			break;
			
			case 3 : hapus_node_depan();
			break;
			
			case 4 : hapus_node_belakang();
			break;
			
			case 5 : menyisipkan_node();
			break;
			
			case 6 : hapus_node_tertentu();
			break;
		}
	}  
	while (option != 0); 
}
