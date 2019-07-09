#include<stdio.h>
#include<stdlib.h>
struct student
{
char name[20];
int roll ;
char course[20];
int time
 };
 struct student input(struct student *stu);
 struct student output(struct student *stu1);
int main()
{
    struct student arr,*ptr;
    ptr=&arr;

    arr=input(ptr);
    output(ptr);

}
struct student input(struct student *stu)
{
    printf("\n Enter the details of the student ");
    scanf("%s %d %s %d",stu->name,&stu->roll,stu->course,&stu->time);
    return *stu;
}
struct student output(struct student *stu1)
{
    printf("\n Details of the student are  ");
    printf("%s %d %s %d",stu1->name,stu1->roll,stu1->course,stu1->time);

}
