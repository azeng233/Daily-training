/*��������
��������һ��������n�����Զ���ֽ�������
�����ʽ
������һ�У�һ������������ʾ���ֽ��������
�����ʽ
������һ�У���С������������������������ڵ����ÿո����
��������
100
�������
2 2 5 5
���ݹ�ģ��Լ��
����n<=2147483647
*/ 
#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	if(n == 1){
		cout << n;
	}
	else{
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0){
				printf("%d ",i);
				n /= i;
				i = 0;
			}
		}	
		if(n) cout << n;
	}
	return 0;
} 
