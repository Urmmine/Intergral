#define _CRT_SECURE_NO_WARNINGS 1

#include "head.h"


//被积函数

double f(double x)
{
	return cos(1 / (1 + pow(x, 2)));
}

//右矩形法

double Intergral_1(double(*f)(double), double a, double b)
{
	double s, h;
	int n = N;
	int i = 0;
	s = (*f)(b);//第一个矩形的底s1=f(b)
	h = (b - a) / n;//矩形的高为小区间的长度
	for (i = 0; i < n; i++)
	{
		s += (*f)(b - i * h);//累加n个矩形的底
	}
	return s * h;//s*h = (s1+...+sn)*h
}

//梯形法

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


//抛物线法

double Intergral_3(double(*f)(double), double a, double b)
{
	double s, h;
	int n = N;
	int i = 0;
	s = (*f)(a) + (*f)(b);//y0+yn
	h = (b - a) / n;
	for (i = 0; i < n - 1; i += 2)
	{
		s += 4 * (*f)(a + h + 2 * (double)(i) * h);//累加4y1,4y3至4yn-1
	}
	for (i = 0; i < n - 2; i += 2)
	{
		s += 2 * (*f)(a + 2 * h + 2 * (double)(i) * h);//累加2y2,2y4至2yn-2
	}
	return s * (h / 3);
}






//抛物线法（辛普森法）计算平均速率与方均根速率



//平均速率函数

double f1_N(double v)
{
	return 4 * PI * pow((M1 / (2 * PI * R * T)), (double)(3.0 / 2)) * exp((-M1) * pow(v, 2) /(2 * R * T)) * pow(v,3);
}


//方均根速率函数

double f2_N(double v)
{
	return 4 * PI * pow((M1 / (2 * PI * R * T)), (double)(3.0 / 2)) * exp((-M1) * pow(v, 2) / (2 * R * T)) * pow(v, 4);
}




//氧气
//平均速率函数

double f1_O(double v)
{
	return 4 * PI * pow((M2 / (2 * PI * R * T)), (double)(3.0 / 2)) * exp((-M2) * pow(v, 2) / (2 * R * T)) * pow(v, 3);
}


//方均根速率函数

double f2_O(double v)
{
	return 4 * PI * pow((M2 / (2 * PI * R * T)), (double)(3.0 / 2)) * exp((-M2) * pow(v, 2) / (2 * R * T)) * pow(v, 4);
}






//变步长辛普森法

//被积函数

double f2(double x)
{

	return pow(pow((400*sin(x)),2)+pow((100*cos(x)),2),(double)(1.0/2));
}


//变步长辛普森法

double Bianbu_Simpson(double(*f)(double), double a, double b)
{
	double h, t;
	double ep = EPS + 1.0;
	double T2;
	h = b - a;
	t = h / 2.0 * ((*f)(a) + (*f)(b));
	double x, S1 = t, S2;
	int n = 1;
	while (ep >= EPS)//EPS为误差限
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







