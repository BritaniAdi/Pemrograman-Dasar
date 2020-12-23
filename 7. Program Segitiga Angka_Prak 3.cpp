/*Britani Adiningati_20051397081*/
/*Tugas Praktek ke-3 nomor 7*/

#include<iostream> 
#include<conio.h> 
#include<iomanip> 
using namespace std; 
int main() 
{
int n,i,j; 
cout<<"Program Segitiga Angka\n\n"; 
cout<<"Masukkan tinggi segitiga: "; 
cin>>n; 
cout<<"\n"; 
for (i=1; i<=n;i++) 
{ 
for (j=1; j<=i;j++) 
{ 
cout<<setw(3)<<j; 
} 
cout<<" \n"; 
} 
for (i=n-1;i>=1;i--) 
{ 
for (j=1;j<=i;j++) 
{ 
cout<<setw(3)<<j; 
} 
cout<<" \n"; 
} 
getch(); 
}
