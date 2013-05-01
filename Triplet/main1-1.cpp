
# include "c1.h"

typedef int ElemType;
# include "c1-1.h"
# include "bo1-1.cpp"

int main(void)
{
	Triplet T;
	ElemType m;
	Status i;
	
	i = InitTriplet(T,5,7,9);
	printf("调用初始化函数之后,i = %d(1:成功) T的三个值为", i);
	cout << T[0]  << T[1] << T[2] << endl;
	//将三元组T的第二个值赋给m
	i = Get(T,2,m);
	if(i == OK)
	{
		cout << "T的第2个值为 ： " << m << endl;
	}
	//
	i = IsAscending(T);
	printf("调用测升序函数之后，i = %d(0: 否 1: 是 )\n", i);

	i = IsDescending(T);
	printf("调用测降序函数之后，i = %d(0: 否 1: 是 )\n", i);

	
	if(i = Max(T,m) == OK)//先赋值再比较
	{
		cout << "T中最大值是 " << m << endl;
	}

	if( i == Min(T,m) == OK)
	{
		cout << "T中最小值是 " << m << endl;
	}

	DestoryTriplet(T); //此函数也可以不带返回值
	cout << "销毁T后 ， T =  " << T << "(NULL)" << endl;

	return 0;
}

