/*��������
��������һ��������N���������N���ڣ�������N���������Լ������ĸ�����
�����ʽ
��������һ�У�����һ��������N��
�����ʽ
���������С�
������1�а���һ����������ʾN���������ĸ�����
������2�а������ɸ�������ÿ��������֮����һ���ո������������С���������
��������
10
�������
4
2 3 5 7
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
	int cnt = 0, m = 0;
	int a[1001];
	for(int i = 2; i < n; i++){
		if(isprime(i)){
			a[m++] = i;
			cnt++;
		}
	}
	cout << cnt << endl;
	for(int i = 0; i < m; i++){
		cout << a[i] << " ";
	}
	
	return 0;
}
