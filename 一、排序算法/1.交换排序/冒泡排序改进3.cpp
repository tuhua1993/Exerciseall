/*
���ð������Ľ���1,2������ð�ݿ��Խ�ϼ�¼��󽻻���λ�ã�ʡȥ����Ҫ�ıȽϴ����� 
*/
#include <iostream>
using namespace std;

//����������
void swapNumber(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
} 

void BubbleSortFrontEndAndPos(int *a,int len)
{
	int low=0,high=len-1;
	int i,pos;//pos��¼��󽻻���λ�� 
	while(low<high){
		pos=low;//ÿ�γ�ʼ��Ϊ��ǰ�� 
		for(i=low;i<high;i++){
			if(a[i]>a[i+1]){
				pos=i;//��¼������λ�� 
				swapNumber(&a[i],&a[i+1]);
			}
		}
		high=pos;//�޸�ǰ�����������һλλ�� 
		for(i=high;i>low;i--){
			if(a[i]<a[i-1]){
				pos=i;//��¼������λ�� 
				swapNumber(&a[i],&a[i-1]);
			}
		}
		low=pos;//�޸���һ�˵Ŀ�ʼλ�� 
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
	BubbleSortFrontEndAndPos(a,n);
	//���
	cout<<"n="<<n<<endl;
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	} 
	cout<<endl;
	return 0;
}
