#include <iostream>
#include <conio.h>
using namespace std;

int main(){
int i,j,x,y,c;
cout << "\t Menampilkan tanggal dengan batas Awal dan Akhir  "<<endl;
cout << "==============================================================="<<endl;
cout << "Masukkan tanggal batas awal : ";
cin >> x;
cout << "Masukkan tanggal batas akhir : ";
cin >> y;
cout << " Hasilnya adalah"<<endl;
cout << "\t";
for (i = x; i <= y; i++){
        cout << "2019-11-"<<i << " , ";
    }

getch();
}

