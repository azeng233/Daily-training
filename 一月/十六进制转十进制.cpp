/*��������
�����Ӽ�������һ��������8λ������ʮ���������ַ���������ת��Ϊ����ʮ�������������
����ע��ʮ���������е�10~15�ֱ��ô�д��Ӣ����ĸA��B��C��D��E��F��ʾ��
��������
FFFF
�������
65535
*/
#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>

using namespace std;

int main(){
	string a;
	cin >> a;
	long long sum = 0;
	int  b;
	for(int i = 0; i < a.length(); i++){
		switch(a[i]){
			case 'A': b = 10; break;
			case 'B': b = 11; break;
			case 'C': b = 12; break;
			case 'D': b = 13; break;
			case 'E': b = 14; break;
			case 'F': b = 15; break;
			default: b = a[i] - '0'; break;
		}
		sum = sum + b * pow(16,(a.length() - i - 1));
	}
	cout << sum << endl;
	return 0;
} 
