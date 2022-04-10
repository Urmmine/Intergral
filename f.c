#define _CRT_SECURE_NO_WARNINGS 1

#include "head.h"


//��������

double f(double x)
{
	return cos(1 / (1 + pow(x, 2)));
}

//�Ҿ��η�

double Intergral_1(double(*f)(double), double a, double b)
{
	double s, h;
	int n = N;
	int i = 0;
	s = (*f)(b);//��һ�����εĵ�s1=f(b)
	h = (b - a) / n;//���εĸ�ΪС����ĳ���
	for (i = 0; i < n; i++)
	{
		s += (*f)(b - i * h);//�ۼ�n�����εĵ�
	}
	return s * h;//s*h = (s1+...+sn)*h
}

//���η�

double Intergral_2(double(*f)(double), double a, double b)
{
	double s, h;
	int n = N;
	int i = 0;
	s = ((*f)(a) + (*f)(b))/2;//(f(x0)+f(xn))/2
	h = (b - a) / n;
	for (i = 0; i < n; i++)
	{
		s += (*f)(a + i * h);
	}
	return s * h;
}


//�����߷�

double Intergral_3(double(*f)(double), double a, double b)
{
	double s, h;
	int n = N;
	int i = 0;
	s = (*f)(a) + (*f)(b);//y0+yn
	h = (b - a) / n;
	for (i = 0; i < n - 1; i += 2)
	{
		s += 4 * (*f)(a + h + 2 * (double)(i) * h);//�ۼ�4y1,4y3��4yn-1
	}
	for (i = 0; i < n - 2; i += 2)
	{
		s += 2 * (*f)(a + 2 * h + 2 * (double)(i) * h);//�ۼ�2y2,2y4��2yn-2
	}
	return s * (h / 3);
}






//�����߷�������ɭ��������ƽ�������뷽��������



//ƽ�����ʺ���

double f1_N(double v)
{
	return 4 * PI * pow((M1 / (2 * PI * R * T)), (double)(3.0 / 2)) * exp((-M1) * pow(v, 2) /(2 * R * T)) * pow(v,3);
}


//���������ʺ���

double f2_N(double v)
{
	return 4 * PI * pow((M1 / (2 * PI * R * T)), (double)(3.0 / 2)) * exp((-M1) * pow(v, 2) / (2 * R * T)) * pow(v, 4);
}




//����
//ƽ�����ʺ���

double f1_O(double v)
{
	return 4 * PI * pow((M2 / (2 * PI * R * T)), (double)(3.0 / 2)) * exp((-M2) * pow(v, 2) / (2 * R * T)) * pow(v, 3);
}


//���������ʺ���

double f2_O(double v)
{
	return 4 * PI * pow((M2 / (2 * PI * R * T)), (double)(3.0 / 2)) * exp((-M2) * pow(v, 2) / (2 * R * T)) * pow(v, 4);
}






//�䲽������ɭ��

//��������

double f2(double x)
{

	return pow(pow((400*sin(x)),2)+pow((100*cos(x)),2),(double)(1.0/2));
}


//�䲽������ɭ��

double Bianbu_Simpson(double(*f)(double), double a, double b)
{
	double h, t;
	double ep = EPS + 1.0;
	double T2;
	h = b - a;
	t = h / 2.0 * ((*f)(a) + (*f)(b));
	double x, S1 = t, S2;
	int n = 1;
	while (ep >= EPS)//EPSΪ�����
	{
		double p = 0.0;
		for (int k = 0; k <= n - 1; k++)
		{
			x = a + (k + 0.5) * h;
			p = p + (*f)(x);
		}
		T2 = (t + h * p) / 2.0;
		S2 = (4.0 * T2 - t) / 3.0;
		ep = fabs(S2 - S1);
		t = T2;
		S1 = S2;
		n = n * 2;
		h = h / 2.0;
	}


	return S2;
}







