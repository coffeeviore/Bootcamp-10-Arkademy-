#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
      int i=0;
      int vocal=0;
      int x;
      char kalimat[30];


    cout <<"\t\tMENGHITUNG HURUF KONSONAN\n ";
    cout <<"\t\t===========================================\n\n ";
    cout <<"Masukkan kalimat:\n";

      cin.getline(kalimat,30);
      x=strlen(kalimat);
      for(i=0;i<x;i++)
            {
              if(kalimat[i]=='a'||kalimat[i]=='i'||kalimat[i]=='u'||kalimat[i]=='e'||kalimat[i]=='o')
            vocal++;

      }
      cout<<"Jumlah Huruf Vocal\t: "<<vocal<<" huruf"<<endl;

      getch();
}

//output;
