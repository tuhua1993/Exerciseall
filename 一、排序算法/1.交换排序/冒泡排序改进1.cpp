/*
�Ľ�ð������1������pos��¼ÿ��������󽻻���λ�ã���Ϊ������������û�н�����
˵���������ź���ġ� 
*/
#include <iostream>
using namespace std;

void BubbleSortWithPos(int *a,int len){
	int i=len-1,//��ʼ��һ������Ϊ���λ�� 
	j,temp;
	while(i>0){
		int pos=0;//ÿ�������ʼֵΪ0 
		for(j=0;j<i;j++){
			if(a[j]>a[j+1]){
				pos=j;//��¼������λ�� 
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		i=pos;//��¼��һ�˽��������λ�� 
	} 
}

int main()
{
	int n=0,a[100],i,data;
	//���� 
	cout<<"��������������֣���-1������"<<endl;
	while(cin>>data&&data!=-1){
		a[n++]=data;
	} 
	//����
	BubbleSortWithPos(a,n);
	//���
	cout<<"n="<<n<<endl;
	for(i=0;i<n;i++){
		cout<<a[i]<<" "; 
	} 
	cout<<endl;
	return 0; 
} 
