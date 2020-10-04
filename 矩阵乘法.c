#include<stdio.h>
#define m	3		//A矩阵	行			i
#define m2	2		//		列**		j
#define n1	2		//B矩阵	行**		k
#define n	3		//		列			l
					//	带**的值需相等 
int main(){
//初始数组，即 A、B 矩阵 							//矩阵元素在此修改 
	int a[m][m2] = {1,2,2,3,1,-1};					//A矩阵 
	int b[n1][n] = {3,1,0,1,2,1};					//B矩阵 
//中间数组 
	int cc=m*m2*n*n1;
	int c[cc];
//结果数组
	int dd=m*n;
	int d[dd];
										//i,j,k,l
//程序主体 
	int ccc=0;
	for(int i=0;i<m;i++){
		for(int l=0;l<n;l++){
			for(int j=0,k=0;j<m2&&k<n1;j++,k++){
				c[ccc]=a[i][j]*b[k][l];
				ccc++;
			}
		}
	}
//输出中间数组用以测试 
//	for(int i=0;i<cc;i++){
//		printf("c[%d] = %d , ",i,c[i]);
//	}
//	printf("\n\n");
//中间数组生成结果数组 
	for(int i=0,j=0;i<dd;i++,j++){		//按需要修改 
		d[i]=c[j]+c[++j];				//当前B矩阵行数为2，如果行数多于2，每多一行则增加一个 c[++j]
	}
//按矩阵结构输出结果 					//无需修改 
	for(int i=0;i<dd;i++){
		if(i%n==0&&i>(n-1)){
			printf("\n");
		}
		printf("%d\t",d[i]);
	}
	printf("\n");
	return 0;
}

