/*��������
��������L,R��ͳ��[L,R]�����ڵ��������ڶ������°����ġ�1���ĸ���֮�͡�
������5�Ķ�����Ϊ101������2����1����
�����ʽ
������һ�а���2����L,R
�����ʽ
����һ����S����ʾ[L,R]�����ڵ��������ڶ������°����ġ�1���ĸ���֮�͡�
��������
2 3
�������
3
���ݹ�ģ��Լ��
����L<=R<=100000;
*/
#include <cstdio>
#include <iostream>

using namespace std;

int sum = 0;

void print(int *a, int len){
	for(int i = 0; i < len; i++){
		if(a[i] == 1){
			sum ++;
		}
	}
}

void change(int n){ //ʮ����ת��Ϊ������ 
	int a[10000];
	int pos = 0;
	do{
		a[pos ++] = n % 2;
		n /= 2;
	}while(n != 0);
	print(a,pos); //��ӡ1�ĸ��� 
}

int main(){
	int l,r;
	cin >> l >> r;
	for(int i = l; i <= r; i++){
		change(i);
	} 
	cout << sum;
	return 0;
}
