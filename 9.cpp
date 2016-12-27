// 9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

void main() 
{
	//setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "Ukrainian");
	double BMI;
	double mas,rist;
	cout<<"Введiть вашу масу:";
	cin>>mas;
	cout<<endl;

	cout<<"Введiть ваш рiст:";
	cin>>rist;
	cout<<endl;

	rist=rist/100;
	BMI=mas/(rist*rist);
	cout<<"Ваш BMI:"<<BMI;
	cout<<endl;
	cout<<endl;


	if(BMI<=16)
		cout<<"Выраженный дефицит массы тела\n";
	else if(BMI<=18)
			cout<<"Недостаточная (дефицит) масса тела\n";
		else if(BMI<25)
				cout<<"Норма\n";
			else if(BMI<=30)
					cout<<"Избыточная масса тела (предожирение)\n";
				else if(BMI<=35)
						cout<<"Ожирение первой степени\n";
					else if(BMI<=40)
							cout<<"Ожирение второй степени\n";
						else
							cout<<"Ожирение третьей степени (морбидное)\n";

	cout<<endl;
	cout<<endl;					
				
					
	system ("pause");
}
