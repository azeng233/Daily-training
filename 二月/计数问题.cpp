/*��������
�����Լ��������� 1 �� n �����������У����� x��0 �� x �� 9���������˶��ٴΣ����磬�� 1�� 11 �У����� 1��2��3��4��5��6��7��8��9��10��11 �У����� 1 ������ 4 �Ρ�
�����ʽ
���������ļ���Ϊ count.in��
�������빲 1 �У����� 2 ������ n��x��֮����һ���ո������
�����ʽ
��������ļ���Ϊ count.out��
��������� 1 �У�����һ����������ʾ x ���ֵĴ���
*/
#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	int n,x;
	cin >> n >> x;
	int cnt = 0,cmp;
	for(int i = 1; i <= n; i++){
		int m = i;
		do{
			cmp = m % 10;
			if(cmp == x) cnt++;
			m /= 10;
		}while(m != 0);
	}
	cout << cnt;
	return 0;
}
