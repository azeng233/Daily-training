/*��������
������дһ�����һԪ���η��̵�ʵ�����ĳ��򣬷��̵�ϵ�����û�������xh
�����ʽ
��������һ�����������ֱ�ΪһԪ���η��̵�����ϵ��������֮���Կո����
�����ʽ
�������һ��Ϊ���̵�ʵ��������������ͬ �ϴ����ǰ �����Կո���� ��������ͬ ���һ�� ���޸� ��� NO ��
��������
1 -5 4
�������
4 1
��������
1 -2 1
�������
1
��������
1 0 1
�������
NO
*/
 #include<stdio.h>
 #include<math.h>
 #include<algorithm>
 using namespace std;
 
 int main()
 {
 	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	if(b*b-4*a*c<0){
		printf("NO");	
	}  
	else
	{
		double x1,x2;
		x1=(-b+sqrt(b*b-4*a*c))/(2*a);//�����ʽ 
		x2=(-b-sqrt(b*b-4*a*c))/(2*a);
		if(x1==x2){
			printf("%g",x1);//��%g�����ʡ�Ը����������0 
		}
		else if(x1 < x2)
		{
			swap(x1,x2);
			printf("%g %g",x1,x2);
		}
		else{
			printf("%g %g",x1,x2);
		}
	}
	return 0;
 } 

