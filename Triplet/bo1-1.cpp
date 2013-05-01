



Status InitTriplet(Triplet &T, ElemType v1, ElemType v2, ElemType v3)
{//���������������Ԫ��T��������T��3��Ԫ�صĳ�ֵΪv1��v2��v3
	if( !( T =( ElemType *)malloc(3 * sizeof(ElemType)) )  )
	{
		exit(OVERFLOW);
	}
	T[0] = v1;
	T[1] = v2;
	T[2] = v3;

	return OK;
}

Status DestoryTriplet(Triplet &T)
{
	//�����������Ԫ��T������
	free(T);
	T = NULL;

	return OK;
}

Status Get(Triplet T, int i, ElemType &e)
{   //��ʼ��������Ԫ��T�Ѵ��� 1<= i <= 3
	//�����������e����T�ĵ�iԪ��ֵ
	
	if(i<1 || i>3)
	{
		return ERROR;
	}
	e = T[i-1]; 

	return OK;
}

Status Put(Triplet &T, int i, ElemType e)
{//��ʼ��������Ԫ��T�Ѵ��� ����������ı��i��ֵΪe
	if(i < 1 || i > 3)
	{
		return ERROR;
	}
	T[i-1] = e;

	return OK;
}


Status IsAscending(Triplet T)
{//��ʼ��������Ԫ��T�Ѵ��� ������������T������Ԫ�ذ����������򷵻�1�����򷵻�0
	return ((T[0] <= T[1]) && (T[1] <= T[2]) );
}

Status IsDescending(Triplet T)
{//��ʼ����:��Ԫ��T�Ѵ��� ������������T������Ԫ�ذ����������򷵻�1�� ���򷵻�0
	return ((T[0] >= T[1]) && (T[1] >= T[2]));
}

Status Max(Triplet T, ElemType &e)
{//��Ԫ��T�Ѵ��ڣ������������e����ָ��T�����Ԫ�ص�ֵ
	e = T[0] >=  T[1] ? T[0] >= T[2] ? T[0]:T[2]:T[1] >= T[2] ? T[1]:T[2];  

	return OK;
}


Status Min(Triplet T, ElemType &e)
{
	e = T[0]  <= T[1]?T[0]<=T[2]?T[0]:T[2]:T[1] <= T[2] ? T[1] : T[2];

	return OK;
}



































