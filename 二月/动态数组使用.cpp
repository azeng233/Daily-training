/*�Ӽ��̶���n��������ʹ�ö�̬����洢����������������������ǵĺ���ƽ��ֵ�ֱ������Ҫ�󾡿���ʹ�ú���ʵ�ֳ�����롣ƽ��ֵΪС����ֻ�������������֡�
��������: 
5 
3 4 0 0 2
�������:
9  1
��������: 
7
3 2 7 5 2 9 1
�������:
29  4
*/
#include <cstdio>
#include <iostream>

using namespace std;

int sum(int *a,int n){
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int ans = 0;
	for(int i = 0; i < n; i++){
		ans += a[i];
	}
	return ans;
}

int main(){
	int n;
	cin >> n;
	int *a = new int[n];
	int m = sum(a,n);
	printf("%d %d",m,m/n);
	delete []a;
	return 0;
} 
