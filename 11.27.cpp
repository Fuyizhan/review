#include<stdio.h>
/*struct books
{
	int bno;
	char bname[20],field[10],author[10],publisher[30];
	float price;
};
int main()
{
	struct books book[]={
		{101,"nootbook","love","anyone","zhonghua",521},
		{102,"java","computer","anyone","zhonghua",521},
		{103,"phython","computer","anyone","zhonghua",521},
		{104,"c","love","computer","zhonghua",521},
		{105,"c++","love","computer","zhonghua",521}
	};
	printf("%s\t%.2f\n",book[0].bname,book[0].price);
	
 }*/
 /*struct ss
 {
 	int a;int b;
 };
void fun(struct ss y[],int n)
 {
 	int i,j,k;struct ss tmp;
 	for(i=0;i<n-1;i++)
 	{
	k=i;
 	for(j=1;j<n;j++)
 	{
 	if(y[j].a<y[k].a || y[j].a==y[k].a && y[j].b<y[k].b)
 	k=j;
	}
 	if(k!=i)
 	{ tmp=y[i];y[i]=y[k];y[k]=tmp;}
    }
}
 int main()
 {
 	struct ss x[]={{3,5},{6,2},{5,5}};
 	int n=3,i;
	fun(x,n);
	for(i=0;i<3;i++)
	printf("%d %d\n",x[i].a,x[i].b);
 }*/
 #include<stdio.h>
 #include<string.h>
 /*int main()
 {
 	char str1[50]="hello",str2[50]="world";
 	int len1=strlen(str1);
 	int len2=strlen(str2);
 	int i=0;
	for(i=0;i<len2;i++)
	str1[len1+i]=str2[i];
	str1[len1+len2]='\0';
	printf("%s",str1);
 	return 0;
 }*/
 #include<stdio.h>
/*float max(float a[10],int n)
{
	int i,j,tmp;
	for(i=0;i<n;i++)
	for(j=1+i;j<n;j++)
	if(a[i]>a[j]) {tmp=a[i];a[i]=a[j];a[j]=tmp;}
	return a[n-1];
}
float min(float a[10],int n)
{
	int i,j,tmp;
	for(i=0;i<n;i++)
	for(j=1+i;j<n;j++)
	if(a[i]>a[j]) {tmp=a[i];a[i]=a[j];a[j]=tmp;}
	return a[0];
}
 int main()
 {
 	float arr[10]={11,22,33,44,55,66,77,88,99,89},sum=0.0;
 	int i=0;
 	float a=max(arr,10);
 	float b=min(arr,10);
 	for(i=0;i<10;i++)
 	{sum+=arr[i];}
 	float ave=sum/10;
 	printf("最高成绩为： %.1f",a);
 	printf("最低成绩为： %.1f",b);
 	printf("平均成绩为： %.1f",ave);
 	return 0;
 }*/
 #include<stdio.h>
 int main()
 {
 	int i,j;
 	int a[3][4];
 	int max=0,min=0;
 	int rows=0,cols=0;
 	int rowd=0,cold=0;
 	for(i=0;i<3;i++)
 	{
	 for(j=0;j<4;j++)
 	{
 		a[i][j]=i*j-(i+j);
 		if(max<a[i][j]) 
 		{
 			max=a[i][j];
 			rows=i;cols=j;
		 }
		 if(min>a[i][j]) 
 		{
 			min=a[i][j];
 			rowd=i;cold=j;
		 }
	 }
    }
    printf("max:%d,row:%d,col:%d",max,rows,cols);
    printf(";");
    printf("min:%d,row:%d,col:%d",min,rowd,cold);
    return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
