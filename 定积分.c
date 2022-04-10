#define _CRT_SECURE_NO_WARNINGS 1
#include "head.h"


//主函数


int main()
{
	printf("3.1题：\n");
	double ret1 = Intergral_1(f, 0, PI);
	double ret2 = Intergral_2(f, 0, PI);
	double ret3 = Intergral_3(f, 0, PI);
	printf("矩形法的结果为:>%lf\n", ret1);
	printf("梯形法的结果为:>%lf\n", ret2);
	printf("抛物线法的结果为:>%lf\n", ret3);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("3.5题：\n");


	//氮气
	double ret4 = Intergral_3(f1_N, 0, 10000);
	printf("氮气分子平均速率为:>%lf\n", ret4);
	printf("实际值：%lf\n", 1.59 * pow((R * T / M1), (double)(1.0 / 2)));
	double ret5 = pow(Intergral_3(f2_N, 0, 10000),(double)(1.0 / 2));
	printf("氮气分子方均根速率为:>%lf\n", ret5);
	printf("实际值：%lf\n", 1.73 * pow((R * T / M1), (double)(1.0 / 2)));
	//氧气
	double ret6 = Intergral_3(f1_O, 0, 10000);
	printf("氧气分子平均速率为:>%lf\n", ret6);
	printf("实际值：%lf\n", 1.59 * pow((R * T / M2), (double)(1.0 / 2)));
	double ret7 = pow(Intergral_3(f2_O, 0, 10000), (double)(1.0 / 2));
	printf("氧气分子方均根速率为:>%lf\n", ret7);
	printf("实际值：%lf\n", 1.73 * pow((R * T / M2), (double)(1.0 / 2)));
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("3.6题：\n");



	//辛普森法
	double ret8 = Intergral_3(f2, 0, PI);
	printf("辛普森法得周长为:>%lf\n", ret8);

	//变步长的辛普森法
	double ret9 = Bianbu_Simpson(f2, 0, PI);
	printf("变步长辛普森法得周长为:>%lf\n", ret9);
	printf("\n");
	printf("\n");
	printf("\n");
	return 0;
}




