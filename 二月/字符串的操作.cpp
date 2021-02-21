/*��������
��������һ���ַ���S��Ȼ�����q��ָ��ֱ���4�֣�

����1. Append str
������ʾ��S�����׷��һ���ַ���str��
��������
����ԭ�ַ�����ABCDE
����ִ�� Append FGHIJ ��
�����ַ�����Ϊ��ABCDEFGHIJ

����2. Insert x str
������ʾ��λ��x������һ���ַ���str�������뱣֤0<x<=��ǰ�ַ������ȣ�
��������
����ԭ�ַ�����ABCGHIJ
����ִ�� Insert 4 DEF ��
�����ַ�����Ϊ��ABCDEFGHIJ

����3. Swap a b c d
������ʾ�����ӵ�aλ����bλ���ַ�����ӵ�cλ����dλ���ַ����������뱣֤0<a<b<c<d<=��ǰ�ַ������ȣ�
��������
����ԭ�ַ�����ABGHIFCDEJ
����ִ�� Swap 3 5 7 9��
�����ַ�����Ϊ��ABCDEFGHIJ

����4. Reverse a b
������ʾ���ӵ�aλ����bλ���ַ�����ת�������뱣֤0<a<b<=��ǰ�ַ������ȣ�
��������
����ԭ�ַ�����ABGFEDCHIJ
����ִ�� Reverse 3 7 ��
�����ַ�����Ϊ��ABCDEFGHIJ

������������˳��ִ����ָ�����ַ�����
�����ʽ
���������һ�а����ַ���S���ڶ��а���һ������q��������q�зֱ�Ϊq��ָ�
�����ʽ
�������Ϊ1�У�Ϊ��˳��ִ��������ָ�����ַ�����
��������
My
5
Append Hello
Insert 3 dlroW
Reverse 3 7
Swap 3 7 8 12
Swap 1 2 3 7
�������
HelloMyWorld
����˵��
����ԭ�ַ�����My
����ִ�� Append Hello ��MyHello
����ִ�� Insert 3 dlroW ��MydlroWHello
����ִ�� Reverse 3 7 ��MyWorldHello
����ִ�� Swap 3 7 8 12 ��MyHelloWorld
����ִ�� Swap 1 2 3 7 ��HelloMyWorld
*/
#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	string a;
	cin >> a; //��һ��������ַ��� 
	int n;
	cin >> n; //n��ָ�� 
	string zl[n];
	for(int i = 0; i < n; i++){
		cin >>zl[i];
		if(zl[i] == "Append"){
			string xinzeng;
			cin >> xinzeng;
			a = a + xinzeng;
		}
		else if(zl[i] == "Insert"){
			int pos;
			string insert;
			cin >> pos >> insert; 
			int num1 = a.length();
			int num2 = insert.length();
			string s1,s2;
			s1 = a.substr(0,pos-1);
			s2 = a.substr(pos-1,num1-pos+1);
			a = s1 + insert + s2;
		}
		else if(zl[i] == "Swap"){
			int n1,n2,n3,n4;
			cin >> n1 >> n2 >> n3 >> n4;
			int num3 = a.length();
			string a1,a2,a3,a4,a5;
			a1 = a.substr(0,n1-1);
			a2 = a.substr(n1-1,n2-n1+1);
			a3 = a.substr(n2,n3-n2-1);
			a4 = a.substr(n3-1,n4-n3+1);
			a5 = a.substr(n4,num3-n4);
			a = a1 + a4 + a3 + a2 + a5;
		}
		else if(zl[i] == "Reverse"){
			int mm,nn;
			cin >> mm >> nn;
			string str1,str2;
			string str;
			int num4 = a.length();
			str1 = a.substr(0,mm-1);
			str2 = a.substr(nn,num4-nn);
			str = a.substr(mm-1,nn-mm+1);
			reverse(str.begin(),str.end());
			a = str1 + str + str2;
		}
	}
	cout << a;
	return 0;
} 
