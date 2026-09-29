#include <stdio.h>                                               //标准输入输出库                                                  //圆周长、圆面积、圆球表面积、圆球体积、圆柱体积。 
#include <math.h>                                                //数字库，提供sqrt计算函数 
int main()                                                       //定义主函数
{                                                                //函数开始 
	double r,h,pi=3.14,C,S,SI,VI,VO;                             //定义半径r，高h，圆周率3.14，圆周长C，圆面积S，圆球表面积SI，圆球体积VI，圆柱体积VO为double型函数 
	printf("请输入半径r=");
	scanf("%lf",&r);
	printf("\n请输入高度h=");
	scanf("%lf",&h);
	C=2*r*pi;                                                    //计算 圆周长C
	S=r*r*pi;                                                    //计算 圆面积S
	SI=4*pi*r*r;                                                 //计算 圆球表面积SI
	VI=(4.0/3.0)*pi*r*r*r;                                       //计算 圆球体积VI
	VO=S*h;                                                      //计算 圆柱体积VO
	printf("圆周长C=%.2f\n",C);
	printf("圆面积S=%.2f\n",S);
	printf("圆球表面积SI=%.2f\n",SI);
	printf("圆球体积VI=%.2f\n",VI);
	printf("圆柱体积VO=%.2f\n",VO);  
	getchar();                                	                 //防止程序自动结束
	getchar();                                                   //防止程序自动结束 
	return 0;
}
