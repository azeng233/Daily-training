/*��������
������д������ʮ����������8���������Ȼ���дmain������֤�ú�������������12�������Ϊ��12=014������32�������32=040��
�����ʽ
��������һ��������
�����ʽ
���������������İ˽�����ʽ��
��������
12
�������
014
���ݹ�ģ��Լ��
�������������n>=0.
*/
#include <cstdio>
#include <iostream>
using namespace std;

int jz(int n){
	int a[10000];
	int pos = 0;
		do{
		a[pos ++] = n % 8;
		n /= 8;
	}while(n != 0);
	for(int i = pos - 1; i >= 0; i--){
		cout << a[i];
	}
}

int main(){
	int n;
	cin >> n;
	if(n>0){
		cout << "0"; 
		jz(n);
	}
	else{
		jz(n);
	}
	
	return 0;
}
