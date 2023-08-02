#include<stdio.h>
int main(){
	int i;
	int sum;
	sum=0;
	for(i=30;i<=120;i++)
	if(i%3==0&&i%5==0)
	{
		sum=sum+i;
	}
	printf("summation: %d\n",sum);
return 0;
}

//write a for loop which will print summation of all the numbers which are divided by 3 and 5
