/*��������
��������n��ʮ��������������������Ƕ�Ӧ�İ˽�������

�����ʽ
��������ĵ�һ��Ϊһ��������n ��1<=n<=10����
����������n�У�ÿ��һ����0~9����д��ĸA~F��ɵ��ַ�������ʾҪת����ʮ��������������ÿ��ʮ�����������Ȳ�����100000��

�����ʽ
�������n�У�ÿ��Ϊ�����Ӧ�İ˽�����������

������ע�⡿
���������ʮ��������������ǰ��0������012A��
��������İ˽�����Ҳ������ǰ��0��

��������
����2
����39
����123ABC

�������
����71
����4435274

��������ʾ��
�����Ƚ�ʮ��������ת����ĳ������������ĳ������ת���ɰ˽��ơ�
*/
//#include <cstdio>
//#include <iostream>
//#include <cstring>
//#include <cmath>
//
//using namespace std;
//
//int main(){
//	int n;
//	cin >> n;
//	string a;
//	for(int i = 0; i < n; i++){    /*ʮ������ת����ʮ���ơ�Ȼ��ʮ������ת���ɰ˽���*/
//		cin >> a;
//		long long sum = 0;
//		int  b;
//		for(int i = 0; i < a.length(); i++){
//			switch(a[i]){
//			case 'A': b = 10; break;
//			case 'B': b = 11; break;
//			case 'C': b = 12; break;
//			case 'D': b = 13; break;
//			case 'E': b = 14; break;
//			case 'F': b = 15; break;
//			default: b = a[i] - '0'; break;
//			}
//			sum = sum + b * pow(16,(a.length() - i - 1));
//		}
//		long long flag = sum;
//		long long pos = 0;
//		int s[400001];
//		do{
//			s[pos ++] = flag % 8;
//			flag /= 8;
//		}while(flag != 0);
//		
//		for(long long i = pos - 1; i >= 0; i--){
//			cout << s[i];
//		}
//	}
//	return 0;
//} 
#include<iostream>
#include<string>
using namespace std;
int main()
{
int n;
cin>>n;
string str;
string s2;
for(int i=0;i<n;i++)
    {
        cin>>str;
        s2="";
        for(int j=0;j<str.length();j++)
        {///��ÿһλ��ת����4λ2������������s2�� 
            switch(str[j])
                {
                case '0':s2+="0000";break;
                case '1':s2+="0001";break;
                case '2':s2+="0010";break;
                case '3':s2+="0011";break;
                case '4':s2+="0100";break;
                case '5':s2+="0101";break;
                case '6':s2+="0110";break;
                case '7':s2+="0111";break;
                case '8':s2+="1000";break;
                case '9':s2+="1001";break;
                case 'A':s2+="1010";break;
                case 'B':s2+="1011";break;
                case 'C':s2+="1100";break;
                case 'D':s2+="1101";break;
                case 'E':s2+="1110";break;
                case 'F':s2+="1111";break;
                default:break;
                }
           }
        ///ÿ�������ɵ���Ϊ8���ƣ���s2��3�ı��� 
           if(s2.length()%3==1)
            s2="00"+s2;
          if(s2.length()%3==2)
            s2="0"+s2;
        //�����ų�ǰ���0��     
            int flag=0;
         for(int k=0;k<s2.length()-2;k+=3)
            {
                int p=4*(s2[k]-'0')+2*(s2[k+1]-'0')+s2[k+2]-'0';
                if(p)
                flag=1;
                if(flag)//ֱ����Ϊ0��ʼ��� 
                cout<<p;
             } 
             cout<<endl;
    }
return 0;
}
