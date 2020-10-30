/*Britani Adiningati_20051397081*/
/*Tugas Praktek ke-3 nomor 4*/

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	int a,pangkat,jumlah=0;
	
	cout<<"Program menghitung jumlah 6 suku pertama \n";
	cout<<"Berikut 6 suku pertama: \n";
	for(a=1;a<=6;a++)
	{
		pangkat=pow(a,3);
		jumlah=jumlah+pangkat;
	cout<<"\n";	
		cout<<a<<"^"<<3<<"="<<pangkat;
	}
	cout<<"\n";
	cout<<"\n Jika nilai semua suku dijumlahkan, maka menghasilkan="<<jumlah<<endl;
	
	getch();
	return 0;
}
