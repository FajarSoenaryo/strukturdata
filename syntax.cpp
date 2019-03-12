#include <iostream>
using namespace std;

int main()
{
	string x[5]={};
	string nama, jk, jurusan, nim;
	int pil, nilai1=0, nilai2=0, nilai3=0, rata2=0;
	
	do
	{
		system ("cls");
		bool cek_array=false;
		
		cout<<"\t M E N U \n";
		cout<<"___________________________________\n";
		cout<<"1. Input Data Mahasiswa \n";
		cout<<"2. Tampilakan Rata-rata Nilai \n";
		cout<<"3. Cari NIM\n";
		cout<<"4. Exit\n\n";
		cout<<"___________________________________\n";
		cout<<"Pilih Menu : ";
		cin>>pil;
		
		switch (pil)
		{
			case 1:
				system ("cls");
				for (int i=0; i<=1; i++){
					cout<<"Masukan NIM : ";
					cin>>nim;
					cout<<"Masukan Nama : ";
					cin>>nama;
					cout<<"Jenis Kelamin : ";
					cin>>jk;
					cout<<"Jurusan : ";
					cin>>jurusan;
					cout<<"Nilai Harian 1 : ";
					cin>>nilai1[x];
					cout<<"Nilai harian 2 : ";
					cin>>nilai2[x];
					cout<<"Nilai harian 3 : ";
					cin>>nilai3[x];	
				}
				system ("pause");
				break;
				
			case 2:
				system ("cls");
				for (int j=0; j<5; j++)
				{
					cout<<j+1<<". "<<x[j]<<"\n";
				}
				system ("pause");
				break;
				
			case 3:
				system ("cls");
				cout<<"Ketik NIM yang dicari : ";
				cin>>nim;
				for (int t=0;t<10;t++)
				{
					if(x[t]==nim)
					{
						cek_array=true;
						cout<<"NIM Tersedia : ";
						cout<<x[t]<<endl;
						system ("pause");
					}
				}
				
				if (!cek_array)
				{
					cout<<"NIM tidak tersedia\n";
					system ("pause");
				}
				break;
		
		}
			
	}
	while (pil!=4);
	return 0;
	
}