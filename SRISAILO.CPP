#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<fstream.h>
void menu();
void main();
void newup();
void product();
void welcome()
{
clrscr();
gotoxy(28,9);
cout<<" **************************\n";
gotoxy(28,10);
cout<<"|  SRI SAI LOK ENTERPRISE |\n";
gotoxy(28,11);
cout<<" **************************";
gotoxy(52,19);
cout<<" ---------------------------";
gotoxy(52,20);
cout<<"| Made By:- SUBHANKAR DUTTA |";
gotoxy(52,21);
cout<<"|                           |";
gotoxy(52,22);
cout<<" ----------------------------";
while(!kbhit())
{
 gotoxy(30,23);
 cout<<"<<<PRESS ANY KEY>>>";
 delay(200);
 gotoxy(30,23);
 cout<<"<< PRESS ANY KEY >>";
 delay(200);
 gotoxy(30,23);
 cout<<"<  PRESS ANY KEY  >";
 delay(200);
 gotoxy(30,23);
 cout<<"   PRESS ANY KEY   ";
 delay(200);
 gotoxy(30,23);
 cout<<"  <PRESS ANY KEY>  ";
 delay(200);
 gotoxy(30,23);
 cout<<" <<PRESS ANY KEY>> ";
 delay(200);
 gotoxy(30,23);
 cout<<"<<<PRESS ANY KEY>>>";
 delay(200);
}

getche();
}
void border()
{
clrscr();
for(int i=2;i<81;i++)
 {
 gotoxy(i,2);
  cout<<"_";
 }
for(i=3;i<=23;i++)
{
gotoxy(2,i);
cout<<"*";
}
for(i=2;i<81;i++)
 {
 gotoxy(i,23);
  cout<<"_";
 }
for(i=3;i<=23;i++)
{
gotoxy(80,i);
cout<<"*";
}
for(i=2;i<81;i++)
 {
 gotoxy(i,6);
  cout<<"_";
 }
gotoxy(3,21);
cout<<"-----------------------------------------------------------------------------";
 gotoxy(4,22);
 cout<<"<0> = E X I T ";
 gotoxy(35,4);
 cout<<"HARI OM";
 gotoxy(29,5);
 cout<<"SRI SAI LOK ENTERPRISES           Date:"<<__DATE__;
}
void contact()
{
clrscr();
border();
gotoxy(10,8);
cout<<" ---------------------------------------------------------------- \n";
gotoxy(10,9);
cout<<"|   Contact number.: 8294836556                                  |\n";
gotoxy(10,10);
cout<<"|   E-Mail.: subhankar0810@gmail.com                             |\n";
gotoxy(10,11);
cout<<"|   Address: D/71,bagunnar, baridhi, jamshedpur,jharkhand        |\n";
gotoxy(10,12);
cout<<"|   Pin : 831017                                                 |\n";
gotoxy(10,13);
cout<<" ---------------------------------------------------------------- \n";
gotoxy(20,20);
cout<<"Press any key for main menu.....";
getch();
menu();
}
void thank()
{
clrscr();
border();
gotoxy(30,13);
cout<<"***************************";
gotoxy(30,14);
cout<<"* T H A N K               *";
gotoxy(30,15);
cout<<"*           Y O U ! ! !   *";
gotoxy(30,16);
cout<<"***************************";
}
class billing
{
private:
int qty,nos,sch,totsch;
float rate,mrp,amt,totamt;
char pname[30],rename[30],add[100],pin[10],ph[20];

public:
billing()
{
 mrp=0;
 qty=0;
 nos=0;
 totsch=0;
 totamt=0;
}
void bill()
{
fstream obj;
obj.open("bill.dat",ios::app|ios::out|ios::trunc);
//it will automatic take the date..
obj<<"-------------------------------------------------------------------------\n";
obj<<" Date.: "<<__DATE__<<"                HARI OM           |                   |\n";
obj<<"                           SRI SAI LOK ENTERPRISES   |Ph.No.:8294836556  |\n";
obj<<"                                                     |Add:D-71,bagunnagar|\n";
obj<<"                                                     |baridhi,Jsr-17     |\n";
obj<<"------------------------------------------------------------------------\n";
 cout<<"ENTER THE RETILAR NAME:  ";
 gets(rename);
 obj<<"To.: "<<rename<<"                        ";
 cout<<"ENTER ADDRESS.: ";
 gets(add);
 obj<<"Reciving Add.: "<<add<<"\t";
 cout<<"ENTER PHONE NUMBER OF RETILAR.:  ";
 gets(ph);
 obj<<"\nPh.no.: "<<ph<<endl;
 cout<<"ENTER AREA PIN CODE.: ";
 gets(pin);
 obj<<"\t\t\tPIN CODE.:"<<pin<<endl;
 obj<<"-----------------------------------------------------------------------\n";
 cout<<"ENTER THE NUMBER OF PRODUCT:  ";
 cin>>nos;
 obj<<"  S.No\tDISCRIPTION\t\tQTY\tRATE\tM.R.P\tSCH.\tAMT.\t\n";
  for(int i=0;i<nos;i++)
 {
  obj<<i+1<<"\t";
  cout<<"\n\nENTER THE NAME OF PRODUCT:  ";
  gets(pname);
  obj<<pname<<"\t\t";
  cout<<"ENTER THE QTY.: ";
  cin>>qty;
  obj<<qty<<"\t";
  cout<<"ENTER THE RATE.: ";
  cin>>rate;
  obj<<rate<<"\t";
  cout<<"ENTER THE M.R.P.: ";
  cin>>mrp;
  obj<<mrp<<"\t";
  cout<<"ENTER THE SCHEME OF THE PRODUCT.: ";
  cin>>sch;
  totsch+=sch;
  obj<<sch<<"\t";
  amt=qty*rate;
  obj<<amt<<endl;
  totamt+=amt;
  cout<<"\n\n\n";
 }
 obj<<endl<<endl<<endl;
  obj<<"------------------------------------------------------------------------------\n";
  obj<<"                                                       TOTAL AMT.: "<<totamt<<endl;
  obj<<"                                                      9% C.G.S.T.: "<<totamt*0.09<<endl;
  obj<<"                                                      9% S.G.S.T.: "<<totamt*0.09<<endl;
  obj<<"                                                          SCHEME.: "<<totsch<<endl;
  obj<<"                                                         NET AMT.: "<<totamt*1.18<<endl;
  obj<<"DISTUBUTER SIGN. WITH STAMP.:                  RETILAR SIGN.:         "<<endl;
  obj<<"------------------------------------------------------------------------------\n";
 obj.close();
 }
};
void add_product()
{
fstream obj;
obj.open("product.dat",ios::out|ios::app);
border();
float mrp,r1;
char proname[100],y;
gotoxy(15,10);
cout<<"Enter the name of product :";
gotoxy(45,10);
gets(proname);
obj<<proname<<"    ";
gotoxy(15,11);
cout<<"Enter the M.R.P :";
gotoxy(40,11);
cin>>mrp;
obj<<mrp<<"                  ";
gotoxy(15,12);
cout<<"Enter the rate :";
gotoxy(40,12);
cin>>r1;
obj<<r1<<"     \n";
obj.close();
}
void view_product()
{
    clrscr();
    char line[100];
    border();
    fstream obj;
    gotoxy(16,8);
    cout<<" PRODUCT NAME       M.R.P      RATE    \n";
    obj.open("product.dat",ios::in);
    int i=0;
    if(obj)
    {
    while(!obj.eof())
    {
     obj.getline(line,100);
     gotoxy(20,10+i);
     cout<<line<<endl;
     i++;
    }
    obj.close();
    }
    else
    {
    clrscr();
    gotoxy(20,8);
    cout<<"Error to opening the file...!!!!";
    getch();
    clrscr();
    product();
    }
}
void product()
{
  clrscr();
  char ch1;
  border();
  gotoxy(30,12);
  cout<<"1) ADD PRODUCT";
  gotoxy(30,13);
  cout<<"2) OUR PRODUCT";
  gotoxy(30,14);
  cout<<"3) MAIN MENU";
  gotoxy(20,20);
  cout<<"Enter your option: ";
  gotoxy(40,20);
  ch1=getch();
  switch(ch1)
  {
  case '0':
  thank();
  break;
   case '1':
   char y;             //add product
   add_product();
   gotoxy(10,20);
   cout<<"Do you want to enter more product(Y/N): ";
   gotoxy(50,20);
   cin>>y;
   for(;y=='y'||y=='Y';)
   {
   add_product();
   gotoxy(10,20);
   cout<<"Do you want to enter more product(Y/N): ";
   gotoxy(50,20);
   cin>>y;
   }
   gotoxy(21,21);
   cout<<"Press any key for product menu....";
   getch();
   product();
   break;
   case '2':	    //our product
   view_product();
   gotoxy(20,20);
   cout<<"Press any key for product menu....";
   getch();
   product();
   break;
   case '3':
   menu();
   break;
   default:            //unkwon
   clrscr();
border();
gotoxy(40,15);
cout<<"****** WRONG CHOICE *******";
getche();
clrscr();
product();

   break;
  }
  getche();
}
void newag()
{
fstream obj1;
obj1.open("agent.dat",ios::out|ios::app);
clrscr();
border();

char rname[30],rname2[30],apin[10],mid[20],last[20],agadd[40],uid[18],pho[20],gst[28];
long double age;
gotoxy(10,9);
cout<<"ENTER THE FIRST NAME.: ";
gotoxy(38,9);
gets(rname);
gotoxy(10,10);
cout<<"ENTER THE MIDDEL NAME(.Opt).: ";
gotoxy(50,10);
gets(mid);
gotoxy(10,11);
cout<<"ENTER THE LAST NAME.: ";
gotoxy(45,11);
gets(last);
obj1<<endl<<rname;
strcpy(rname2,rname);
strcat(rname,".dat");
fstream obj;
obj.open(rname,ios::out|ios::trunc);
obj<<"NAME.: "<<rname2<<mid<<" "<<last<<"\n";
gotoxy(10,12);
cout<<"ENTER THE AGE.: ";
gotoxy(38,12);
cin>>age;
obj<<"AGE.: "<<age<<"\n";
gotoxy(10,13);
cout<<"ENTER THE PHONE NUMBER.: ";
gotoxy(38,13);
gets(pho);
obj<<"PHONE NO.: "<<pho<<"\n";
gotoxy(10,14);
cout<<"ENTER THE ADDRESS.: ";
gotoxy(38,14);
gets(agadd);
obj<<"ADDRESS.: "<<agadd<<"\n";
gotoxy(10,15);
cout<<"ENTER THE GST NO.(opt.).: ";
gotoxy(38,15);
gets(gst);
obj<<"GST-NO.:"<<gst<<"\n";
gotoxy(10,16);
cout<<"ENTER THE UID-NO.: ";
gotoxy(38,16);
gets(uid);
obj<<"UID CARD.: "<<uid<<"\n";
gotoxy(10,17);
cout<<"ENTER THE SHOP AREA PIN CODE.: ";
gotoxy(38,17);
gets(apin);
obj<<"AREA PIN.: "<<apin<<"\n";
obj.close();
obj1.close();
}
void agent()
{        char op;
 border();
 gotoxy(30,10);
 cout<<"1) NEW AGENT";
 gotoxy(30,11);
 cout<<"2) OUR AGENT";
 gotoxy(30,12);
 cout<<"3) DELETE AGENT";
 gotoxy(30,13);
 cout<<"4) MODIFY AGENT";
 gotoxy(30,14);
 cout<<"5) MAIN MENU";
 gotoxy(20,20);
 cout<<"Enter your option.: ";
 gotoxy(40,20);
 op=getch();
 switch(op)
 {
 case '0':
 thank();
 break;
 case '3':
 border();
 char nam[30],nam2[30];
 gotoxy(10,10);
 cout<<"Enter the name of agent.: ";
 gets(nam);
 strcpy(nam2,nam);
 strcat(nam,".dat");
 remove(nam);
 char in[20];
 fstream fo;
 fstream fi;
 fi.open("agent1.dat",ios::out);
 fo.open("agent.dat",ios::in);
 while(!fo.eof())
 {
 fo>>in;
 if(!strcmpi(nam2,in)==0)
 fi<<in<<endl;
 }
 fo.close();
 fi.close();
 remove("agent.dat");
 rename("agent1.dat","agent.dat");
 gotoxy(10,20);
 cout<<"Press any key for agent menu...";
 getch();
 clrscr();
 agent();
 break;
   case '1':
   newag();
   char y1;             //add product
   gotoxy(10,20);
   cout<<"Do you want to enter more agent(Y/N): ";
   gotoxy(50,20);
   cin>>y1;
   for(;y1=='y'||y1=='Y';)
   {
   newag();
   gotoxy(10,20);
   cout<<"Do you want to enter more product(Y/N): ";
   gotoxy(50,20);
   cin>>y1;
   }
   gotoxy(21,21);
   cout<<"Press any key for agent menu....";
   getch();
   agent();
   break;
   case '4':
   clrscr();
   border();
   char nm[40],jk[30],ch1[30];
   char rname[30],rname2[30],apin[10],mid[20],last[20],agadd[40],uid[18],pho[20],gst[28];
long double age;
    char nm1[30];
   int flag=0;
   gotoxy(10,7);
   cout<<"ENTER THE NAME.: ";
   gets(nm);
   fstream o1;
   fstream o2;
   o1.open("agent.dat",ios::in);
   while(!o1.eof())
   {
   o1>>jk;
   if(strcmpi(nm,jk)==0)
   {
   flag=1;
   break;
   }
   }
   o1.close();
   if(flag==1)
   {
    strcpy(nm1,nm);
    strcat(nm,".dat");
    remove(nm);

    gotoxy(10,9);
cout<<"ENTER THE FIRST NAME.: ";
gotoxy(38,9);
gets(rname);
strcpy(rname2,rname);
strcat(rname2,".dat");
o2.open(rname2,ios::out|ios::app|ios::trunc);
gotoxy(10,10);
cout<<"ENTER THE MIDDEL NAME(.Opt).: ";
gotoxy(50,10);
gets(mid);
gotoxy(10,11);
cout<<"ENTER THE LAST NAME.: ";
gotoxy(45,11);
gets(last);
o2<<"NAME.: "<<rname<<" "<<mid<<" "<<last<<"\n";
gotoxy(10,12);
cout<<"ENTER THE AGE.: ";
gotoxy(38,12);
cin>>age;
o2<<"AGE.: "<<age<<"\n";
gotoxy(10,13);
cout<<"ENTER THE PHONE NUMBER.: ";
gotoxy(38,13);
gets(pho);
o2<<"PHONE NO.: "<<pho<<"\n";
gotoxy(10,14);
cout<<"ENTER THE ADDRESS.: ";
gotoxy(38,14);
gets(agadd);
o2<<"ADDRESS.: "<<agadd<<"\n";
gotoxy(10,15);
cout<<"ENTER THE GST NO.(opt.).: ";
gotoxy(38,15);
gets(gst);
o2<<"GST-NO.:"<<gst<<"\n";
gotoxy(10,16);
cout<<"ENTER THE UID-NO.: ";
gotoxy(38,16);
gets(uid);
o2<<"UID CARD.: "<<uid<<"\n";
gotoxy(10,17);
cout<<"ENTER THE SHOP AREA PIN CODE.: ";
gotoxy(38,17);
gets(apin);
o2<<"AREA PIN.: "<<apin<<"\n";
o2.close();
gotoxy(10,20);
cout<<"Press any key to continue...";
getch();
fstream oo;
fstream ooo;
ooo.open("atemp.dat",ios::in|ios::out|ios::app|ios::trunc);
oo.open("agent.dat",ios::in|ios::out|ios::app);
while(!oo.eof())
{
 oo>>ch1;
 if(strcmpi(ch1,nm1)!=0)
 {ooo<<endl<<ch1;}

}
ooo<<endl<<rname;
oo.close();
ooo.close();
remove("agent.dat");
rename("atemp.dat","agent.dat");
agent();
 }
   else
   {
   clrscr();
   border();
   gotoxy(10,15);
   cout<<"S O R R Y   N O   S U C H   A G E N T   E X I S T S ...";
   getch();
   agent();
   }
   break;
   case '5':
   clrscr();
   menu();
   break;
   case '2':
   clrscr();
   border();
   fstream obj;
   char line[30],agn[30],line1[200];
   obj.open("agent.dat",ios::in|ios::app|ios::out);
   gotoxy(40,10);
   cout<<"NAME\n";
   int i=11;
   while(!obj.eof())
   {
   obj>>line;
   gotoxy(20,i);
   cout<<line<<endl;
   i++;
   }
   gotoxy(10,20);
   cout<<"Enter the agent name.: ";
   char file_name[100];
gotoxy(35,20);
cin>>file_name;
strcat(file_name,".dat");
ifstream f;
char name[100];
f.open(file_name,ios::in);
if(f)
{
clrscr();
border();
int i1=11;
while(!f.eof())
{
f.getline(name,100);
gotoxy(20,i1);
cout<<name<<endl;
i1++;
}
 gotoxy(10,20);
 cout<<"Press any key for agent menu....";
 getche();
 clrscr();
 agent();
   obj.close();
   }
   else
   {
   cout<<"\n\n\n\t\tno such agent exist";
   cout<<"\n\t\tPress any key for agent menu...";
   getch();
   clrscr();
   agent();
   }
   break;
   default:
   clrscr();
border();
gotoxy(30,15);
cout<<"****** WRONG CHOICE *******";
getche();
clrscr();
agent();

   break;
 }
}
void newup()
{
clrscr();
border();
ofstream obj1;
ofstream obj2;
obj1.open("saiuser.txt",ios::out);
obj2.open("saipass.txt",ios::out);
char p1[20],p2[20],user[20];
gotoxy(15,9);
cout<<"ENTER NEW USERNAME.: ";
gotoxy(38,9);
gets(user);
gotoxy(15,11);
cout<<"ENTER NEW PASSWORD.: ";
gotoxy(38,11);
gets(p1);
gotoxy(15,13);
cout<<"CONFIRM PASSWORD.: ";
gotoxy(38,13);
gets(p2);
char ch;
if(strcmp(p1,p2)==0)
{
obj1<<user;
obj2<<p1;
obj1.close();
obj2.close();
gotoxy(15,20);
cout<<"Press any key...";
getch();
clrscr();
main();
}
else
{
clrscr();
gotoxy(14,30);
cout<<"PASSWORD ARE NOT MATCH RE-ENTER...";
getch();
newup();
}

}
void menu()
{
char ch;
border();
gotoxy(30,10);
cout<<"1) PRODUCT INFO";
gotoxy(30,11);
cout<<"2) AGENT INFO";
gotoxy(30,12);
cout<<"3) BILLING";
gotoxy(30,13);
cout<<"4) CONTACT";
gotoxy(30,14);
cout<<"5) CHANGE PASSWORD";
gotoxy(30,15);
cout<<"6) DELETE YOUR ACCOUNT";
gotoxy(30,16);
cout<<"7) LOGOUT";
gotoxy(20,20);
cout<<"Enter your option(1-7): ";
gotoxy(40,20);
ch=getch();

switch(ch)
{
case '1':
product();			//PRODUCT
break;
case '2':	                        //AGENT
agent();
break;
case '3':
_setcursortype(0);			//BILLING
char line[200];
clrscr();
billing b;//object of billing
b.bill();
cout<<"press any key to continue......";
getche();
clrscr();
gotoxy(1,8);
cout<<"P L E A S E   W A I T   W H I L E   P R O C E S S I N G   Y O U   D A T A ...";
for(int lm=0;lm<=72;lm++)
{
gotoxy(lm+2,10);
cout<<(char)219;
delay(60);
}
gotoxy(10,20);
cout<<"Press any key to procced...";
getch();
clrscr();
fstream obj;
obj.open("bill.dat",ios::in);
while(!obj.eof())
{
obj.getline(line,200);
cout<<line<<endl;
}
obj.close();
char p;
getch();
cout<<"Press P for print this bill else any key for main menu...\n ";
p=getch();
if(p=='p'||p=='P')
{
system("notepad /p bill.dat");
cout<<"Press any key for main menu....";
getch();
menu();
}
else
{
getch();
menu();
}
break;
case '4':                         //CONTACT
contact();
break;
case '5':
border();
fstream obj12,obj11;
obj12.open("saipass.txt",ios::in);
obj11.open("saipass1.txt",ios::out);
char line1[20];
while(!obj12.eof())
{
 obj12>>line1;
}
char p1[20],p2[20],p3[20];
gotoxy(15,11);
cout<<"ENTER THE OLD PASSWORD.:";
gets(p1);
if(strcmp(p1,line1)==0)
{
gotoxy(15,13);
cout<<"ENTER THE NEW PASSWORD.:";
gotoxy(40,13);
gets(p2);
if(strcmp(p2," ")==0)
{
gotoxy(10,22);
cout<<" P A S S W O R D   F E I L D   E M P T Y ...";
getch();
menu();
}
else
{
gotoxy(15,15);
cout<<"CONFIRM THE PASSWORD  .:";
gotoxy(40,15);
gets(p3);
if(strcmp(p2,p3)==0)
{
obj11<<p2;
obj11.close();
obj12.close();
remove("saipass.txt");
rename("saipass1.txt","saipass.txt");
getch();
clrscr();
main();
}

else
{
 clrscr();
 gotoxy(10,15);
 cout<<" P A S S W O R D   M I S S M A T C H . . . . . ";
 getch();
 menu();
}
}
}
else
{
 clrscr();
 gotoxy(10,15);
 cout<<" P A S S W O R D   I N C O R R E C T .....";
 getch();
 menu();
}
break;
case '6':
remove("saiuser.txt");
remove("saipass.txt");
clrscr();
gotoxy(10,15);
cout<<" Y O U R   A C C O U N T   H A S   B E E N  D E L E T E D ...";
getch();
main();
break;
case '7':
main();
break;
case '0':
clrscr();
thank();
break;
default:
clrscr();
border();
gotoxy(40,15);
cout<<"****** WRONG CHOICE *******";
getche();
clrscr();
menu();
break;
}
getche();
}
void auth()
{
clrscr();
_setcursortype(0);
gotoxy(15,15);
cout<<" <<< A U T H E N T I C A T I O N >>>";
gotoxy(15,17);
cout<<"P L E A S E   W A I T   W H I L E   L O A D I N G ";
delay(1000);
gotoxy(64,17);
cout<<".";
delay(1000);
gotoxy(65,17);
cout<<".";
delay(1000);
gotoxy(66,17);
cout<<".";
delay(1000);

}
void main()
{
welcome();
fstream obj1;
fstream obj2;
char line1[20],line2[20];
obj1.open("saiuser.txt",ios::in);
obj2.open("saipass.txt",ios::in);
if(!obj1 && !obj2)
{
newup();
}
else
{
while(!obj1.eof())
{ obj1>>line1;
}
while(!obj2.eof())
{ obj2>>line2;
}
char username[20],password[20];
clrscr();
border();
gotoxy(15,6);
cout<<"------------------------------------------\n";
gotoxy(35,7);
cout<<"LOGIN\n";
gotoxy(15,8);
cout<<"------------------------------------------";
for(int i=6;i<=17;i++)
{
gotoxy(14,i);
cout<<"|";
}
for(i=6;i<=17;i++)
{
gotoxy(57,i);
cout<<"|";
}
gotoxy(15,17);
cout<<"-------------------------------------------";
gotoxy(20,10);
cout<<"Username.:";
gotoxy(20,12);
cout<<"Password.:";
gotoxy(32,10);
gets(username);
int j=0,t=32;
 char ch,pwd[40];
 while(1)
 {
   ch=getch();
   if(ch==13)
   {
   pwd[j]='\0';
   break;
   }
   else
   {
   if(ch==8)
   {
     if(j>0)
     {j--;
     gotoxy(t,12);
     cout<<"\b \b";
     t--;
     }
   }
   else
   {
   pwd[j]=ch;
   gotoxy(t,12);
   cout<<"*";
   t++;
   j++;
   }
   }
 }
 if((strcmp(username,line1)==0)&&(strcmp(pwd,line2)==0))
 {
  auth();
  clrscr();
  menu();
 }
 else
 {
  auth();
  clrscr();
  char ch;
  gotoxy(12,15);
  cout<<"<<< I N C O R R E C T   P A S S W O R D   O R   U S E R N A M E >>>";
  gotoxy(10,20);
  cout<<"TO RE-ENTER THE PASSWORD PRESS Y ELSE N...";
  ch=getch();
  if(ch=='y'||ch=='Y')
  {
   getch();
   clrscr();
   main();
  }
  else
  {
    clrscr();
    thank();
    getch();
  }
 }
}

}