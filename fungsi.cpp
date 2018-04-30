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
