/*��������
��������һ��Сд�ַ���������С�����˳�������
�����ʽ
����bcaed
�����ʽ
����abcde
��������������м�û�пո�
��������
һ��������ĿҪ������뷶����
����
bcaed
�������
����������������Ӧ�������
����
abcde
���ݹ�ģ��Լ��
��������������ÿһ�����ķ�Χ��
��������0<n,m<100, 0<=�����е�ÿ����<=1000��
*/
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	char a[2000];
	cin >> a;
	int len = strlen(a);
	sort(a,a+len);
	cout << a;
	return 0;
}
