/*��������
���������������ɴ�д��ĸ��Сд��ĸ��ɵ��ַ���(���Ƚ���1��10֮��)������֮��Ĺ�ϵ������4�����֮һ��
����1�������ַ������Ȳ��ȡ����� Beijing �� Hebei
����2�������ַ�������������ȣ�������Ӧλ���ϵ��ַ���ȫһ��(���ִ�Сд)������ Beijing �� Beijing
����3�������ַ���������ȣ���Ӧλ���ϵ��ַ����ڲ����ִ�Сд��ǰ���²��ܴﵽ��ȫһ�£�Ҳ����˵���������������2�������� beijing �� BEIjing
����4�������ַ���������ȣ����Ǽ�ʹ�ǲ����ִ�СдҲ����ʹ�������ַ���һ�¡����� Beijing �� Nanjing
��������ж�����������ַ���֮��Ĺ�ϵ�����������е���һ�࣬������������ı�š�
�����ʽ
�����������У�ÿ�ж���һ���ַ���
�����ʽ
��������һ�����֣������������ַ����Ĺ�ϵ���
*/
#include <cstdio>
#include <iostream>
#include <cstring>
#include <ctype.h>

using namespace std;

int dx(char *a, char *b){ // ��Сдת�� 
	for(int i = 0; i < strlen(a); i++){
		a[i] = tolower(a[i]);
		b[i] = tolower(b[i]);
	}
	if(strcmp(a,b) == 0) return 1;
	return 0;
}

int main(){
	char s1[10],s2[10];
	cin >> s1 >> s2;
	int flag;
	if(strlen(s1) != strlen(s2)){
		flag = 1;
	} else if (strcmp(s1,s2) == 0){
		flag = 2;
	} else if (dx(s1,s2)){
		flag = 3;
	} else {
		flag = 4;
	}
	cout << flag << endl;
	return 0;
}
