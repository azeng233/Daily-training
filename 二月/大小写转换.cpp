/*��������
�����Ӽ�������һ���ַ�������Ǵ�д��ĸ��A-Z������ת����Сд�������Сд��ĸ��a-z������ת���ɴ�д������������ַ�ԭ�����ֲ�����������
�����ʽ
��������һ�У�����һ���ַ���
�����ʽ
�������һ�У�������Ҫ��������ַ���
��������
a
�������
A
*/
#include <cstdio>
#include <iostream>
#include <ctype.h>
using namespace std;
int main(){
	char c;
	cin >> c;
	if(c >= 'a' && c <= 'z'){
		c = toupper(c);
	}else if(c >= 'A' && c <= 'Z'){
		c = tolower(c);
	}else{
		c = c;
	}
	cout << c;
	return 0;
} 
