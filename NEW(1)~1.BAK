#include<conio.h>
#include<iostream.h>
#include<math.h>
#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<dos.h>
#include<string.h>
#include<fstream.h>

#include"G:\prakt\1.h"
#include"G:\prakt\2.h"

//=====================================================
void menu1(int,int);
void menu3(int,int);
void graphismenu(int, int);
void jim(int,int);
void jim2(int,int);
void zastavka(int,int);
//=============rybaska=================================
void short1(int,int);
void short2(int,int);
void short3(int,int);
//=====================================================
class Button
{ private:
   int x,y,w,h; //w - dlina knopki, h - visota knopki
   char* s; // nadpis na knopke
  public:
   int ButtonClick(); //Proverka na nazhatie knopki
   int ButtonClick2();
   int Buttonobl(int,int,int,int);//ECLI POPAL B OBLAST
   void BShow(); //Otobrazhenie knopki
   Button(int, int, int, int, char*); //Peredacha parametrov
   Button(); //Esli ih net

};
int Button::Buttonobl(int x,int y,int w,int h)
{
   mousestate ms;
   getmousestate(ms);
   if(ms.x>=x && ms.x<=x+w && ms.y>=y && ms.y<=y+h) return 1;
   else return 0;

}
Button::Button(int x1,int y1,int w1,int h1,char* s1)
{
   x=x1; y=y1; w=w1; h=h1; s=s1;
}
Button::Button(){x=0;y=0;w=0;h=0; s=0;}
int Button::ButtonClick()
{
   mousestate ms;
   getmousestate(ms);
   if(ms.x>=x && ms.x<=x+w && ms.y>=y && ms.y<=y+h && ms.b==1) return 1;
   else return 0;
}
int Button::ButtonClick2()
{
mousestate ms;
   getmousestate(ms);
   if(ms.x>=x && ms.x<=x+w && ms.y>=y && ms.y<=y+h && ms.b==4) return 1;
   else return 0;
}
void Button::BShow()
{
   rectangle(x,y,x+w,y+h);
   outtextxy((x+x+w)/2-strlen(s)*3.0, (y+y+h)/2, s);
}
//=================================
//========================class Game====================
class game
{
private:
int x,y,sum,kol;
public:
game();
void ii(int,int,int,int);
void score();
void newkarta(int,int,int,int);
int victori();
int defeat();
int or();
int max();
};
game::game():x(0),y(0),sum(0)
{}
//////////////////////////////////////
void game::ii(int x1,int y1,int x2,int y2)
{
randomize();
int x=0,s=0;
int s1=random(8);
y1-=250;
switch(s1)
{
case 0:s1=6;s+=s1;Karta6ch(x1,y1);break;
case 1:s1=7;s+=s1;Karta7ch(x1,y1);break;
case 2:s1=8;s+=s1;Karta8ch(x1,y1);break;
case 3:s1=9;s+=s1;Karta9ch(x1,y1);break;
case 4:s1=10;s+=s1;Karta10ch(x1,y1);break;
case 5:s1=2;s+=s1;Kartavaletch(x1,y1);break;
case 6:s1=3;s+=s1;Kartadamach(x1,y1);break;
case 7:s1=4;s+=s1;Kartakingch(x1,y1);break;
case 8:s1=11;s+=s1;Kartatusch(x1,y1);break;
//piki
case 9:s1=6;s+=s1;Karta6piki(x1,y1);break;
case 10:s1=7;s+=s1;Karta7piki(x1,y1);break;
case 11:s1=8;s+=s1;Karta8piki(x1,y1);break;
case 12:s1=9;s+=s1;Karta9piki(x1,y1);break;
case 13:s1=10;s+=s1;Karta10piki(x1,y1);break;
case 14:s1=2;s+=s1;Kartavaletpiki(x1,y1);break;
case 15:s1=3;s+=s1;Kartadamapiki(x1,y1);break;
case 16:s1=4;s+=s1;Kartakingpiki(x1,y1);break;
case 17:s1=11;s+=s1;Kartatuspiki(x1,y1);break;
//krest
case 18:s1=6;s+=s1;Karta6krest(x1,y1);break;
case 19:s1=7;s+=s1;Karta7krest(x1,y1);break;
case 20:s1=8;s+=s1;Karta8krest(x1,y1);break;
case 21:s1=9;s+=s1;Karta9krest(x1,y1);break;
case 22:s1=10;s+=s1;Karta10krest(x1,y1);break;
case 23:s1=2;s+=s1;Kartavaletkrest(x1,y1);break;
case 24:s1=3;s+=s1;Kartadamakrest(x1,y1);break;
case 25:s1=4;s+=s1;Kartakingkrest(x1,y1);break;
case 26:s1=11;s+=s1;Kartatuskrest(x1,y1);break;
//bu
case 27:s1=6;s+=s1;Karta6bu(x1,y1);break;
case 28:s1=7;s+=s1;Karta7bu(x1,y1);break;
case 29:s1=8;s+=s1;Karta8bu(x1,y1);break;
case 30:s1=9;s+=s1;Karta9bu(x1,y1);break;
case 31:s1=10;s+=s1;Karta10bu(x1,y1);break;
case 32:s1=2;s+=s1;Kartavaletbu(x1,y1);break;
case 33:s1=3;s+=s1;Kartadamabu(x1,y1);break;
case 34:s1=4;s+=s1;Kartakingbu(x1,y1);break;
case 35:s1=11;s+=s1;Kartatusbu(x1,y1);break;
}
x1+=100;
s1=random(8);
switch(s1)
{
case 0:s1=6;s+=s1;Karta6ch(x1,y1);break;
case 1:s1=7;s+=s1;Karta7ch(x1,y1);break;
case 2:s1=8;s+=s1;Karta8ch(x1,y1);break;
case 3:s1=9;s+=s1;Karta9ch(x1,y1);break;
case 4:s1=10;s+=s1;Karta10ch(x1,y1);break;
case 5:s1=2;s+=s1;Kartavaletch(x1,y1);break;
case 6:s1=3;s+=s1;Kartadamach(x1,y1);break;
case 7:s1=4;s+=s1;Kartakingch(x1,y1);break;
case 8:s1=11;s+=s1;Kartatusch(x1,y1);break;
//piki
case 9:s1=6;s+=s1;Karta6piki(x1,y1);break;
case 10:s1=7;s+=s1;Karta7piki(x1,y1);break;
case 11:s1=8;s+=s1;Karta8piki(x1,y1);break;
case 12:s1=9;s+=s1;Karta9piki(x1,y1);break;
case 13:s1=10;s+=s1;Karta10piki(x1,y1);break;
case 14:s1=2;s+=s1;Kartavaletpiki(x1,y1);break;
case 15:s1=3;s+=s1;Kartadamapiki(x1,y1);break;
case 16:s1=4;s+=s1;Kartakingpiki(x1,y1);break;
case 17:s1=11;s+=s1;Kartatuspiki(x1,y1);break;
//krest
case 18:s1=6;s+=s1;Karta6krest(x1,y1);break;
case 19:s1=7;s+=s1;Karta7krest(x1,y1);break;
case 20:s1=8;s+=s1;Karta8krest(x1,y1);break;
case 21:s1=9;s+=s1;Karta9krest(x1,y1);break;
case 22:s1=10;s+=s1;Karta10krest(x1,y1);break;
case 23:s1=2;s+=s1;Kartavaletkrest(x1,y1);break;
case 24:s1=3;s+=s1;Kartadamakrest(x1,y1);break;
case 25:s1=4;s+=s1;Kartakingkrest(x1,y1);break;
case 26:s1=11;s+=s1;Kartatuskrest(x1,y1);break;
//bu
case 27:s1=6;s+=s1;Karta6bu(x1,y1);break;
case 28:s1=7;s+=s1;Karta7bu(x1,y1);break;
case 29:s1=8;s+=s1;Karta8bu(x1,y1);break;
case 30:s1=9;s+=s1;Karta9bu(x1,y1);break;
case 31:s1=10;s+=s1;Karta10bu(x1,y1);break;
case 32:s1=2;s+=s1;Kartavaletbu(x1,y1);break;
case 33:s1=3;s+=s1;Kartadamabu(x1,y1);break;
case 34:s1=4;s+=s1;Kartakingbu(x1,y1);break;
case 35:s1=11;s+=s1;Kartatusbu(x1,y1);break;
}

//int x3;
if(s<=18)
x1+=100;
{s1=random(8);
switch(s1)
{
case 0:s1=6;s+=s1;Karta6ch(x1,y1);break;
case 1:s1=7;s+=s1;Karta7ch(x1,y1);break;
case 2:s1=8;s+=s1;Karta8ch(x1,y1);break;
case 3:s1=9;s+=s1;Karta9ch(x1,y1);break;
case 4:s1=10;s+=s1;Karta10ch(x1,y1);break;
case 5:s1=2;s+=s1;Kartavaletch(x1,y1);break;
case 6:s1=3;s+=s1;Kartadamach(x1,y1);break;
case 7:s1=4;s+=s1;Kartakingch(x1,y1);break;
case 8:s1=11;s+=s1;Kartatusch(x1,y1);break;
//piki
case 9:s1=6;s+=s1;Karta6piki(x1,y1);break;
case 10:s1=7;s+=s1;Karta7piki(x1,y1);break;
case 11:s1=8;s+=s1;Karta8piki(x1,y1);break;
case 12:s1=9;s+=s1;Karta9piki(x1,y1);break;
case 13:s1=10;s+=s1;Karta10piki(x1,y1);break;
case 14:s1=2;s+=s1;Kartavaletpiki(x1,y1);break;
case 15:s1=3;s+=s1;Kartadamapiki(x1,y1);break;
case 16:s1=4;s+=s1;Kartakingpiki(x1,y1);break;
case 17:s1=11;s+=s1;Kartatuspiki(x1,y1);break;
//krest
case 18:s1=6;s+=s1;Karta6krest(x1,y1);break;
case 19:s1=7;s+=s1;Karta7krest(x1,y1);break;
case 20:s1=8;s+=s1;Karta8krest(x1,y1);break;
case 21:s1=9;s+=s1;Karta9krest(x1,y1);break;
case 22:s1=10;s+=s1;Karta10krest(x1,y1);break;
case 23:s1=2;s+=s1;Kartavaletkrest(x1,y1);break;
case 24:s1=3;s+=s1;Kartadamakrest(x1,y1);break;
case 25:s1=4;s+=s1;Kartakingkrest(x1,y1);break;
case 26:s1=11;s+=s1;Kartatuskrest(x1,y1);break;
//bu
case 27:s1=6;s+=s1;Karta6bu(x1,y1);break;
case 28:s1=7;s+=s1;Karta7bu(x1,y1);break;
case 29:s1=8;s+=s1;Karta8bu(x1,y1);break;
case 30:s1=9;s+=s1;Karta9bu(x1,y1);break;
case 31:s1=10;s+=s1;Karta10bu(x1,y1);break;
case 32:s1=2;s+=s1;Kartavaletbu(x1,y1);break;
case 33:s1=3;s+=s1;Kartadamabu(x1,y1);break;
case 34:s1=4;s+=s1;Kartakingbu(x1,y1);break;
case 35:s1=11;s+=s1;Kartatusbu(x1,y1);break;
}
kol=3;
}
/*
int x2;
if(x<=16)
x2=random(8);
switch(x2)
{
case 0:x=x+6;break;
case 1:x=x+7;break;
case 2:x=x+8;break;
case 3:x=x+9;break;
case 4:x=x+10;break;
case 5:x=x+2;break;
case 6:x=x+3;break;
case 7:x=x+4;break;
case 8:x=x+11;break;
}
*/
x=x+s;
setfillstyle(1,BLACK);
bar(x2-10,y2-20,x2+10,y2-50);
outtextxy(x2-100,y2-40,"score you opponent:");
char str[10];
sprintf(str,"%d",x);
outtextxy(x2-10,y2-50,str);


}

