//Pembelian Tiket Wahana
#include <iostream>
#include <cstdlib>
using namespace std;

int rollercoaster=30000, kora2=13000, bianglala[2]={50000,60000}, wahana, total, tb, usia, hari, a=0, b=0;
float jumlah, harga, potongan=0.10;
char jawab;
long pembayaran=0, historypembayaran[30];

void menuutama()
{
	system("CLS");
	cout<<"Selamat Datang di Dafun"<<endl;
	cout<<"1. Rollercoaster"<<endl;
	cout<<"2. Kora-Kora"<<endl;
	cout<<"3. Bianglala"<<endl;
	cout<<"Silahkan pilih wahana yang ingin anda naiki [1/2/3] : ";
	cin>>wahana;
	cout<<endl;
}

void tambahjumlah()
{
	historypembayaran[b]=pembayaran;
}

void menuhistorypembayaran ()
{
	system("CLS");
	cout<<"Harga total tiket anda : Rp."<<pembayaran;
}

void menutolak ()
{
	system ("CLS");
	cout<<"Maaf anda tidak bisa menaiki wahana ini";
}

int main ()
{
	do
	{
		menuutama();
		
		if (wahana==1)
	{
		cout<<"Anda akan menaiki wahana Rollercoaster"<<endl;
		cout<<endl;
		cout<<"Masukkan tinggi Badan : "<<endl;
		cin>>tb;
		cout<<endl;
		
		if (tb>=150)
		{
			menuhistorypembayaran ();
		}
		if (tb<150)
		{
			menutolak ();
		}
	}
	
	if (wahana==2)
	{
		cout<<"Anda akan menaiki wahana Kora-Kora"<<endl;
		cout<<endl;
		cout<<"Masukkan usia : ";
		cin>>usia;
		
		if (usia >= 12)
		{
			menuhistorypembayaran ();
		}
		if (usia < 12)
		{
			cout<<"Maaf anda tidak bisa menaiki wahana ini";
		}
	}
	
	if (wahana==3)
	{
			cout<<"Anda akan menaiki wahana bianglala"<<endl;
			cout<<endl;
			cout<<"Weekdays = 50000 | Weekend = 60000"<<endl;
			cout<<"Masukkan hari : Weekdays (1/2/3/4/5) | Weekend (6/7) | Booking (8)"<<endl;
			cin>>hari;
			cout<<endl;
			
			switch (hari)
			{
			case (1) :
			{
				cout<<"Selamat menikmati wahana anda !"<<endl;
				cout<<"Harga : "<<bianglala[0];
			}
			break;
			
			case (2) :
			{
				cout<<"Selamat menikmati wahana anda !"<<endl;
				cout<<"Harga : "<<bianglala[0];
			}
			break;
			
			case (3) :
			{
				cout<<"Selamat menikmati wahana anda !"<<endl;
				cout<<"Harga : "<<bianglala[0];
			}
			break;
			
			case (4) :
			{
				cout<<"Selamat menikmati wahana anda !"<<endl;
				cout<<"Harga : "<<bianglala[0];
			}
			break;
			
			case (5) :
			{
				cout<<"Selamat menikmati wahana anda !"<<endl;
				cout<<"Harga : "<<bianglala[0];
			}
			break;
			
			case (6) :
			{
				cout<<"Selamat menikmati wahana anda !"<<endl;
				cout<<"Harga : "<<bianglala[1];
			}
			break;
			
			case (7) :
			{
				cout<<"Selamat menikmati wahana anda !"<<endl;
				cout<<"Harga : "<<bianglala[1];
			}
			break;
			
			case (8) : 
			{
	    		for (a=1;a<=2;a=a+1)
	    		{
	        		cout<<"Masukkan harga wahana : "<<endl;
	        		cin>>harga;
	        		jumlah=jumlah+harga;
	    		}
	    
	    		total=jumlah-(jumlah*potongan);
	    		cout<<"Total harga tiket yang anda booking : "<<endl;
	    		cout<<total<<endl;
	    		cout<<"Selamat menikmati wahana anda !"<<endl;
			}
			break;
		}
	}
	cout<<endl<<"Kembali ke menu pemilihan wahana ? [Y/T]";
	cin>>jawab;
	a=a+1;
	}
	while (jawab=='Y'|jawab=='y');
	cout<<"Terimakasih telah menggunakan layanan pemesanan wahana kami";
	}

