/*��������
��������д����������
������ӡ��1-1000����11��17�Ĺ�������
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	for(int i = 11 * 17; i <= 1000; i++){
		if(i % 11 == 0 && i % 17 == 0){
			cout << i <<endl;
		}
	}
	return 0;
} 
