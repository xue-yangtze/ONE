#include<stdio.h>
#define m	3		//A����	��			i
#define m2	2		//		��**		j
#define n1	2		//B����	��**		k
#define n	3		//		��			l
					//	��**��ֵ����� 
int main(){
//��ʼ���飬�� A��B ���� 							//����Ԫ���ڴ��޸� 
	int a[m][m2] = {1,2,2,3,1,-1};					//A���� 
	int b[n1][n] = {3,1,0,1,2,1};					//B���� 
//�м����� 
	int cc=m*m2*n*n1;
	int c[cc];
//�������
	int dd=m*n;
	int d[dd];
										//i,j,k,l
//�������� 
	int ccc=0;
	for(int i=0;i<m;i++){
		for(int l=0;l<n;l++){
			for(int j=0,k=0;j<m2&&k<n1;j++,k++){
				c[ccc]=a[i][j]*b[k][l];
				ccc++;
			}
		}
	}
//����м��������Բ��� 
//	for(int i=0;i<cc;i++){
//		printf("c[%d] = %d , ",i,c[i]);
//	}
//	printf("\n\n");
//�м��������ɽ������ 
	for(int i=0,j=0;i<dd;i++,j++){		//����Ҫ�޸� 
		d[i]=c[j]+c[++j];				//��ǰB��������Ϊ2�������������2��ÿ��һ��������һ�� c[++j]
	}
//������ṹ������ 					//�����޸� 
	for(int i=0;i<dd;i++){
		if(i%n==0&&i>(n-1)){
			printf("\n");
		}
		printf("%d\t",d[i]);
	}
	printf("\n");
	return 0;
}

