/* Program Billing Wanet Britani */
#include <iostream>
using namespace std;

int main()
{
    char nomor[2];
    int JM,MM,DM,JS,MS,DS;
    int jam,menit,detik;
	int jumlah,tarif,durasi;
	int totaljam, totalmenit, totaldetik, totalbayar;
    
    cout<<"----------Yellow Net----------"<<endl;
    cout<<"=============================="<<endl;
    cout<<endl;
    cout<<"Nomor Komputer			: ";
    cin>>nomor;
    
	cout<<"input waktu mulai"<<endl;
	cout<<"jam			:"; //menghasilkan jam
	cin>>JM;
	cout<<"menit		:"; //menghasilkan menit
	cin>>MM;
	cout<<"detik		:"; //menghasilkan detik
	cin>>DM;
 	
 	cout<<"input waktu selesai"<<endl;
 	cout<<"jam		:"; //menghasilkan jam 
 	cin>>JS;
	cout<<"menit		:"; //menghasilkan menit
	cin>>MS;
	cout<<"detik		:"; //menghasilkan detik
	cin>>DS;
 	
 	cout<<"Lama pemakaian : ";
	jam = (JS-JM);
	menit = (MS-MM);
	detik = (DS-DM);
	cout<<jam;cout<<" jam, ";
	cout<<menit;cout<<" menit, ";
	cout<<detik;cout<<" detik";
	jumlah 		= ((jam*3600) + (menit*60)+ (detik));
	
	totaljam=jam*5000;
	totalmenit=menit*60;
	totaldetik=detik;
	cout<<" Tarif Rp. 5000,/jam";
	cout<<" Total Yang Harus Dibayar : Rp. ";
	totalbayar=totaljam+totalmenit+totaldetik;
	cout<<totalbayar<<endl<<endl;
	cout<<"=====Terima Kasih===="<<endl;
	cout<<"Britani A_20051397081"<<endl;
   return 0;
}

    
