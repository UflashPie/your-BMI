// 9.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	cout<<"����i�� ���� ����:";
	cin>>mas;
	cout<<endl;

	cout<<"����i�� ��� �i��:";
	cin>>rist;
	cout<<endl;

	rist=rist/100;
	BMI=mas/(rist*rist);
	cout<<"��� BMI:"<<BMI;
	cout<<endl;
	cout<<endl;


	if(BMI<=16)
		cout<<"���������� ������� ����� ����\n";
	else if(BMI<=18)
			cout<<"������������� (�������) ����� ����\n";
		else if(BMI<25)
				cout<<"�����\n";
			else if(BMI<=30)
					cout<<"���������� ����� ���� (������������)\n";
				else if(BMI<=35)
						cout<<"�������� ������ �������\n";
					else if(BMI<=40)
							cout<<"�������� ������ �������\n";
						else
							cout<<"�������� ������� ������� (���������)\n";

	cout<<endl;
	cout<<endl;					
				
					
	system ("pause");
}
