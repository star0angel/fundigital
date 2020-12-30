//#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)//取消scanf返回值的警告
#include<stdio.h>


//输出所有和为S的连续正数序列。序列内按照从小至大的顺序，序列间按照开始数字从小到大的顺序
//小明很喜欢数学,有一天他在做数学作业时,要求计算出9~16的和,他马上就写出了正确答案是100。
// 但是他并不满足于此,他在想究竟有多少种连续的正数序列的和为100(至少包括两个数)。
// 没多久,他就得到另一组连续正数和为100的序列:18,19,20,21,22。现在把问题交给你找出所有和为S的连续正数序列
// 
// 
void digital(int input)//完成功能函数
{
	int i=1;//计数器  从1开始加 只加到i_input/2+1
	while (i<=(input / 2 + 1))
	{
		int first = i;//首加元素 从first开始 连续相加
		int total = 0;//存放临时的和 跟input比较
		int j = 0;  //用来保存连续加的次数
		while (total < input)
		{
			total += first++;//连续相加
			j++;
		}
		if (total==input)
		{
			first = first  - j;//首元素
			for (;j>0;j--)
			{
				printf("%d ", first++);
			}
			printf("\n");
		}
		i++;//计数器加班
	}
}




int main()
{
	int input;
	printf("请输入你的数字：>");
	int i=scanf("%d", &input);

	digital(input);
	return 0;
}