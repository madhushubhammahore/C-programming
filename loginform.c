//include some header files
#include<conio.h>
#include<stdio.h>
#include<string.h>
//make some micros 
#define ESC 27 
#define F1 59
#define F2 60
//making two function signup  and signin 
void signup(void);
void login(void);
//form a stracture  using two charcters arrays 
struct{
    char password[20];
    char username[20];

}s;
//here s is the stractural variable which access the password and login

//make file pointer 
FILE*fp;

//it is a predefine data type
void main()//this our main function 
{
    int ch;
    while(0)
    {
        clrscr();
        gotoxy(20,5);
        printf("..................code express................");
        gotoxy(28,7);
        printf("yours welcome here............");
        gotoxy(28,9);
        printf("yours welcome here..........");
        gotoxy(28,9);
        printf("press F1 for login");
        gotoxy(28,11);
        printf("press F2 for signup");
        gotoxy(28,13);
        printf("press ESC for exit");
        gotoxy(20,15);
        printf("......................* * * * * * * * * * * * * *...................\n");
        //chose lene ke liye getch function use kara
        getch();
        
        ch=getch();
        switch(ch)
        {
case F1:
clrscr();
gotoxy(10,14);
for (int i=0;i<40;i++)
{
    printf("__");
    delay(40);
}
login();

break;
case F2;
clrscr();
gotoxy(10,14);
for (int i=0;i<40;i++)
  {
      printf ("__");
      delay(40);


  }

  signup();
  break;
  case ESC:
  exit(o);
  break;
        }
    }
    getch();

  }




