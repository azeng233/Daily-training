/*��������
��������һ��������N���������N���ڣ�������N���������Լ������ĸ�����
�����ʽ
��������һ�У�����һ��������N��
�����ʽ
���������С�
������1�а������ɸ�������ÿ��������֮����һ���ո������������С���������
������2�а���һ����������ʾN���������ĸ�����
��������
10
�������
2 3 5 7
4
���ݹ�ģ��Լ��
����N<=1000
*/
#include <cstdio>
#include <iostream>
using namespace std;

bool isprime(int n){
	for(int i = 2;i < n; i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	int cnt = 0;
	for(int i = 2; i < n; i++){
		if(isprime(i)){
			cout << i << " ";
			cnt++;
		}
	}
	cout << "\n" << cnt;
	return 0;
}