void game::newkarta(int x1,int y1,int x2,int y2)
{
int s1=random(35);
int s=0;
switch(s1)
{
case 0:s1=6;s+=s1;Karta6ch(x1,y1);break;
case 1:s1=7;s+=s1;Karta7ch(x1,y1);break;
case 2:s1=8;s+=s1;Karta8ch(x1,y1);break;
case 3:s1=9;s+=s1;Karta9ch(x1,y1);break;
case 4:s1=10;s+=s1;Karta10ch(x1,y1);break;
case 5:s1=2;s+=s1;Kartavaletch(x1,y1);break;
case 6:s1=3;s+=s1;Kartadamach(x1,y1);break;
case 7:s1=4;s+=s1;Kartakingch(x1,y1);break;
case 8:s1=11;s+=s1;Kartatusch(x1,y1);break;
//piki
case 9:s1=6;s+=s1;Karta6piki(x1,y1);break;
case 10:s1=7;s+=s1;Karta7piki(x1,y1);break;
case 11:s1=8;s+=s1;Karta8piki(x1,y1);break;
case 12:s1=9;s+=s1;Karta9piki(x1,y1);break;
case 13:s1=10;s+=s1;Karta10piki(x1,y1);break;
case 14:s1=2;s+=s1;Kartavaletpiki(x1,y1);break;
case 15:s1=3;s+=s1;Kartadamapiki(x1,y1);break;
case 16:s1=4;s+=s1;Kartakingpiki(x1,y1);break;
case 17:s1=11;s+=s1;Kartatuspiki(x1,y1);break;
//krest
case 18:s1=6;s+=s1;Karta6krest(x1,y1);break;
case 19:s1=7;s+=s1;Karta7krest(x1,y1);break;
case 20:s1=8;s+=s1;Karta8krest(x1,y1);break;
case 21:s1=9;s+=s1;Karta9krest(x1,y1);break;
case 22:s1=10;s+=s1;Karta10krest(x1,y1);break;
case 23:s1=2;s+=s1;Kartavaletkrest(x1,y1);break;
case 24:s1=3;s+=s1;Kartadamakrest(x1,y1);break;
case 25:s1=4;s+=s1;Kartakingkrest(x1,y1);break;
case 26:s1=11;s+=s1;Kartatuskrest(x1,y1);break;
//bu
case 27:s1=6;s+=s1;Karta6bu(x1,y1);break;
case 28:s1=7;s+=s1;Karta7bu(x1,y1);break;
case 29:s1=8;s+=s1;Karta8bu(x1,y1);break;
case 30:s1=9;s+=s1;Karta9bu(x1,y1);break;
case 31:s1=10;s+=s1;Karta10bu(x1,y1);break;
case 32:s1=2;s+=s1;Kartavaletbu(x1,y1);break;
case 33:s1=3;s+=s1;Kartadamabu(x1,y1);break;
case 34:s1=4;s+=s1;Kartakingbu(x1,y1);break;
case 35:s1=11;s+=s1;Kartatusbu(x1,y1);break;
}
sum+=s;
setfillstyle(1,BLACK);
bar(x2-10,y2-20,x2+10,y2-50);
outtextxy(x2-100,y2-50,"you score:");
char str[10];
sprintf(str,"%d",sum);
outtextxy(x2-10,y2-50,str);

}
/*int game::max()
{
if (sum>ii())
return 1;else return 0;
}
*/
int game::victori()
{
if(or())
return 0;
if(defeat())
return 0;
if((sum<=21&&x<=21&&sum>x)||(sum<=21&&x>21))
return 1;else return 0;
}

