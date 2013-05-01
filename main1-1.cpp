
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
	printf("���ó�ʼ������֮��,i = %d(1:�ɹ�) T������ֵΪ", i);
	cout << T[0]  << T[1] << T[2] << endl;
	//����Ԫ��T�ĵڶ���ֵ����m
	i = Get(T,2,m);
	if(i == OK)
	{
		cout << "T�ĵ�2��ֵΪ �� " << m << endl;
	}
	//
	i = IsAscending(T);
	printf("���ò�������֮��i = %d(0: �� 1: �� )\n", i);

	i = IsDescending(T);
	printf("���ò⽵����֮��i = %d(0: �� 1: �� )\n", i);

	
	if(i = Max(T,m) == OK)//�ȸ�ֵ�ٱȽ�
	{
		cout << "T�����ֵ�� " << m << endl;
	}

	if( i == Min(T,m) == OK)
	{
		cout << "T����Сֵ�� " << m << endl;
	}

	DestoryTriplet(T); //�˺���Ҳ���Բ�������ֵ
	cout << "����T�� �� T =  " << T << "(NULL)" << endl;

	return 0;
}

