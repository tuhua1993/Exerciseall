#include <iostream>
using namespace std;

//ÿһ�˽�����Ԫ���Ƶ�����λ�ã�Ȼ�����ƶ�ǰ��δ���򲿷֣��Դ����� 
void BubbleSort(int *a,int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++){// n����������Ҫ�Ƚ�n-1�ˣ�0~n-2������Ȼi<nҲ��û����Ϊ��i=n-1ʱ������j<n-(n-1)-1=0,��������һ��forѭ�� 
		for(j=0;j<n-i-1;j++){//��Ϊ����Ƚϵ���a[j]��a[j+1],j��+1��������j<n-i-1 
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		} 
	}	
} 

int main()
{
	int n=0,a[100],i,data;
	//���� 
	cout<<"���������������:(��-1��β)"<<endl;
	while(cin>>data&&data!=-1){
		a[n++]=data; 
	}
	//���� 
	BubbleSort(a,n);
	//��� 
	cout<<"n="<<n<<endl; 
	cout<<"��������"<<endl;
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0; 
} 
