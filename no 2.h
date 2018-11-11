#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()

{
	int h, n, hasil;
	cout<<"masukkan nilai N: "; cin>>n;
		h=0;
		hasil=0;
	do
	{
		hasil+=h;
		h++;
	}
	while (h<=n);
		cout<<"jumlah bilangan dari 1 sampai dengan N: " <<hasil<<endl;
		
		return 0;
	}