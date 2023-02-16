#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
#include <windows.h>

struct food_node {
    int food;
    struct food_node *next;
};
struct food_node *head=NULL;
void option();
void lunch();
void bread();
void tortilla();
void rice();
void dinner();
void breadbakedonhotpebbles();
void stirfriednoodles();
void Fettuccine();

void main()
{
   int x; double y;
   system("cls");
   printf("--------------------------------------------------------------------------------------------------------------------------------------------------------");
   printf("--------------------------------------------------------------------------------------------------------------------------------------------------------");
   printf("-------------------");
   time_t t = time(NULL);
   printf("%s\n\n",ctime(&t));
   printf("\t\t\tTopic: \e[4mSubway Food System\e[0m");
   printf("\n\n\t\t\t\t\tBy Pulkit");
   char text1[]="\n\n \t\t\tWelcome to our restaurant!\t\t ";
   char text2[]="\n\n \t\t\tHere, we allow you to create\t\t";
   char text3[]="\n\n \t\t\tyour own dish\t\t";
   char text4[]="\n\n\n \t\t\tWe provide with the options to create your own dinner or lunch\t\t";
   char text5[]="\n\n\n\nPress '1' if you would like to choose ingredients for your own lunch\t\t";
   char text6[]="\n\nPress '2' if you would like to choose ingredients for your own dinner\t\t";
    printf("\n\n");
    for(x=0; text1[x]!=NULL; x++)
   {
     printf("%c",text1[x]);
      for(y=0; y<=9999999; y++)
      {
      }
   }
   printf("\n\n");
    for(x=0; text2[x]!=NULL; x++)
   {
     printf("%c",text2[x]);
      for(y=0; y<=9999999; y++)
      {
      }
   }
   printf("\n\n");
    for(x=0; text3[x]!=NULL; x++)
   {
     printf("%c",text3[x]);
      for(y=0; y<=9999999; y++)
      {
      }
   }
   printf("\n\n");
   for(x=0; text4[x]!=NULL; x++)
   {
     printf("%c",text4[x]);
      for(y=0; y<=11000000; y++)
      {
      }
   }
   printf("\n\n");
   for(x=0; text5[x]!=NULL; x++)
   {
     printf("%c",text5[x]);
      for(y=0; y<=11000000; y++)
      {
      }
   }
   printf("\n\n");
   for(x=0; text6[x]!=NULL; x++)
   {
     printf("%c",text6[x]);
      for(y=0; y<=11000000; y++)
      {
      }
   }
   getch();
   option();
   system("pause");
}

void option()
{
    int opt;
    scanf("%d",&opt);
    switch(opt){
        case 1:
            lunch();break;
        case 2:
            dinner();break;
        default:
            printf("Choose a valid option.");exit(0);
    }
}

void lunch()
{
  struct food_node *newnode, *temp;
  newnode=(struct food_node*)malloc(sizeof(struct food_node));
  newnode->next=NULL;
  temp=newnode;
  system("cls");
  printf("Firstly, Choose one of the options:\n1. Italian crust bread\n2. Spanish Tortillas\n3. Indian Rice\t");
  scanf("%d",&newnode->food);
  temp->next=newnode;
  temp=newnode;
  temp->next=NULL;
  switch(newnode->food){
    case 1:
    bread();break;
    case 2:
    tortilla();break;
    case 3:
    rice();break;
    default:
    printf("Choose a valid option.");exit(0);
  }
}

