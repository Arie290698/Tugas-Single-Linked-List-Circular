struct linked_list {
	int urut;
	linked_list *next; 
}; 

linked_list *data_ptr = NULL;
linked_list *posisi;
int option = 0; 
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




	
	
