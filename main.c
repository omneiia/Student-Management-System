#include<stdlib.h>
#include<stdio.h>
#include<string.h>
typedef struct student
{
    char std_name[50];
    int std_ID;
    float marks;
    int std_date[3];
    struct student *next; // address of the next student
}std;
struct node{
    struct student std;
    struct node*next;}node;

struct node *head=NULL;
void create(struct student*);
void display(struct student*);
void insertStudentAtBeginning(struct student*);
void inserStudentatTheEnd(struct student*);
void insertStudentatPosition(struct student*);
int main()

{
    int k;
   struct student *student1=NULL;
    while(1)
    {
 printf("┌----------------------------------------------------------------- ┐\n");
 printf("│  Welcome to the student management system                        │\n");
 printf("│                                                                  │\n");
 printf("│  ┏┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┓  │\n");
 printf("│  ┇Please enter the function you want to select:               ┇  │\n");
 printf("│  ┇ 1.Create a list of students.                               ┇  │\n");
 printf("│  ┇ 2-Display the list.                                        ┇  │\n");
 printf("│  ┇ 3.Insert at the beginning.                                 ┇  │\n");
 printf("│  ┇ 4.Insert in the middle.                                    ┇  │\n");
 printf("│  ┇ 5.Insert at the end.                                       ┇  │\n");
 printf("│  ┇0.Exit.                                                     ┇  │\n");
 printf("│  ┗┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┛  │\n");
 printf("└------------------------------------------------------------------┘\n");
 printf("\n·Please enter the function you want to select : ");
  scanf("%d",&k);
  switch (k) {
      case 1 :
      create(student1);
      break;
      case 2 :
      display(student1);
      break;
      case 3 :
      insertStudentAtBeginning(student1);
      break;
      case 4 :
      insertStudentatPosition(student1);
      break;
      case 5 :
      inserStudentatTheEnd(student1) ;
      break;
      case 0 :
      exit(0);
      break;
      default :
      printf("Wrong input ! ");
      break;
  }
    while(k<0||k>5){
  printf("\n·The information you entered is incorrect, please re-enter:");
return 0 ;
}}}
void create(struct student*student1)
{
        int num;
        struct  node *tail,*ptr;
        student1=(struct node*)malloc(sizeof(struct node));
        if(tail==NULL)
        {
                printf(" Out of Memory Space: ");
                exit(0);
        }
        printf("Enter the total number of students : ");
        scanf("%d", &num);
        for (int i=0;i<num;i++)
        {printf(" Enter the name of the student %d : "  ,i+1);
        {
            fflush(stdin);
            scanf("%*c");
            fgets((tail->std.std_name),sizeof(tail->std.std_name),stdin);
        };
        printf("Enter the student date of birth %d : ", i+1);
              {scanf("%d",&(tail->std.std_date[0]));
                scanf("%d",&(tail->std.std_date[1]));
                scanf("%d",&(tail->std.std_date[2]));}
        printf("Enter the student  ID %d : ",i+1);
        scanf("%d",&(tail->std.std_ID));
        printf("Enter the student final score %d : ",i+1);
        scanf("%f",&(tail->std.marks));
        tail->next=NULL;}
        if(head==NULL)
        {
                head=tail;
        }
        else
        {
                ptr=head;
                while(ptr->next!=NULL)
                {
                        ptr=ptr->next;
                }
                ptr->next=tail;
        }
}
void display(struct student*student1)
{
        int num;
        printf("The no. of students you want to show : ");
        scanf("%d",&num);
        struct node *ptr;
        if(head==NULL)
        {
                printf("List is empty: ");
                return;
        }
        else
        {
                ptr=head;
                printf(" The List students are: ");
                while(ptr!=NULL)
                { for (int i=0;i<num;i++)
                {
                        printf("Student Name %d :\n ",i+1);
                        printf("%s\n",(ptr->std.std_name));
                        printf("Day of birth of student %d : \n",i+1);
                        printf("%d\n",(ptr->std.std_date[0]));
                        printf("Month on which student %d was born :\n",i+1);
                        printf("%d\n",(ptr->std.std_date[1]));
                        printf("Year in which student %d was born : \n",i+1);
                        printf("%d\n",(ptr->std.std_date[2]));
                        printf("Student %d ID : \n",i+1);
                        printf("%d\n",(ptr->std.std_ID));
                        printf("Student %d marks : \n",i+1);
                        printf("%f\n",(ptr->std.marks));}
                        ptr=ptr->next ;
                }
        }
}
void insertStudentAtBeginning(struct student*student1)
{
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf(" Out of Memory Space: ");
                return 0;
        }
        printf("Enter the name of the student : " );
        {
            fflush(stdin);
            scanf("%*c");
            fgets(temp->std.std_name,sizeof(temp->std.std_name),stdin);
        };
        printf("Enter the student's date of birth : ");
                for(int i=0;i<=2;i++)
            {   {scanf("%d",&(temp->std.std_date[0]));
                scanf("%d",&(temp->std.std_date[1]));
                scanf("%d",&(temp->std.std_date[2]));};
        printf("Enter the student's ID : ");
        scanf("%d",&(temp->std.std_ID));
        printf("Enter the student's final score : ");
        scanf("%f",&(temp->std.marks));
        temp->next =NULL;
        if(head==NULL)
        {
                head=temp;
        }
        else
        {
                temp->next=head;
                head=temp;
        }
}}
void inserStudentatTheEnd(struct student*student1)
{
     struct student *tail,*ptr;
        tail=(struct student *)malloc(sizeof(struct student));
        if(tail==NULL)
        {
                printf("Out of Memory Space: ");
                return;
        }
        printf(" Enter student's name : " );
        {
            fflush(stdin);
            scanf("%*c");
            fgets(tail->std_name,sizeof(tail->std_name),stdin);
        };
        printf("Enter the student's date of birth : ");
                for(int i=0;i<=2;i++)
            {   {scanf("%d",&(tail->std_date[0]));
                scanf("%d",&(tail->std_date[1]));
                scanf("%d",&(tail->std_date[2]));
            }
        printf("Enter the student's ID : ");
        scanf("%d",&(tail->std_ID));
        printf("Enter the student's final score : ");
        scanf("%f",&(tail->marks));
        tail->next =NULL;
        if(head==NULL)
        {
                head=tail;
        }
        else
        {
                ptr=head;
                while(ptr->next !=NULL)
                {
                        ptr=ptr->next ;
                }
                ptr->next =tail;
        }
}}
void insertStudentatPosition(struct student*student1)
{
        struct node *ptr,*tail;
        int i,pos;
        tail=(struct node *)malloc(sizeof(struct node));
        if(tail==NULL)
        {
                printf(" Out of Memory Space: ");
                return;
        }
        printf("Enter the position for the new student to be inserted at : ");
        scanf("%d",&pos);
        printf(" Enter student's name : " );
        {
            fflush(stdin);
            scanf("%*c");
            fgets(tail->std.std_name,sizeof(tail->std.std_name),stdin);
        };
        printf("Enter the student's date of birth : ");
                for(int i=0;i<=2;i++)
            {   {scanf("%d",&(tail->std.std_date[0]));
                scanf("%d",&(tail->std.std_date[1]));
                scanf("%d",&(tail->std.std_date[2]));};
        printf("Enter the student's ID : ");
        scanf("%d",(tail->std.std_ID));
        printf("Enter the student's final score : ");
        scanf("%f",(tail->std.marks));
        tail->next=NULL;
        if(pos==0)
        {
                tail->next=head;
                head=tail;
        }
        else
        {
                for(i=0,ptr=head;i<pos-1;i++) { ptr=ptr->next;
                    {  if(ptr==NULL)
                        {
                                printf(" Position not found:");
                                return;
                        }
         }          }
                (tail->next) =ptr->next ;
                ptr->next=tail;
                }
}}


