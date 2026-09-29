#include <stdio.h>                                               //标准输入输出库 
#include <math.h>                                                //数字库，提供sqrt计算函数 
int main()                                                       //定义主函数
{
	double a,b,c,p,q,x1,x2,disc;                                 //定义变量为double型 
	printf("a=");                                                //提示用户输入系数 
	scanf("%lf",&a);                                             //输入系数a 
	printf("b=");                                                //提示用户输入系数 
	scanf("%lf",&b);                                             //输入系数b 
	printf("c=");                                                //提示用户输入系数 
	scanf("%lf",&c);                                             //输入系数c 
	disc=b*b-4*a*c;                                              //计算判别式 
	if (disc<0)                                                  //通过判别式判断方程是否有解
	{
		printf("该方程无实数根(判别式小于0)");                   //若判别式小于0则说明方程式无实数根 
	}
	else                                                         //否则继续计算 
	{
	p=-b/(2*a);                                          
	q=(sqrt(disc))/(2*a);
	x1=p+q;
	x2=p-q;
	printf("x1=%7.2f,x2=%7.2f\n",x1,x2);                         //计算完后输出结果 
    }
    getchar();                                	                 //防止程序自动结束
	getchar();                                                   //防止程序自动结束 
	return 0;
 } 
