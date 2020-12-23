/*Program Menghitung Segitiga Siku-siku*/
/*Britani Adiningati */
/*200051397081*/

#include <iostream>
#include <conio.h>
#include <string.h>
#include <math.h>
using namespace std;
int main()
{
	char nama[15],ket[30];
	int a,b,c,d,t,l,k,pilih;
	float p1=0.5,luas;
	
	cout<<"Program menghitung segitiga siku-siku"<<endl;
	cout<<"menu:"<<endl;
	cout<<"1. Hitung sisi miring"<<endl;
	cout<<"2. Hitung luas"<<endl;
	cout<<"3. Hitung keliling"<<endl;
	cout<<"4. Keluar program"<<endl;
	cout<<"Pilih Menu [1/2/3/4]:";
	cin>>pilih;
	cout<<endl;
	
	cout << "Masukkan Panjang Alas:";
	cin >>a;
	cout << "Masukkan Panjang tinggi:";
	cin >>b;
	cout<<endl;

	switch (pilih)
{
	case 1 : 
	double hasil;
	cout <<	"Sisi Miring"<<endl;
	c=sqrt((a*a)+(t+t));
	cout << "Hasil :" <<c;
	break;

	case 2 : 
	cout << "Luas Segitiga"<<endl;
	l= a*b/2;
	cout << "Hasil :" <<l;
	break;

	case 3 : 
	cout << "Keliling Segitiga"<<endl;
	k= a+b+c;
	cout << "Hasil : " <<k;
	break;

	case 4 :
	cout << "Press Any Key To Close"<<endl;	
	exit (0);
}

	return 0;
}