int game::defeat()
{
if(or())
return 0;
if((sum<=21&&x<=21&&x>sum)||(sum>21&&x<=21))
return 1;else return 0;
}

int game::or()
{
if(x<=21&&sum<=21&&sum==x)
return 1;else return 0;
}




void main()
{
	Button b1(150, 50, 250, 50, "NEW GAME"); //sozdanie knopki;
	Button b2(100, 40, 40, 40, "over");
	clrscr();
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"D:\\BorlandC\\BGI");
	int x=150,y=50;
	MShow();
	randomize();
	//Kartavaletbu(x,y);
	//zastavka(x,y);
	menu1(x,y);
	int key;
	while(key!=121||key!=110)
	{
	key=getch();
	switch(key)
	{
		case 121:
		{	clrscr();
			//menu2(x,y);
			setfillstyle(SOLID_FILL,BLACK);
			setbkcolor(BLACK);
			menu3(x,y);
			break;
		}
		case 110:exit(1);
}
}
	getch();
	closegraph();
}

//============menu1=========================
void menu1(int x1,int y1)
{

//setbkcolor(BLACK);
rectangle(x1,y1,x1+250,y1+50);
outtextxy(x1+60,y1+10,"play now press Y");
rectangle(x1,y1+70,x1+250,y1+120);
outtextxy(x1+60,y1+80,"not play press N");
}

