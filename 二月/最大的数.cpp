/*��������
������дһ����������10������ȷ���ʹ�ӡ���������
�����ʽ
��������1�У�����10����
�����ʽ
�������1�У����10�����е������
��������
1 2 3 4 5 6 7 8 9 10
�������
10
���ݹ�ģ��Լ��
������������Լ��Ϊ��������
*/
#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int a[10];
	for(int i = 0; i < 10; i++){
		cin >> a[i];
	}
	for(int i = 0; i < 9; i++){
		for(int j = i + 1; j < 10; j++){
			if(a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	cout << a[9];
	return 0;
}
