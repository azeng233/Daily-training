/*��������
����������ѧ�����Ǽ��������Ҫ���������ü�������ظ������������԰����������һЩʮ�ָ��ӵ���ѧ���㣬����ߴη��̡��������ƽ���ȡ�
	������������ѧ�Ļ������㣬��������������⣬���ǿ���ʹ������ȡֵ�����ϱƽ��ķ���������⡣��Ҫ������ʵ�ָ���3����⡣
�����ʽ
����������
�����ʽ
�����������3�������
��������
��
�������
��
���ݹ�ģ��Լ��
������ʼ�߽�ֵ�ֱ�Ϊ��low=1.0��high=2.0�����±߽�ֵʹ��ƽ��������Ҫ��ѭ��20�κ���������
*/
#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;
int main(){
	double low = 1.0;
	double high = 2.0;
	double average = 0,ans;
	for(int i = 0; i < 20; i++){
		average = (low + high) / 2;
		ans = pow(average,2);
		if(ans > 3) high = average;
		else low = average;
	}	
	cout << average;
	return 0;
}
