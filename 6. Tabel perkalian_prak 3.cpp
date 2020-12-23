/*Britani Adiningati_20051397081*/
/*Tugas Praktek ke-3 nomor 6*/

#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	int i,j;
	cout<<"Program Tabel Perkalian\n";

	for (i=1;i<=10;i++)
{ 
	cout<<setw(5)<<i;
	for (j=1;j<=10;j++)

	cout<<setw(5)<<i*j;
	cout<<endl;
}

getch();

}
