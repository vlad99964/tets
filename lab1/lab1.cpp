#include <iostream>
#include <locale.h>
#include <stdint.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int main(){
setlocale (LC_ALL, ".1251");
float f; //Для значения функции
int x,x1=0,x2=0;//начальное и конечное значение 
float l=0,eps,i,dx,sum = 0; // отдельно вычисленный член,шаг вычислений, сумма и точность
int k = 0;//Счетчик суммирований и счетчик
while (x1<=0 || x2<=0 || x<=0)
{
cout << "Введите значение X>0 "; cin>>x;
cout << "Введите начальную границу X "; cin>>x1; 
cout << "Введите конечную границу Х "; cin>>x2;
	} 
cout << "Введите шаг вычислений "; cin>>dx;// Шаг вычислений
cout << "Введите точность вычислений "; cin>> eps; // точность

i = x1;
while (abs(M_PI/2 + (pow(float(-1),float(i+1))/((2*i + 1)*pow((float)x,(float)2*i+1)))) >= eps && i<=x2){
f = (M_PI/2 + pow(float(-1),float(i+1))/((2*i + 1)*pow((float)x,(float)2*i+1)));//Считаем значение аргумента
sum +=f;//Увеличиваем сумму
k++;// Увеличиваем счетчик суммирований
i+= dx;// Увеличиваем счетчик
cout<<"\nSum: " << sum <<"\tСлогаемое: "<< f << "\tКоличество просуммированных аргументов: " << k ;
}
cin>>i;// Пауза


}