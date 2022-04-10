#pragma once

#include <stdio.h>
#include <math.h>

#define PI acos(-1)
#define N 1000


//��������


//��������

double f(double x);


//�Ҿ��η�

double Intergral_1(double(*f)(double), double a, double b);




//���η�

double Intergral_2(double(*f)(double), double a, double b);




//�����߷�

double Intergral_3(double(*f)(double), double a, double b);





//�����߷�������ɭ��������ƽ�����ʺͷ���������

#define T 273.15

#define M1 28
#define M2 32

#define R 8.314

#include <float.h>

//ƽ������
double f1_N(double v);

//����������
double f2_N(double v);


//ƽ������
double f1_O(double v);

//����������
double f2_O(double v);






//�䲽������ɭ��

#define EPS 0.5e-7

//��������

double f2(double x);

//�䲽������ɭ��

double Bianbu_Simpson(double(*f)(double), double a, double b);