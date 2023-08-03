struct student
{
	int rno;
char sname[20];
int m1[6];
}s1;

int main()
{
 int t=0 ,i;
 float p;
printf("enter roll no");
scanf("%d",&s1.rno);
printf("enter name");
scanf("%s",&s1.sname);
printf("enter six sub mark ");
 
for(i=0;i<6;i++)
 scanf("%d",&s1.m1[i]);

for(i=0;i<6;i++)
 t=t+s1.m1[i];
p=t/6;

printf("\n roll no =%d",s1.rno);
printf("\n name =%s",s1.sname);
printf("\n total marks=%d",t);
printf("\n persentage=%f",p);

}