void bread()
{
  struct food_node *newnode, *temp;
  newnode=(struct food_node*)malloc(sizeof(struct food_node));
  system("cls");
  printf("Choose the type of cheese you'd want on your bread:\n1. Mozarella cheese\n2. Seasoned cheese\t");
  newnode->next=NULL;
  temp=newnode;
  scanf("%d",&newnode->food);
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newnode;
  temp=newnode;
  temp->next=NULL;
  if(newnode->food==1){
  struct food_node *newnode;
  newnode=(struct food_node*)malloc(sizeof(struct food_node));
  system("cls");
  printf("Choose the type of seasoning:\n1. Oregano seasoning\n2. chilli seasoning\t");
  newnode->next=NULL;
  scanf("%d",&newnode->food);
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newnode;
  temp=newnode;
  temp->next=NULL;
  switch(newnode->food){
    case 1:
    system("cls");
    printf("Your food is oregano seasoned cheesy sandwich.\n");
    printf("Your bill is: 6$.\n");
    printf("\nTHANK YOU FOR HAVING FOOD FROM US. WE HOPE TO HAVE YOU AGAIN SOON!!\n");break;
    case 2:
    system("cls");
    printf("Your food is spicy cheese sandwich.\n");
    printf("Your bill is: 5$.\n");
    printf("\nTHANK YOU FOR HAVING FOOD FROM US. WE HOPE TO HAVE YOU AGAIN SOON!!\n");break;
    default:
    printf("Choose a valid option.");exit(0);
  };
  }
  else if(newnode->food==2){
  struct food_node *newnode;
  newnode=(struct food_node*)malloc(sizeof(struct food_node));
  system("cls");
  printf("Choose the type of seasoning:\n1. Oregano seasoning\n2. chilli seasoning\t");
  newnode->next=NULL;
  scanf("%d",&newnode->food);
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newnode;
  temp=newnode;
  temp->next=NULL;
  switch(newnode->food){
    case 1:
    system("cls");
    printf("Your food is oregano extra double seasoned cheesy sandwich.\n");
    printf("Your bill is: 8$.\n");
    printf("\nTHANK YOU FOR HAVING FOOD FROM US. WE HOPE TO HAVE YOU AGAIN SOON!!\n");break;
    case 2:
    system("cls");
    printf("Your food is spicy sandwich in diced cheese.\n");
    printf("Your bill is: 7$.\n");
    printf("\nTHANK YOU FOR HAVING FOOD FROM US. WE HOPE TO HAVE YOU AGAIN SOON!!\n");break;
    default:
    printf("Choose a valid option.");exit(0);
  }
  }
    else{
    printf("Choose a valid option.");exit(0);
    }
}

void tortilla()
{
  struct food_node *newnode, *temp;
  newnode=(struct food_node*)malloc(sizeof(struct food_node));
  system("cls");
  printf("Choose the type of dip you'd like to have with your tortilla:\n1. red sauce dip\n2. spicy dip\t");
  newnode->next=NULL;
  temp=newnode;
  scanf("%d",&newnode->food);
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newnode;
  temp=newnode;
  temp->next=NULL;
  if(newnode->food==1){
  struct food_node *newnode;
  newnode=(struct food_node*)malloc(sizeof(struct food_node));
  system("cls");
  printf("Choose the type of side dish:\n1. seasoned tomato curry\n2. potato cheese balls dipped in white gravey\t");
  newnode->next=NULL;
  scanf("%d",&newnode->food);
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newnode;
  temp=newnode;
  temp->next=NULL;
  switch(newnode->food){
    case 1:
    system("cls");
    printf("Your food is tortilla served with red sauce and tomato.\n");
    printf("Your bill is: 7$.\n");
    printf("\nTHANK YOU FOR HAVING FOOD FROM US. WE HOPE TO HAVE YOU AGAIN SOON!!\n");break;
    case 2:
    system("cls");
    printf("Your food is sauted tortilla with potato cheese balls in red sauce.\n");
    printf("Your bill is: 6$.\n");
    printf("\nTHANK YOU FOR HAVING FOOD FROM US. WE HOPE TO HAVE YOU AGAIN SOON!!\n");break;
    default:
    printf("Choose a valid option.");exit(0);
  }
  }

  else if(newnode->food==2){
  struct food_node *newnode;
  newnode=(struct food_node*)malloc(sizeof(struct food_node));
  system("cls");
  printf("Choose the type of side dish:\n1. stuffed garlic sticks\n2. orange mayonnaise\t");
  newnode->next=NULL;
  temp=newnode;
  scanf("%d",&newnode->food);
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newnode;
  temp=newnode;
  temp->next=NULL;
  switch(newnode->food){
    case 1:
    system("cls");
    printf("Your food is tortilla served with garlic sticks in spiced mash.\n");
    printf("Your bill is: 9$.\n");
    printf("\nTHANK YOU FOR HAVING FOOD FROM US. WE HOPE TO HAVE YOU AGAIN SOON!!\n");break;
    case 2:
    system("cls");
    printf("Your food is tortilla in orange mayo with spicy mints.\n");
    printf("Your bill is: 7$.\n");
    printf("\nTHANK YOU FOR HAVING FOOD FROM US. WE HOPE TO HAVE YOU AGAIN SOON!!\n");break;
    default:
    printf("Choose a valid option.");exit(0);
  }
  }
    else{
    printf("Choose a valid option.");exit(0);
    }
}

