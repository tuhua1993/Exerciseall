/*
��ͳð������ֻ��һ��ð�ݣ����Դ����˿�ʼ�����������ð�ݣ�С������ǰð�ݣ�����������ֹͣ�� 
*/ 
#include <iostream>
using namespace std;

//���������� 
void swapNum(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void BubbleSortFontAndEnd(int *a,int len)
{
	int low=0,high=len-1;//��¼���˿�ʼλ�� 
	int i,temp;
	while(low<high){//��������������ֹͣ 
		for(i=low;i<high;i++){//�������ð�� 
			if(a[i]>a[i+1]){
				swapNum(&a[i],&a[i+1]);
			}
		}
		high--;
		for(i=high;i>low;i--){//С����ǰð�� 
			if(a[i]<a[i-1]){
				swapNum(&a[i],&a[i-1]);
			}
		}
		low++;
	}
}
int main()
{
	int n=0,a[100],data,i; 
	//����
	cout<<"��������������֣���-1��β��"<<endl;
	while(cin>>data&&data!=-1){
		a[n++]=data;
	} 
	//����
	BubbleSortFontAndEnd(a,n);
	//��� 
	cout<<"n=1"<<n<<endl;
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0; 
} 
