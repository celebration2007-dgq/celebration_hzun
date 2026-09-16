
int main()//
{
	int max(int x,int y,int z);
	int a,b,c,d;
	printf("输入三个整数，我将为你找出其中最大的那一个数,按下回车键进入下一步\n");
	getchar();
	printf("输入第一个数\n");
	scanf("%d",&a);
	printf("输入第二个数\n");
	scanf("%d",&b);
	printf("输入第三个数\n");
	scanf("%d",&c);
	d=max(a,b,c);
	printf("最大的数是%d\n",d);
	getchar();
	getchar();
	return 0;
}

int max(int x,int y,int z)
{
	int w=x;
	if (y>w)
	{
	w=y;
	}
	if(z>w)
	{
		w=z;
	}
	return w;
}