void rice()
{
  struct food_node *newnode, *temp;
  newnode=(struct food_node*)malloc(sizeof(struct food_node));
  system("cls");
  printf("Choose the type of dip you'd like to have with your rice:\n1. red sauce dip\n2. spicy dip\t");
  newnode->next=NULL;
  temp=newnode;
  scanf("%d",&newnode->food);
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newnode;
  temp=newnode;
  temp->next=NULL;
  if(newnode->food==1){
  struct food_node *newnode;
  newnode=(struct food_node*)malloc(sizeof(struct food_node));
  system("cls");
  printf("Choose the type of side dish:\n1. seasoned tomato curry\n2. potato cheese balls dipped in white gravey\t");
  newnode->next=NULL;
  scanf("%d",&newnode->food);
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newnode;
  temp=newnode;
  temp->next=NULL;
  switch(newnode->food){
    case 1:
    system("cls");
    printf("Your food is rice served with red sauce and tomato.\n");
    printf("Your bill is: 7$.\n");
    printf("\nTHANK YOU FOR HAVING FOOD FROM US. WE HOPE TO HAVE YOU AGAIN SOON!!\n");break;
    case 2:
    system("cls");
    printf("Your food is sauted rice with potato cheese balls in red sauce.\n");
    printf("Your bill is: 6$.\n");
    printf("\nTHANK YOU FOR HAVING FOOD FROM US. WE HOPE TO HAVE YOU AGAIN SOON!!\n");break;
    default:
    printf("Choose a valid option.");exit(0);
  }
  }

  else if(newnode->food==2){
  struct food_node *newnode;
  newnode=(struct food_node*)malloc(sizeof(struct food_node));
  system("cls");
  printf("Choose the type of side dish:\n1. stuffed garlic sticks\n2. orange mayonnaise\t");
  newnode->next=NULL;
  temp=newnode;
  scanf("%d",&newnode->food);
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newnode;
  temp=newnode;
  temp->next=NULL;
  switch(newnode->food){
    case 1:
    system("cls");
    printf("Your food is rice served with garlic sticks in spiced mash.\n");
    printf("Your bill is: 9$.\n");
    printf("\nTHANK YOU FOR HAVING FOOD FROM US. WE HOPE TO HAVE YOU AGAIN SOON!!\n");break;
    case 2:
    system("cls");
    printf("Your food is rice in orange mayo with spicy mints.\n");
    printf("Your bill is: 7$.\n");
    printf("\nTHANK YOU FOR HAVING FOOD FROM US. WE HOPE TO HAVE YOU AGAIN SOON!!\n");break;
    default:
    printf("Choose a valid option.");exit(0);
  }
  }
    else{
    printf("Choose a valid option.");exit(0);
    }
}

void dinner()
{
  struct food_node *newnode, *temp;
  newnode=(struct food_node*)malloc(sizeof(struct food_node));
  newnode->next=NULL;
  temp=newnode;
  system("cls");
  printf("Firstly, Choose one of the options:\n1. bread baked on hot pebbles\n2. stir fried noodles\n3. Fettuccine\t");
  scanf("%d",&newnode->food);
  temp->next=newnode;
  temp=newnode;
  temp->next=NULL;
  switch(newnode->food){
    case 1:
    breadbakedonhotpebbles();break;
    case 2:
    stirfriednoodles();break;
    case 3:
    Fettuccine();break;
    default:
    printf("Choose a valid option.");exit(0);
  }
}

