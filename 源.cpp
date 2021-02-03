#include<stdio.h>
#include<math.h>//pow函数需要调用math.h库
int main()
{
	int i, j, k;
	i = 1 + 2;//3
	j = 1 + 2 * 3;//7
	k = i + j + -1 + pow(2, 3);//9+8=17
	
	printf("i=%d\n", i);
	printf("j=%d\n", j);
	printf("k=%d\n", k);

	return 0;
}