///////////////////////////////////////////
void menu3(int x1,int y1)
{
Button b1(x1,y1,250,50,"EXIT"),
b2(x1,y1+70,250,50,"NEW GAME"),
b3(x1,y1+140,250,50,"HELP"),
b4(x1,y1+220,250,50,"OPTIONS"),
b5(x1+320,y1-50,150,50,"number 1"),
b6(x1+320,y1+10,150,50,"number 2"),
b7(x1+320,y1+10,150,50,"number 3");
//////////////////////////////////////////
game g;
mousestate s;
setfillstyle(SOLID_FILL,BLACK);
int i=0;
do
{
char n;
delay(100);
//==================graphismenu======================
graphismenu(x1,y1);
//////////////////////////////////////////////////////
if(b1.ButtonClick())              //exit
	{
	settextstyle(1,0,10);
	outtextxy(30,100,"Good luck");
	delay(1800);
	exit(1);
	}
if(b2.ButtonClick())              //NEW GAME
	{
	clrscr();
	floodfill(1,1,RED);
	setfillstyle(1,WHITE);
	jim(x1,y1);
	}
if(b3.ButtonClick())
{
	clrscr();
	floodfill(1,1,RED);
	jim2(x1,y1);

	break;
}
if(b4.ButtonClick())
{
	clrscr();
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(x1-1,y1-1,BLACK);
	b5.BShow();
	b6.BShow();
	b7.BShow();
	short1(x1,y1);
	short2(x1,y1);
	short3(x1,y1);
	int i=1,sh=0;
	while(i!=0)
	{
	if(b5.ButtonClick())
	{break;sh+=1;}
	if(b6.ButtonClick())
	{break;sh+=2;}
	if(b7.ButtonClick())
	{break;sh+=3;}
	}
	clrscr();
	//break;
}
setfillstyle(SOLID_FILL,BLACK);
floodfill(x1-1,y1-1,BLACK);
b1.BShow();
b2.BShow();
b3.BShow();
b4.BShow();

i++;
}
while(i!=0);
}
//==================jim2===========================
void jim2(int x1,int y1)
{
ifstream fin("g:\\prakt\\sprav.txt");
char str[80]=" ";
int i=1;
while(fin.getline(str,80))
{
cout<<str<<endl;}
//outtextxy(200,150,str);
//cout<<endl;
// }
}
//==================jin============================
void jim(int x1,int y1)
{
game g;
Button b5(x1+250,y1,200,50,"Take another card"),
b6(x1+250,y1+60,200,50,"opening");

b5.BShow();
b6.BShow();
x1=40;
int x2=150;
int y2=50;
	int k=50;
	int i=1;
	int kol=0;

	while(i!=0)
	{
	delay(150);
	if(b5.ButtonClick())
	{
	g.newkarta(x1+k,y1,x2,y2);
	k+=100;kol++;//g.ii();
	}
	if(b6.ButtonClick()||kol==6)
	break;
	}
g.ii(x1,y1,x2,y2);

//char str[10];
//sprintf(str,"%d",g.ii());
//outtextxy(x2+50,y2-40,str);
//delay(1500);
	cout<<endl;
	cout<<g.or();
	cout<<g.defeat();
	cout<<g.victori();
delay(1500);

if(g.or())
{
clrscr();
rectangle(x1,y1,x1+150,y1+100);
cout<<g.or()<<endl;
}

if(g.defeat())
{
	clrscr();
	rectangle(x1,y1,x1+250,y1+100);
	outtextxy(x1,y1+50,"YOU DEFEAT");

}

if(g.victori())
{
	clrscr();
	rectangle(x1,y1,x1+250,y1+100);
	outtextxy(x1,y1+50,"YOU VIN");
}
delay(1500);
clrscr();
}