void breadbakedonhotpebbles()
{
  struct food_node *newnode, *temp;
  newnode=(struct food_node*)malloc(sizeof(struct food_node));
  system("cls");
  printf("Choose the type of cheese you'd want on your bread:\n1. Mozarella cheese\n2. Seasoned cheese\t");
  newnode->next=NULL;
  temp=newnode;
  scanf("%d",&newnode->food);
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newnode;
  temp=newnode;
  temp->next=NULL;
  if(newnode->food==1){
  struct food_node *newnode;
  newnode=(struct food_node*)malloc(sizeof(struct food_node));
  system("cls");
  printf("Choose the type of seasoning:\n1. Oregano seasoning\n2. chilli seasoning\t");
  newnode->next=NULL;
  scanf("%d",&newnode->food);
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newnode;
  temp=newnode;
  temp->next=NULL;
  switch(newnode->food){
    case 1:
    system("cls");
    printf("Your food is oregano seasoned cheesy bread baked on hot pebbles.\n");
    printf("Your bill is: 6$.\n");
    printf("\nTHANK YOU FOR HAVING FOOD FROM US. WE HOPE TO HAVE YOU AGAIN SOON!!\n");break;
    case 2:
    system("cls");
    printf("Your food is spicy cheese bread baked on hot pebbles.\n");
    printf("Your bill is: 5$.\n");
    printf("\nTHANK YOU FOR HAVING FOOD FROM US. WE HOPE TO HAVE YOU AGAIN SOON!!\n");break;
    default:
    printf("Choose a valid option.");exit(0);
  };
  }
  else if(newnode->food==2){
  struct food_node *newnode;
  newnode=(struct food_node*)malloc(sizeof(struct food_node));
  system("cls");
  printf("Choose the type of seasoning:\n1. Oregano seasoning\n2. chilli seasoning\t");
  newnode->next=NULL;
  temp=head;
  scanf("%d",&newnode->food);
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newnode;
  temp=newnode;
  temp->next=NULL;
  switch(newnode->food){
    case 1:
    system("cls");
    printf("Your food is oregano extra double seasoned cheesy bread baked on hot pebbles.\n");
    printf("Your bill is: 8$.\n");
    printf("\nTHANK YOU FOR HAVING FOOD FROM US. WE HOPE TO HAVE YOU AGAIN SOON!!\n");break;
    case 2:
    system("cls");
    printf("Your food is spicy bread baked on hot pebbles in diced cheese.\n");
    printf("Your bill is: 7$.\n");
    printf("\nTHANK YOU FOR HAVING FOOD FROM US. WE HOPE TO HAVE YOU AGAIN SOON!!\n");break;
    default:
    printf("Choose a valid option.");exit(0);
  }
  }
    else{
    printf("Choose a valid option.");exit(0);
    }
}

void stirfriednoodles()
{
  struct food_node *newnode, *temp;
  newnode=(struct food_node*)malloc(sizeof(struct food_node));
  system("cls");
  printf("Choose the type of dip you'd like to have with your stir fried noodles:\n1. red sauce dip\n2. spicy dip\t");
  newnode->next=NULL;
  temp=newnode;
  scanf("%d",&newnode->food);
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newnode;
  temp=newnode;
  temp->next=NULL;
  if(newnode->food==1){
  struct food_node *newnode;
  newnode=(struct food_node*)malloc(sizeof(struct food_node));
  system("cls");
  printf("Choose the type of side dish:\n1. seasoned tomato curry\n2. potato cheese balls dipped in white gravey\t");
  newnode->next=NULL;
  scanf("%d",&newnode->food);
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newnode;
  temp=newnode;
  temp->next=NULL;
  switch(newnode->food){
    case 1:
    system("cls");
    printf("Your food is stir fried noodles served with red sauce and tomato.\n");
    printf("Your bill is: 7$.\n");
    printf("\nTHANK YOU FOR HAVING FOOD FROM US. WE HOPE TO HAVE YOU AGAIN SOON!!\n");break;
    case 2:
    system("cls");
    printf("Your food is sauted stir fried noodles with potato cheese balls in red sauce.\n");
    printf("Your bill is: 6$.\n");
    printf("\nTHANK YOU FOR HAVING FOOD FROM US. WE HOPE TO HAVE YOU AGAIN SOON!!\n");break;
    default:
    printf("Choose a valid option.");exit(0);
  }
  }

  else if(newnode->food==2){
  struct food_node *newnode;
  newnode=(struct food_node*)malloc(sizeof(struct food_node));
  system("cls");
  printf("Choose the type of side dish:\n1. stuffed garlic sticks\n2. orange mayonnaise\t");
  newnode->next=NULL;
  temp=newnode;
  scanf("%d",&newnode->food);
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newnode;
  temp=newnode;
  temp->next=NULL;
  switch(newnode->food){
    case 1:
    system("cls");
    printf("Your food is stir fried noodles served with garlic sticks in spiced mash.\n");
    printf("Your bill is: 9$.\n");
    printf("\nTHANK YOU FOR HAVING FOOD FROM US. WE HOPE TO HAVE YOU AGAIN SOON!!\n");break;
    case 2:
    system("cls");
    printf("Your food is stir fried noodles in orange mayo with spicy mints.\n");
    printf("Your bill is: 7$.\n");
    printf("\nTHANK YOU FOR HAVING FOOD FROM US. WE HOPE TO HAVE YOU AGAIN SOON!!\n");break;
    default:
    printf("Choose a valid option.");exit(0);
  }
  }
    else{
    printf("Choose a valid option.");exit(0);
    }
}

