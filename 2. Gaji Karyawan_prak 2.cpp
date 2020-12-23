/*Program Gaji Karyawan*/
/*Britani Adiningati */
/*200051397081*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
	char nama[15],gol;
	int jamkerja,jamlembur;
	int gpokok,glembur,gkerja,totalgaji;
	
	cout<<"==========Laporan Gaji Karyawan======="<<endl;
	cout<<"==========PT. Cantik Jelita=========="<<endl;
	
	cout<<"Masukkan Nama			:";
	cin>>nama;
	cout<<"Masukkan Golongan [A/B/C/D]	:";
	cin>>gol;
	cout<<"Masukkan Jam Kerja		:";
	cin>>jamkerja;
	
	switch (gol)
{
	case 'A'	:
			{
				gpokok	=5000;
				break;
			}
	case 'B':
			{
				gpokok	=7000;
				break;
			}
	case 'C':
			{
				gpokok	=8000;
				break;
			}
	case 'D':
			{
				gpokok	=10000;
				break;
			}	
}
	if(jamkerja>48){
		jamlembur=jamkerja-48;
	}else{
		jamlembur=0;
	}
	gkerja=jamkerja*gpokok;
	glembur=jamlembur*4000;
	totalgaji=gkerja+glembur;
	cout<<endl;
	
	cout<<"Nama Karyawan	:	"<<nama<<endl;
	cout<<"Kode Golongan	:	"<<gol<<endl;
	cout<<"Gaji Kerja		:	"<<gpokok<<endl;
	cout<<"Gaji Lembur		:	"<<glembur<<endl;
	cout<<"Total Gaji 		:Rp	"<<totalgaji<<endl;
	
	
	cout<<"==========GOOD JOB==========";
	getch();
	return 0;
}
