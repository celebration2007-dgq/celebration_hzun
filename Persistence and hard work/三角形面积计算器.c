#include <stdio.h>                                               //标准输入输出库 
#include <math.h>                                                //数字库，提供sqrt计算函数 
int main()                                                       //定义主函数
{                                                                //函数开始 
	double a,b,c,s,area;                                         //定义5个double型变量 
	printf("请输入所求三角形的三边长\n");                        //提示用户输入自己相求的三角形数值 
	scanf("%lf,%lf,%lf",&a,&b,&c);                               //输入三边长度 
	s=(a+b+c)/2;                                                 //计算s 
	area=sqrt(s*(s-a)*(s-b)*(s-c));                              //计算面积area 
	printf("area=%lf\n",area);                                   //输出面积 
	getchar();                                	                 //防止程序自动结束
	getchar();                                                   //防止程序自动结束 
	return 0;
}                                                                //函数结束 
