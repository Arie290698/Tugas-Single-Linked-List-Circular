struct linked_list {
	int urut;
	linked_list *next; 
}; 

linked_list *data_ptr = NULL;
linked_list *posisi;
int option = 0; 

void menambah_node_depan(){
	linked_list *data_baru;
	data_baru = new linked_list;
	cout << "\tmasukkan nilai data : ";
	cin >> data_baru->urut;
	data_baru->next = NULL;
	
	
if(data_ptr == NULL)
{
	data_ptr=data_baru;
	data_ptr->next = NULL;
}
else
{
	data_baru->next = data_ptr;
	data_ptr = data_baru;
}
} 

void menambah_node_belakang()
{
	linked_list *temp, *temp2;
	temp = new linked_list; 
	cout << "\tMasukkan nilai data : ";
	cin >>   temp->urut;
	temp->next = NULL; 

	if (data_ptr == NULL)
	{
	data_ptr = temp;
	posisi = data_ptr;
	}else
	{
	temp2 = data_ptr;
	while (temp2->next != NULL)
		{
		temp2 = temp2->next; 
		}
	temp2->next = temp;
	}
} 



void hapus_node_depan()
{
	linked_list *temp;
	temp = data_ptr;
	data_ptr = data_ptr->next;
	delete temp;
} 

void hapus_node_belakang()
{
 	linked_list *temp1, *temp2;
 	if (data_ptr == NULL)
 	cout << "\tData masih kosong" << endl;
 	else
 {
 	temp1 = data_ptr;
if (temp1->next == NULL)
 {
 	delete temp1;
 	data_ptr = NULL;
 }
 else
 {
 while (temp1->next != NULL)
 {
    	temp2 = temp1;
    	temp1 = temp1->next;
 }
 	delete temp1;
 	temp2->next = NULL;
}
}
}

void menyisipkan_node(){
	linked_list *data_baru, *bantu;
	int posisi_sisip;

	if(data_ptr != NULL){
		cout<<"\tAkan disisipkan menjadi data ke? : ";
		cin>>posisi_sisip;
		data_baru =new linked_list;
		bantu=data_ptr;
     
		for(int i=1;i<posisi_sisip-1;i++) {
			if(bantu->next != NULL)
				bantu=bantu->next;
			else
				break; 
		}
		
		cout << "\tMasukkan nilai data : ";
		cin >> data_baru->urut;
		data_baru->next=bantu->next;
		bantu->next=data_baru;
	}else{
		cout<<"\tSebelum menyisipkan, masukkan data terlebih dahulu!";
		getch();
	} 
}


void hapus_node_tertentu(){
	int jumlah_data,posisi_dihapus,penghapus;
	linked_list *hapus, *bantu;
	
	if(data_ptr != NULL){
		cout<<"\tData keberapa yang akan dihapus? : ";
		cin>>posisi_dihapus;
		
		jumlah_data=1;
		bantu=data_ptr;
		while(bantu->next != NULL){
			bantu=bantu->next;
			jumlah_data++;
		}
		
		if((posisi_dihapus<1)||(posisi_dihapus>jumlah_data)){
			cout<<"\tSebelum menghapus, masukkan data terlebih dahulu!";
		}else{
			bantu=data_ptr;
			penghapus=1;
			
			while(penghapus<(posisi_dihapus-1)){
				bantu=bantu->next;
				penghapus++;
			}
			
			hapus=bantu->next;
			bantu->next=hapus->next;
			delete hapus;
		}
	}else 
		cout<<"\tSebelum menghapus, masukkan data terlebih dahulu!";
		getch();
}

int init(int nilai){
	linked_list *data_baru;
	data_baru = new linked_list;
	data_baru->urut=nilai;
	data_baru->next = NULL;

	if(data_ptr == NULL){
		data_ptr=data_baru;
		data_ptr->next = NULL;
	}else{
		data_baru->next = data_ptr;
		data_ptr = data_baru;
	}
}
