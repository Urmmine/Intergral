#pragma once

#include <stdio.h>
#include <math.h>

#define PI acos(-1)
#define N 1000


//函数声明


//被积函数

double f(double x);


//右矩形法

double Intergral_1(double(*f)(double), double a, double b);




//梯形法

double Intergral_2(double(*f)(double), double a, double b);




//抛物线法

double Intergral_3(double(*f)(double), double a, double b);





//抛物线法（辛普森法）计算平均速率和方均根速率

#define T 273.15

#define M1 28
#define M2 32

#define R 8.314

#include <float.h>

//平均速率
double f1_N(double v);

//方均根速率
double f2_N(double v);


//平均速率
double f1_O(double v);

//方均根速率
double f2_O(double v);






//变步长辛普森法

#define EPS 0.5e-7

//被积函数

double f2(double x);

//变步长辛普森法

double Bianbu_Simpson(double(*f)(double), double a, double b);