//计算字符串的长度（通过指针的方式）
#include<stdio.h>
int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}
int main()
{
	char arr[]= "bit";
	int len = my_strlen(arr);
	printf("%d\n",len);
	return 0;
}