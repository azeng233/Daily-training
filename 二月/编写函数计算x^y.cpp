/*��������
����C������ѧ������������x��y���ݵĺ����Ķ������£� double pow( double x, double y)���øú��������������������㲻����ʱ�࣬���Ҳ��������׼ȷ��
���������Լ�дһ����������x��y��y�ǷǸ����������ݵĺ������ú����Ķ������£�
����int power( int x, int y );
�����ʽ
����ֻд���������ÿ������������ʽ��
�����ʽ
�������������������ֻҪ������ĵķ��ء�
��������
10 2
�������
100
���ݹ�ģ��Լ��
��������ͼ���������int��ʾ��Χ�ڡ�
*/
#include <cstdio>
#include <iostream>
using namespace std;

int ans = 1;

int power(int x, int y){
	for(int i = 1; i <= y; i++){
		ans *= x; 
	}
	return ans;
}

int main(){
	int m,n;
	cin >> m >> n;
	power(m,n);
	cout << ans;
	return 0;
} 