//================Graphismenu======================
void graphismenu(int x1,int y1)
{
 Button b1(x1,y1,250,50,"EXIT");
 Button b2(x1,y1+70,250,50,"NEW GAME");
 Button b3(x1,y1+140,250,50,"HELP") ;
 Button b4(x1,y1+220,250,50,"OPTION");

if(b1.Buttonobl(x1,y1,250,50))
{
setfillstyle(SOLID_FILL,RED);
line(x1-20,y1+20,x1-10,y1+20);
moveto(x1-10,y1+20);
lineto(x1-15,y1+15);
moveto(x1-10,y1+20);
lineto(x1-15,y1+25);
bar(x1+10,y1+10,x1+240,y1+40);
}
if(!b1.Buttonobl(x1,y1,250,50))
{
setfillstyle(SOLID_FILL,BLACK);
bar(x1+10,y1+10,x1+240,y1+40);
bar(x1-20,y1+15,x1-10,y1+25);
}
/////////////////////////////////////////

if(b2.Buttonobl(x1,y1+70,250,50))
{
setfillstyle(SOLID_FILL,RED);
line(x1-20,y1+90,x1-10,y1+90);
moveto(x1-10,y1+90);
lineto(x1-15,y1+85);
moveto(x1-10,y1+90);
lineto(x1-15,y1+95);
bar(x1+10,y1+80,x1+240,y1+110);

}
if(!b2.Buttonobl(x1,y1+70,250,50))
{
setfillstyle(SOLID_FILL,BLACK);
bar(x1+10,y1+80,x1+240,y1+110);
bar(x1-20,y1+85,x1-10,y1+95);
}

//////////////////////////////////////////////////
if(b3.Buttonobl(x1,y1+140,250,50))
{
setfillstyle(SOLID_FILL,RED);
line(x1-20,y1+160,x1-10,y1+160);
moveto(x1-10,y1+160);
lineto(x1-15,y1+155);
moveto(x1-10,y1+160);
lineto(x1-15,y1+165);
bar(x1+10,y1+150,x1+240,y1+180);
}
if(!b3.Buttonobl(x1,y1+140,250,50))
{
setfillstyle(SOLID_FILL,BLACK);
bar(x1+10,y1+150,x1+240,y1+180);
bar(x1-20,y1+155,x1-10,y1+180);
}
//////////////////////////////////////////////////
if(b4.Buttonobl(x1,y1+220,250,50))
{
setfillstyle(SOLID_FILL,RED);
line(x1-20,y1+240,x1-10,y1+240);
moveto(x1-10,y1+240);
lineto(x1-15,y1+235);
moveto(x1-10,y1+240);
lineto(x1-15,y1+245);
bar(x1+10,y1+230,x1+240,y1+260);
}
if(!b4.Buttonobl(x1,y1+220,250,50))
{
setfillstyle(SOLID_FILL,BLACK);
bar(x1+10,y1+230,x1+240,y1+260);
bar(x1-20,y1+235,x1-10,y1+245);
}
}
////////////////////////////////////////////////////////
//==================zastavka============================
void zastavka(int x1,int y1)
{
int k=1;
for(int i=1;i<=49;i++)
{
Karta10ch((x1-100)+k,(y1-300)+k);
delay(30);
Karta10ch(((x1+100)+350)-k,((y1+300)-600)+k);
k+=10;
delay(30);
}
delay(1500);
clrscr();
setfillstyle(1,BLACK);
floodfill(1,1,BLACK);
settextstyle(1,0,10);
outtextxy(x1-50,y1,"X");
delay(900);
outtextxy(x1+10,y1,"PRO");
delay(900);
outtextxy(x1+20,y1+90,"MAGIC");
delay(900);
outtextxy(x1+85,y1+180,"CARD");
delay(1200);
settextstyle(1,0,5);
outtextxy(x1+270,y1+300,"V-0.1");
delay(900);
settextstyle(0,0,0);
clrscr();
setfillstyle(1,BLACK);
floodfill(1,1,BLACK);
}
//////////////////////////////////////////////////////////
/////////////////////rybashka/////////////////////////////
void short1(int x1,int y1)
{
setfillstyle(8,15);
bar(x1+250,y1-50,x1+300,y1);
}

void short2(int x1,int y1)
{
setfillstyle(8,15);
bar(x1+250,y1+10,x1+300,y1+60);
}
void short3(int x1,int y1)
{
setfillstyle(8,14);
bar(x1+250,y1+70,x1+300,y1+120);
}

