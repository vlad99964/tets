#include <iostream>
#include <locale.h>
#include <stdint.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int main(){
setlocale (LC_ALL, ".1251");
float f; //��� �������� �������
int x,x1=0,x2=0;//��������� � �������� �������� 
float l=0,eps,i,dx,sum = 0; // �������� ����������� ����,��� ����������, ����� � ��������
int k = 0;//������� ������������ � �������
while (x1<=0 || x2<=0 || x<=0)
{
cout << "������� �������� X>0 "; cin>>x;
cout << "������� ��������� ������� X "; cin>>x1; 
cout << "������� �������� ������� � "; cin>>x2;
	} 
cout << "������� ��� ���������� "; cin>>dx;// ��� ����������
cout << "������� �������� ���������� "; cin>> eps; // ��������

i = x1;
while (abs(M_PI/2 + (pow(float(-1),float(i+1))/((2*i + 1)*pow((float)x,(float)2*i+1)))) >= eps && i<=x2){
f = (M_PI/2 + pow(float(-1),float(i+1))/((2*i + 1)*pow((float)x,(float)2*i+1)));//������� �������� ���������
sum +=f;//����������� �����
k++;// ����������� ������� ������������
i+= dx;// ����������� �������
cout<<"\nSum: " << sum <<"\t���������: "<< f << "\t���������� ���������������� ����������: " << k ;
}
cin>>i;// �����


}