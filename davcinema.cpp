#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
     clrscr();
     gotoxy(30,4);
     {
     cout<<"WELCOME TO DAV CINEMAS"<<endl;
     cout<<"SHOWS RUNNING ARE \n1.PHANTOM\n2.AKIRA\n3.AZHAR\n4.GOLMAAL"<<endl;
     }
     char str[30];
     int i,flag=0;
     char movienames[][30]={"PHANTOM","AKIRA","AZHAR","GOLMAAL"};
     char showtime[][30]={"10 to 1","1 to 4","4 to 7","7 to 10"};
     cout<<"enter the movie you want to watch"<<endl;
     gets(str);

     for(i=0;i<4;i++)
     {
	 if(strcmpi(str,movienames[i])==0)
	 {
	      cout<<endl<<"show time of "<<str<<"is"<<showtime[i];
				   flag=1;
				   break;
	  }
      }
      if(flag==0)
	 {
	   cout<<endl<<"movie not available"<<endl;
			 getch();
			 exit(0);
	 }
       clrscr();

      int a,b;
      cout<<endl<<"SNACKS AVAILABLE ARE"<< "\n1.BURGER\n2.POPCORN\n3.COLD DRINK"<<endl;
      cout<<"ENTER THE ITEM NO. YOU WANT ";
      cin>>a;
      if(a==1)
      {
	     cout<<"it will cost you RS.120";
	     b=120;
      }
      else if(a==2)
      {
	     cout<<"it will cost you RS.150";
	     b=150;
      }
      else if(a==3)
      {
	     cout<<"it will cost you RS.130";
	     b=130;
      }
      else
      {
	     cout<<"sorry your desired snack is not available";
      }

      int p=0;
      cout<<endl<<"how many tickets do you want?"<<endl;
      cin>>p;

      int e;
      if(p==1)
      {
	    cout<<"it will cost you RS.250"<<endl; e=250;
      }
      else if(p==2)
      {
	cout<<"it will cost you RS.500"<<endl;e=500;
      }
      else if(p==3)
      {
	    cout<<"it will cost you RS.750"<<endl;e=750;
       }       else
      {
      cout<<"you can book 3 tickets at max"<<endl;
      }
       cout<<endl<<"YOUR TOTAL BILL IS  "<<b+e;

      cout<<endl<<"YOUR TICKETS AND FOOD ORDER ARE CONFIRMED.THANK YOU FOR CHOOSING DAV CINEMA. ENJOY THE SHOW.PAY THE ABOVE BILL AT FEE COUNTER.VISIT AGAIN.THANK YOU!";


      getch();
 }