void Fettuccine()
{
  struct food_node *newnode, *temp;
  newnode=(struct food_node*)malloc(sizeof(struct food_node));
  system("cls");
  printf("Choose the type of dip you'd like to have with your Fettuccine:\n1. red sauce dip\n2. spicy dip\t");
  newnode->next=NULL;
  temp=newnode;
  scanf("%d",&newnode->food);
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newnode;
  temp=newnode;
  temp->next=NULL;
  if(newnode->food==1){
  struct food_node *newnode;
  newnode=(struct food_node*)malloc(sizeof(struct food_node));
  system("cls");
  printf("Choose the type of side dish:\n1. seasoned tomato curry\n2. potato cheese balls dipped in white gravey\t");
  newnode->next=NULL;
  scanf("%d",&newnode->food);
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newnode;
  temp=newnode;
  temp->next=NULL;
  switch(newnode->food){
    case 1:
    system("cls");
    printf("Your food is Fettuccine served with red sauce and tomato.\n");
    printf("Your bill is: 7$.\n");
    printf("\nTHANK YOU FOR HAVING FOOD FROM US. WE HOPE TO HAVE YOU AGAIN SOON!!\n");break;
    case 2:
    system("cls");
    printf("Your food is sauted Fettuccine with potato cheese balls in red sauce.\n");
    printf("Your bill is: 6$.\n");
    printf("\nTHANK YOU FOR HAVING FOOD FROM US. WE HOPE TO HAVE YOU AGAIN SOON!!\n");break;
    default:
    printf("Choose a valid option.");exit(0);
  }
  }

  else if(newnode->food==2){
  struct food_node *newnode;
  newnode=(struct food_node*)malloc(sizeof(struct food_node));
  system("cls");
  printf("Choose the type of side dish:\n1. stuffed garlic sticks\n2. orange mayonnaise\t");
  newnode->next=NULL;
  temp=newnode;
  scanf("%d",&newnode->food);
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newnode;
  temp=newnode;
  temp->next=NULL;
  switch(newnode->food){
    case 1:
    system("cls");
    printf("Your food is Fettuccine served with garlic sticks in spiced mash.\n");
    printf("Your bill is: 9$.\n");
    printf("\nTHANK YOU FOR HAVING FOOD FROM US. WE HOPE TO HAVE YOU AGAIN SOON!!\n");break;
    case 2:
    system("cls");
    printf("Your food is Fettuccine in orange mayo with spicy mints.\n");
    printf("Your bill is: 7$.\n");
    printf("\nTHANK YOU FOR HAVING FOOD FROM US. WE HOPE TO HAVE YOU AGAIN SOON!!\n");break;
    default:
    printf("Choose a valid option.");exit(0);
  }
  }
    else{
    printf("Choose a valid option.");exit(0);
    }
}