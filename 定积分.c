#define _CRT_SECURE_NO_WARNINGS 1
#include "head.h"


//������


int main()
{
	printf("3.1�⣺\n");
	double ret1 = Intergral_1(f, 0, PI);
	double ret2 = Intergral_2(f, 0, PI);
	double ret3 = Intergral_3(f, 0, PI);
	printf("���η��Ľ��Ϊ:>%lf\n", ret1);
	printf("���η��Ľ��Ϊ:>%lf\n", ret2);
	printf("�����߷��Ľ��Ϊ:>%lf\n", ret3);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("3.5�⣺\n");


	//����
	double ret4 = Intergral_3(f1_N, 0, 10000);
	printf("��������ƽ������Ϊ:>%lf\n", ret4);
	printf("ʵ��ֵ��%lf\n", 1.59 * pow((R * T / M1), (double)(1.0 / 2)));
	double ret5 = pow(Intergral_3(f2_N, 0, 10000),(double)(1.0 / 2));
	printf("�������ӷ���������Ϊ:>%lf\n", ret5);
	printf("ʵ��ֵ��%lf\n", 1.73 * pow((R * T / M1), (double)(1.0 / 2)));
	//����
	double ret6 = Intergral_3(f1_O, 0, 10000);
	printf("��������ƽ������Ϊ:>%lf\n", ret6);
	printf("ʵ��ֵ��%lf\n", 1.59 * pow((R * T / M2), (double)(1.0 / 2)));
	double ret7 = pow(Intergral_3(f2_O, 0, 10000), (double)(1.0 / 2));
	printf("�������ӷ���������Ϊ:>%lf\n", ret7);
	printf("ʵ��ֵ��%lf\n", 1.73 * pow((R * T / M2), (double)(1.0 / 2)));
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("3.6�⣺\n");



	//����ɭ��
	double ret8 = Intergral_3(f2, 0, PI);
	printf("����ɭ�����ܳ�Ϊ:>%lf\n", ret8);

	//�䲽��������ɭ��
	double ret9 = Bianbu_Simpson(f2, 0, PI);
	printf("�䲽������ɭ�����ܳ�Ϊ:>%lf\n", ret9);
	printf("\n");
	printf("\n");
	printf("\n");
	return 0;
}




