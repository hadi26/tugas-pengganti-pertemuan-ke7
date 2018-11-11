#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()

{
	int i, n, hasil, rerata;
	cout<<"masukkan nilai N: "; cin>>n;
		i=0;
		hasil=0;
		rerata=0;
		do
		{
			hasil+=i;
			i++;
		}
			while (i<=n);
			cout<<"jumlah bilangan dari 1 sampai dengan N: " <<hasil<<endl;
		
			cout<<"nilai rata-rata: "<<endl;
		do
		{
			rerata=hasil/n;
			cout<<rerata<<endl;
		}
			while (rerata>=i);
			
			return 0;
		}