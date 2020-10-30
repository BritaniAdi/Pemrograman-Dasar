/*Britani Adiningati_20051397081*/
/*Tugas Praktek ke-3 nomor 5*/

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a=0,b,c;
	int jumlah=0,i,n;
	cout<<"Program Menghitung Jumlah Deret Bilangan\n";
	cout<<"-------------------------------------------\n";
	cout<<"Masukkan suku awal	=";
	cin>>a;
	cout<<"Masukkan beda		=";
	cin>>b;
	cout<<"Masukkan banyak suku	=";
	cin>>n;
	cout<<"-------------------------------------------\n";
	
	cout<<"Deret ke-"<<n<<" : ";
    cout<<a<<",";
    jumlah=jumlah+a; 
    for(i=0; i<n-1; i++)
	{
             c=a+b;
             a=c;
             cout<<c<<",";
             jumlah=jumlah+c;                      
    }
     
    cout<<"\nJumlah deret ke-"<<n<<" : ";
    cout<<jumlah; 
     
    getch();
    return 0;    
}
