#include<conio.h>
#include<iostream.h>
#include<math.h>
#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<dos.h>
//===========mouse=================
void mouse();
int mousecoord1(int,int,int,int);
int mousecoord2(int,int,int,int);
int mousecoord3(int,int,int,int);
int mousecoord4(int,int,int,int);
int count();
void mStatus();
void mousemove(int,int);
//==================================
//==============KARTU===============
void Karta6ch(int,int);
void Karta7ch(int,int);
void Karta8ch(int,int);
void Karta9ch(int,int);
void Karta10ch(int,int);
void Kartakingch(int,int);
void Kartatusch(int,int);

void Karta6piki(int,int);
void Karta7piki(int,int);
void Karta8piki(int,int);
void Karta9piki(int,int);
void Karta10piki(int,int);
void Kartakingpiki(int,int);
void Kartatuspiki(int,int);

void Karta6krest(int,int);
void Karta7krest(int,int);
void Karta8krest(int,int);
void Karta9krest(int,int);
void Karta10krest(int,int);
void Kartakingkrest(int,int);
void Kartatuskrest(int,int);

void Karta6bu(int,int);
void Karta7bu(int,int);
void Karta8bu(int,int);
void Karta9bu(int,int);
void Karta10bu(int,int);
void Kartakingbu(int,int);
void Kartatusbu(int,int);

void menu1(int,int);
void menu2(int,int);
void menu3(int,int);

void ii();
void igrok(int,int,int);

void main()
{
	clrscr();
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"D:\\BorlandC\\BGI");
	int x=150,y=50;
	//======================
	////////////////////////
	mouse();
	randomize();
	mousemove(0,0);
	menu1(x,y);
	//settextstyle(1,HORIZ_DIR, 2);
char ch;
cin>>ch;
switch(ch)
{
case 'Y':
{clrscr();
//menu2(x,y);
setfillstyle(SOLID_FILL,RED);
floodfill(x-1,y-1,RED);
rectangle(x,y,x+250,y+50);
	outtextxy(x+100,y+10,"EXIT");
rectangle(x,y+70,x+250,y+120);
	outtextxy(x+90,y+80,"NEW GAME");
rectangle(x,y+140,x+250,y+200);
	outtextxy(x+100,y+150,"Help");
rectangle(x,y+220,x+250,y+280);
	outtextxy(x+90,y+235,"Options");

menu3(x,y);
break;}
case 'N':exit(1);
}

	getch();
	closegraph();
}
//============menu1=========================
void menu1(int x1,int y1)
{

setbkcolor(RED);
rectangle(x1,y1,x1+250,y1+50);

outtextxy(x1+60,y1+10,"play now press Y");
rectangle(x1,y1+70,x1+250,y1+120);
outtextxy(x1+60,y1+80,"not play press N");

}

//==============menu2=======================


/*void menu2(int x1,int y1)
{
setfillstyle(SOLID_FILL,RED);
floodfill(x1-1,y1-1,RED);
rectangle(x1,y1,x1+250,y1+50);
	outtextxy(x1+100,y1+10,"EXIT");
rectangle(x1,y1+70,x1+250,y1+120);
	outtextxy(x1+90,y1+80,"NEW GAME");
rectangle(x1,y1+140,x1+250,y1+200);
	outtextxy(x1+100,y1+150,"Help");
rectangle(x1,y1+220,x1+250,y1+280);
	outtextxy(x1+90,y1+235,"Options");
menu3(x1,y1);
}
*/
void menu3(int x1,int y1)
{
do
{
setfillstyle(SOLID_FILL,RED);
floodfill(x1-1,y1-1,RED);
rectangle(x1,y1,x1+250,y1+50);
	outtextxy(x1+100,y1+10,"EXIT");
rectangle(x1,y1+70,x1+250,y1+120);
	outtextxy(x1+90,y1+80,"NEW GAME");
rectangle(x1,y1+140,x1+250,y1+200);
	outtextxy(x1+100,y1+150,"Help");
rectangle(x1,y1+220,x1+250,y1+280);
	outtextxy(x1+90,y1+235,"Options");
char n;
if(mousecoord1(x1,y1,x1+250,y1+50))              //NASTROYKI
	{
	exit(1);
	}
if(mousecoord2(x1,y1+70,x1+250,y1+120))              //NEW GAME
	{
	cout<<mousecoord2(x1,y1+70,x1+250,y1+120);
	clrscr();
	floodfill(1,1,RED);
	setfillstyle(1,WHITE);
	//rectangle(x1,y1,x1+20,y1+20);
	//int k=x1,y1,x1+20,y1+20;
	igrok(x1,y1,0);
	//ii();
	char n;
	cin>>n;
	if(n=='e')
	{clrscr();continue;}

	}
if(mousecoord3(x1,y1+140,x1+250,y1+200))
{
	cout<<mousecoord3(x1,y1+140,x1+250,y1+200);
	clrscr();
	floodfill(1,1,RED);
	circle(12,12,15);break;
}
if(mousecoord4(x1,y1+220,x1+250,y1+280))
{
	cout<<mousecoord4(x1,y1+220,x1+250,y1+280);
	clrscr();
	floodfill(1,1,RED);
	circle(12,12,15);break;
}
floodfill(x1-1,y1-1,RED);
rectangle(x1,y1,x1+250,y1+50);
	outtextxy(x1+100,y1+10,"EXIT");
rectangle(x1,y1+70,x1+250,y1+120);
	outtextxy(x1+90,y1+80,"NEW GAME");
rectangle(x1,y1+140,x1+250,y1+200);
	outtextxy(x1+100,y1+150,"Help");
rectangle(x1,y1+220,x1+250,y1+280);
	outtextxy(x1+90,y1+235,"Options");

}
while(!mousecoord1(x1,y1,x1+250,y1+50));
}
//================game============================
void igrok(int x1,int y1,int k1)
{
clrscr();
setfillstyle(SOLID_FILL,RED);
floodfill(x1-1,y1-1,RED);

int s1=random(35);
int s=0;
switch(s1)
{
case 0:s1=6;s+=s1;Karta6ch(x1,y1);break;
case 1:s1=7;s+=s1;Karta7ch(x1,y1);break;
case 2:s1=8;s+=s1;Karta8ch(x1,y1);break;
case 3:s1=9;s+=s1;Karta9ch(x1,y1);break;
case 4:s1=10;s+=s1;Karta10ch(x1,y1);break;
case 5:s1=2;s+=s1;break;
case 6:s1=3;s+=s1;break;
case 7:s1=4;s+=s1;Kartakingch(x1,y1);break;
case 8:s1=11;s+=s1;Kartatusch(x1,y1);break;
//piki
case 9:s1=6;s+=s1;Karta6piki(x1,y1);break;
case 10:s1=7;s+=s1;Karta7piki(x1,y1);break;
case 11:s1=8;s+=s1;Karta8piki(x1,y1);break;
case 12:s1=9;s+=s1;Karta9piki(x1,y1);break;
case 13:s1=10;s+=s1;Karta10piki(x1,y1);break;
case 14:s1=2;s+=s1;break;
case 15:s1=3;s+=s1;break;
case 16:s1=4;s+=s1;Kartakingpiki(x1,y1);break;
case 17:s1=11;s+=s1;Kartatuspiki(x1,y1);break;
//krest
case 18:s1=6;s+=s1;Karta6krest(x1,y1);break;
case 19:s1=7;s+=s1;Karta7krest(x1,y1);break;
case 20:s1=8;s+=s1;Karta8krest(x1,y1);break;
case 21:s1=9;s+=s1;Karta9krest(x1,y1);break;
case 22:s1=10;s+=s1;Karta10krest(x1,y1);break;
case 23:s1=2;s+=s1;break;
case 24:s1=3;s+=s1;break;
case 25:s1=4;s+=s1;Kartakingkrest(x1,y1);break;
case 26:s1=11;s+=s1;Kartatuskrest(x1,y1);break;
//bu
case 27:s1=6;s+=s1;Karta6bu(x1,y1);break;
case 28:s1=7;s+=s1;Karta7bu(x1,y1);break;
case 29:s1=8;s+=s1;Karta8bu(x1,y1);break;
case 30:s1=9;s+=s1;Karta9bu(x1,y1);break;
case 31:s1=10;s+=s1;Karta10bu(x1,y1);break;
case 32:s1=2;s+=s1;break;
case 33:s1=3;s+=s1;break;
case 34:s1=4;s+=s1;Kartakingbu(x1,y1);break;
case 35:s1=11;s+=s1;Kartatusbu(x1,y1);break;
}
}

void ii()
{
int x=0;
int x1=random(8);
switch(x1)
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

x1=random(8);
switch(x1)
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
//int x3;
if(x<=18)
x1=random(8);
switch(x1)
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
char str[10];
sprintf(str,"%d",x);
outtextxy(50,100,str);
}




//============karta===========================
//============karta6ch===========================
void Karta6ch(int x1,int y1)
{

setfillstyle(1,WHITE);
rectangle(x1-50,y1+250,x1+40,y1+380);
outtextxy(x1-40,y1+260,"6");
int dy=40;
int dx=30;
x1=x1-48;
y1=y1-15;
for(int i=1;i<=3;i++)
{

for(int j=1;j<=2;j++)
{
pieslice((x1-5)+dx*j,(y1+250)+dy*i,0,360,5);
pieslice((x1+0)+dx*j,(y1+253)+dy*i,0,360,5);
pieslice((x1+5)+dx*j,(y1+250)+dy*i,0,360,5);
}
}
pieslice((x1+20)+dx,(y1+269)+dy,0,360,5);
pieslice((x1+15)+dx,(y1+272)+dy,0,360,5);
pieslice((x1+10)+dx,(y1+269)+dy,0,360,5);

}

//============karta7ch===========================
void Karta7ch(int x1,int y1)
{
setfillstyle(1,WHITE);
rectangle(x1-50,y1+250,x1+40,y1+380);
outtextxy(x1-40,y1+260,"7");

int dy=40;
int dx=30;
x1=x1-48;
y1=y1-15;
for(int i=1;i<=3;i++)
{

for(int j=1;j<=2;j++)
{
pieslice((x1-5)+dx*j,(y1+250)+dy*i,0,360,5);
pieslice((x1+0)+dx*j,(y1+253)+dy*i,0,360,5);
pieslice((x1+5)+dx*j,(y1+250)+dy*i,0,360,5);
}
}
pieslice((x1+20)+dx,(y1+269)+dy,0,360,5);
pieslice((x1+15)+dx,(y1+272)+dy,0,360,5);
pieslice((x1+10)+dx,(y1+269)+dy,0,360,5);

pieslice((x1-22)+dx,(y1+250)+dy,0,360,2);
pieslice((x1-20)+dx,(y1+252)+dy,0,360,2);
pieslice((x1-18)+dx,(y1+250)+dy,0,360,2);

}
//====================karta8ch==================
void Karta8ch(int x1,int y1)
{

setfillstyle(1,WHITE);
rectangle(x1-50,y1+250,x1+40,y1+380);
outtextxy(x1-40,y1+260,"8");
int dy=30;
int dx=30;
x1=x1-48;
y1=y1-10;
for(int i=1;i<=4;i++)
{

for(int j=1;j<=2;j++)
{
pieslice((x1-5)+dx*j,(y1+250)+dy*i,0,360,5);
pieslice((x1+0)+dx*j,(y1+253)+dy*i,0,360,5);
pieslice((x1+5)+dx*j,(y1+250)+dy*i,0,360,5);
}
}

pieslice((x1-22)+dx,(y1+250)+dy,0,360,2);
pieslice((x1-20)+dx,(y1+252)+dy,0,360,2);
pieslice((x1-18)+dx,(y1+250)+dy,0,360,2);


}
//====================karta9ch==================
void Karta9ch(int x1,int y1)
{

setfillstyle(1,WHITE);
rectangle(x1-50,y1+250,x1+40,y1+380);
outtextxy(x1-40,y1+260,"9");
int dy=30;
int dx=30;
x1=x1-48;
y1=y1-10;
for(int i=1;i<=4;i++)
{

for(int j=1;j<=2;j++)
{
pieslice((x1-5)+dx*j,(y1+250)+dy*i,0,360,5);
pieslice((x1+0)+dx*j,(y1+253)+dy*i,0,360,5);
pieslice((x1+5)+dx*j,(y1+250)+dy*i,0,360,5);
}
}
pieslice((x1+20)+dx,(y1+295)+dy,0,360,5);
pieslice((x1+15)+dx,(y1+298)+dy,0,360,5);
pieslice((x1+10)+dx,(y1+295)+dy,0,360,5);


pieslice((x1-22)+dx,(y1+250)+dy,0,360,2);
pieslice((x1-20)+dx,(y1+252)+dy,0,360,2);
pieslice((x1-18)+dx,(y1+250)+dy,0,360,2);

}


//====================karta10ch==================
void Karta10ch(int x1,int y1)
{

setfillstyle(1,WHITE);
rectangle(x1-50,y1+250,x1+40,y1+380);
outtextxy(x1-45,y1+260,"10");
int dy=30;
int dx=30;
x1=x1-48;
y1=y1-10;
for(int i=1;i<=4;i++)
{

for(int j=1;j<=2;j++)
{
pieslice((x1-5)+dx*j,(y1+250)+dy*i,0,360,5);
pieslice((x1+0)+dx*j,(y1+253)+dy*i,0,360,5);
pieslice((x1+5)+dx*j,(y1+250)+dy*i,0,360,5);
}
}
for(int i1=1;i1<=2;i1++)
{
pieslice((x1+20)+dx,(y1+295)+dy*i1,0,360,5);
pieslice((x1+15)+dx,(y1+298)+dy*i1,0,360,5);
pieslice((x1+10)+dx,(y1+295)+dy*i1,0,360,5);
}

pieslice((x1-22)+dx,(y1+250)+dy,0,360,2);
pieslice((x1-20)+dx,(y1+252)+dy,0,360,2);
pieslice((x1-18)+dx,(y1+250)+dy,0,360,2);

}


//====================kartakingch==================
void Kartakingch(int x1,int y1)
{

setfillstyle(1,WHITE);
rectangle(x1-50,y1+250,x1+40,y1+380);
outtextxy(x1-40,y1+260,"K");
int dy=30;
int dx=30;
x1=x1-48;
y1=y1-10;

pieslice((x1-22)+dx,(y1+250)+dy,0,360,2);
pieslice((x1-20)+dx,(y1+252)+dy,0,360,2);
pieslice((x1-18)+dx,(y1+250)+dy,0,360,2);
//korona
int  d=50;
int dy1=20;
line((x1-28)+d,(y1+280)+dy1,(x1-20)+d,(y1+300)+dy1);
moveto((x1-20)+d,(y1+300)+dy1);
lineto((x1+5)+d,(y1+300)+dy1);
lineto((x1+13)+d,(y1+280)+dy1);
lineto((x1+3)+d,(y1+290)+dy1);
lineto((x1-3)+d,(y1+290)+dy1);
lineto((x1-7)+d,(y1+280)+dy1);
moveto((x1-28)+d,(y1+280)+dy1);
lineto((x1-18)+d,(y1+290)+dy1);
lineto((x1-12)+d,(y1+290)+dy1);
lineto((x1-7)+d,(y1+280)+dy1);
outtextxy((x1-22)+d,(y1+310)+dy1,"KING");

pieslice((x1+43)+dx,(y1+340)+dy,0,360,2);
pieslice((x1+45)+dx,(y1+342)+dy,0,360,2);
pieslice((x1+47)+dx,(y1+340)+dy,0,360,2);
outtextxy(x1+72,y1+357,"K");

}


//====================kartatusch==================
void Kartatusch(int x1,int y1)
{

setfillstyle(1,WHITE);
rectangle(x1-50,y1+250,x1+40,y1+380);
outtextxy(x1-41,y1+258,"A");
int dy=30;
int dx=30;
x1=x1-48;
y1=y1-10;
/*
pieslice((x1-5)+dx*j,(y1+250)+dy*i,0,360,5);
pieslice((x1+0)+dx*j,(y1+253)+dy*i,0,360,5);
pieslice((x1+5)+dx*j,(y1+250)+dy*i,0,360,5);
*/
pieslice((x1+20)+dx,(y1+295)+dy,0,360,5);
pieslice((x1+15)+dx,(y1+298)+dy,0,360,5);
pieslice((x1+10)+dx,(y1+295)+dy,0,360,5);

//Left
pieslice((x1-22)+dx,(y1+250)+dy,0,360,2);
pieslice((x1-20)+dx,(y1+252)+dy,0,360,2);
pieslice((x1-18)+dx,(y1+250)+dy,0,360,2);

//reght
pieslice((x1+43)+dx,(y1+340)+dy,0,360,2);
pieslice((x1+45)+dx,(y1+342)+dy,0,360,2);
pieslice((x1+47)+dx,(y1+340)+dy,0,360,2);
outtextxy(x1+72,y1+357,"A");

}



//====================6piki=====================
void Karta6piki(int x1,int y1)
{
//setfillstyle(1,2);

rectangle(x1-50,y1+250,x1+40,y1+380);
setfillstyle(1,WHITE);
//setcolor(1);
outtextxy(x1-40,y1+260,"6");
int dy=40;
int dx=30;
x1=x1-48;
y1=y1-15;
for(int i=1;i<=3;i++)
{
for(int j=1;j<=2;j++)
{
pieslice((x1-5)+dx*j,(y1+250)+dy*i,0,360,5);
pieslice((x1-0)+dx*j,(y1+245)+dy*i,0,360,5);
pieslice((x1+5)+dx*j,(y1+250)+dy*i,0,360,5);
rectangle((x1-1)+dx*j,(y1+245)+dy*i,(x1+1)+dx*j,(y1+260)+dy*i);
}
}
pieslice((x1-22)+dx,(y1+250)+dy,0,360,2);
pieslice((x1-20)+dx,(y1+247)+dy,0,360,2);
pieslice((x1-18)+dx,(y1+250)+dy,0,360,2);
rectangle((x1-20)+dx,(y1+245)+dy,(x1-20)+dx,(y1+255)+dy);

}

//====================7piki=====================
void Karta7piki(int x1,int y1)
{
//setfillstyle(1,2);

rectangle(x1-50,y1+250,x1+40,y1+380);
setfillstyle(1,WHITE);
//setcolor(1);
outtextxy(x1-40,y1+260,"7");
int dy=40;
int dx=30;
x1=x1-48;
y1=y1-15;
for(int i=1;i<=3;i++)
{
for(int j=1;j<=2;j++)
{
pieslice((x1-5)+dx*j,(y1+250)+dy*i,0,360,5);
pieslice((x1-0)+dx*j,(y1+245)+dy*i,0,360,5);
pieslice((x1+5)+dx*j,(y1+250)+dy*i,0,360,5);
rectangle((x1-1)+dx*j,(y1+245)+dy*i,(x1+1)+dx*j,(y1+260)+dy*i);
}
}
pieslice((x1-22)+dx,(y1+250)+dy,0,360,2);
pieslice((x1-20)+dx,(y1+247)+dy,0,360,2);
pieslice((x1-18)+dx,(y1+250)+dy,0,360,2);
rectangle((x1-20)+dx,(y1+245)+dy,(x1-20)+dx,(y1+255)+dy);
}


//====================8piki=====================
void Karta8piki(int x1,int y1)
{
//setfillstyle(1,2);

rectangle(x1-50,y1+250,x1+40,y1+380);
setfillstyle(1,WHITE);
//setcolor(1);
outtextxy(x1-40,y1+260,"8");
int dy=33;
int dx=40;
x1=x1-58;
y1=y1-15;
for(int i=1;i<=4;i++)
{
for(int j=1;j<=2;j++)
{
pieslice((x1-5)+dx*j,(y1+250)+dy*i,0,360,5);
pieslice((x1-0)+dx*j,(y1+245)+dy*i,0,360,5);
pieslice((x1+5)+dx*j,(y1+250)+dy*i,0,360,5);
rectangle((x1-1)+dx*j,(y1+245)+dy*i,(x1+1)+dx*j,(y1+260)+dy*i);
}
}
pieslice((x1-22)+dx,(y1+260)+dy,0,360,2);
pieslice((x1-20)+dx,(y1+257)+dy,0,360,2);
pieslice((x1-18)+dx,(y1+260)+dy,0,360,2);
rectangle((x1-20)+dx,(y1+260)+dy,(x1-20)+dx,(y1+265)+dy);
}
//====================9piki=====================
void Karta9piki(int x1,int y1)
{
//setfillstyle(1,2);

rectangle(x1-50,y1+250,x1+40,y1+380);
setfillstyle(1,WHITE);
//setcolor(1);
outtextxy(x1-40,y1+260,"9");
int dy=33;
int dx=40;
x1=x1-58;
y1=y1-15;
for(int i=1;i<=4;i++)
{
for(int j=1;j<=2;j++)
{
pieslice((x1-5)+dx*j,(y1+250)+dy*i,0,360,5);
pieslice((x1-0)+dx*j,(y1+245)+dy*i,0,360,5);
pieslice((x1+5)+dx*j,(y1+250)+dy*i,0,360,5);
rectangle((x1-1)+dx*j,(y1+245)+dy*i,(x1+1)+dx*j,(y1+260)+dy*i);
}
}
pieslice((x1+25)+dx,(y1+300)+dy,0,360,5);
pieslice((x1+20)+dx,(y1+295)+dy,0,360,5);
pieslice((x1+15)+dx,(y1+300)+dy,0,360,5);
rectangle((x1+21)+dx,(y1+295)+dy,(x1+19)+dx,(y1+310)+dy);


//LEFT
pieslice((x1-22)+dx,(y1+260)+dy,0,360,2);
pieslice((x1-20)+dx,(y1+257)+dy,0,360,2);
pieslice((x1-18)+dx,(y1+260)+dy,0,360,2);
rectangle((x1-20)+dx,(y1+260)+dy,(x1-20)+dx,(y1+265)+dy);
}


//====================10piki=====================
void Karta10piki(int x1,int y1)
{
//setfillstyle(1,2);

rectangle(x1-50,y1+250,x1+40,y1+380);
setfillstyle(1,WHITE);
//setcolor(1);
outtextxy(x1-40,y1+260,"9");
int dy=33;
int dx=40;
x1=x1-58;
y1=y1-15;
for(int i=1;i<=4;i++)
{
for(int j=1;j<=2;j++)
{
pieslice((x1-5)+dx*j,(y1+250)+dy*i,0,360,5);
pieslice((x1-0)+dx*j,(y1+245)+dy*i,0,360,5);
pieslice((x1+5)+dx*j,(y1+250)+dy*i,0,360,5);
rectangle((x1-1)+dx*j,(y1+245)+dy*i,(x1+1)+dx*j,(y1+260)+dy*i);
}
}

for(int i1=1;i1<=2;i1++)
{
pieslice((x1+25)+dx,(y1+300)+dy*i1,0,360,5);
pieslice((x1+20)+dx,(y1+295)+dy*i1,0,360,5);
pieslice((x1+15)+dx,(y1+300)+dy*i1,0,360,5);
rectangle((x1+21)+dx,(y1+295)+dy*i1,(x1+19)+dx,(y1+310)+dy*i1);
}

//LEFT
pieslice((x1-22)+dx,(y1+260)+dy,0,360,2);
pieslice((x1-20)+dx,(y1+257)+dy,0,360,2);
pieslice((x1-18)+dx,(y1+260)+dy,0,360,2);
rectangle((x1-20)+dx,(y1+260)+dy,(x1-20)+dx,(y1+265)+dy);
}

//====================Kartakingpiki=====================
void Kartakingpiki(int x1,int y1)
{
rectangle(x1-50,y1+250,x1+40,y1+380);
setfillstyle(1,WHITE);
outtextxy(x1-40,y1+260,"K");
int dy=33;
int dx=40;
x1=x1-58;
y1=y1-15;
pieslice((x1-22)+dx,(y1+260)+dy,0,360,2);
pieslice((x1-20)+dx,(y1+257)+dy,0,360,2);
pieslice((x1-18)+dx,(y1+260)+dy,0,360,2);
rectangle((x1-20)+dx,(y1+260)+dy,(x1-20)+dx,(y1+265)+dy);

int  d=60;
int dy1=20;
line((x1-28)+d,(y1+280)+dy1,(x1-20)+d,(y1+300)+dy1);
moveto((x1-20)+d,(y1+300)+dy1);
lineto((x1+5)+d,(y1+300)+dy1);
lineto((x1+13)+d,(y1+280)+dy1);
lineto((x1+3)+d,(y1+290)+dy1);
lineto((x1-3)+d,(y1+290)+dy1);
lineto((x1-7)+d,(y1+280)+dy1);
moveto((x1-28)+d,(y1+280)+dy1);
lineto((x1-18)+d,(y1+290)+dy1);
lineto((x1-12)+d,(y1+290)+dy1);
lineto((x1-7)+d,(y1+280)+dy1);
outtextxy((x1-22)+d,(y1+310)+dy1,"KING");
outtextxy((x1-22)+d,(y1+320)+dy1,"PIKI");


pieslice((x1+43)+dx,(y1+340)+dy,0,360,2);
pieslice((x1+45)+dx,(y1+337)+dy,0,360,2);
pieslice((x1+47)+dx,(y1+340)+dy,0,360,2);
rectangle((x1+45)+dx,(y1+335)+dy,(x1+45)+dx,(y1+345)+dy);
outtextxy(x1+82,y1+357,"K");

}
//================Kartatuspiki==============
void Kartatuspiki(int x1,int y1)
{

rectangle(x1-50,y1+250,x1+40,y1+380);
setfillstyle(1,WHITE);
outtextxy(x1-41,y1+263,"A");
int dy=33;
int dx=40;
x1=x1-58;
y1=y1-15;


pieslice((x1+15)+dx,(y1+300)+dy,0,360,5);
pieslice((x1+10)+dx,(y1+295)+dy,0,360,5);
pieslice((x1+5)+dx,(y1+300)+dy,0,360,5);
rectangle((x1+11)+dx,(y1+295)+dy,(x1+9)+dx,(y1+310)+dy);


//LEFT
pieslice((x1-22)+dx,(y1+260)+dy,0,360,2);
pieslice((x1-20)+dx,(y1+257)+dy,0,360,2);
pieslice((x1-18)+dx,(y1+260)+dy,0,360,2);
rectangle((x1-20)+dx,(y1+260)+dy,(x1-20)+dx,(y1+265)+dy);

//right
pieslice((x1+43)+dx,(y1+340)+dy,0,360,2);
pieslice((x1+45)+dx,(y1+337)+dy,0,360,2);
pieslice((x1+47)+dx,(y1+340)+dy,0,360,2);
rectangle((x1+45)+dx,(y1+335)+dy,(x1+45)+dx,(y1+345)+dy);
outtextxy(x1+82,y1+357,"A");

}


//===========KARTA6 KREST===================
void Karta6krest(int x1,int y1)
{
//setfillstyle(1,2);

rectangle(x1-50,y1+250,x1+40,y1+380);
setfillstyle(1,WHITE);
//setcolor(1);
outtextxy(x1-45,y1+260,"6");
int dy=40;
int dx=30;
x1=x1-48;
y1=y1-15;
for(int i=1;i<=3;i++)
{
for(int j=1;j<=2;j++)
{
pieslice((x1-5)+dx*j,(y1+250)+dy*i,0,360,3);
pieslice((x1-0)+dx*j,(y1+245)+dy*i,0,360,3);
pieslice((x1+5)+dx*j,(y1+250)+dy*i,0,360,3);
rectangle((x1-1)+dx*j,(y1+245)+dy*i,(x1+1)+dx*j,(y1+257)+dy*i);
}
}
pieslice((x1-23)+dx,(y1+250)+dy,0,360,2);
pieslice((x1-20)+dx,(y1+247)+dy,0,360,2);
pieslice((x1-17)+dx,(y1+250)+dy,0,360,2);
rectangle((x1-20)+dx,(y1+245)+dy,(x1-20)+dx,(y1+255)+dy);

}
//==================karta7krest=========================
void Karta7krest(int x1,int y1)
{
//setfillstyle(1,2);

rectangle(x1-50,y1+250,x1+40,y1+380);
setfillstyle(1,WHITE);
//setcolor(1);
outtextxy(x1-40,y1+260,"7");
int dy=40;
int dx=30;
x1=x1-48;
y1=y1-15;
for(int i=1;i<=3;i++)
{
for(int j=1;j<=2;j++)
{
pieslice((x1-5)+dx*j,(y1+250)+dy*i,0,360,3);
pieslice((x1-0)+dx*j,(y1+245)+dy*i,0,360,3);
pieslice((x1+5)+dx*j,(y1+250)+dy*i,0,360,3);
rectangle((x1-1)+dx*j,(y1+245)+dy*i,(x1+1)+dx*j,(y1+257)+dy*i);
}
}
//x1=x1-48;
//y1=y1-15;

pieslice((x1-23)+dx,(y1+250)+dy,0,360,2);
pieslice((x1-20)+dx,(y1+247)+dy,0,360,2);
pieslice((x1-17)+dx,(y1+250)+dy,0,360,2);
rectangle((x1-20)+dx,(y1+245)+dy,(x1-20)+dx,(y1+255)+dy);
}

//=======================Karta8krest====================
void Karta8krest(int x1,int y1)
{
//setfillstyle(1,2);

rectangle(x1-50,y1+250,x1+40,y1+380);
setfillstyle(1,WHITE);
//setcolor(1);
outtextxy(x1-40,y1+260,"8");
int dy=30;
int dx=30;
x1=x1-48;
y1=y1-7;
for(int i=1;i<=4;i++)
{
for(int j=1;j<=2;j++)
{
pieslice((x1-5)+dx*j,(y1+250)+dy*i,0,360,3);
pieslice((x1-0)+dx*j,(y1+245)+dy*i,0,360,3);
pieslice((x1+5)+dx*j,(y1+250)+dy*i,0,360,3);
rectangle((x1-1)+dx*j,(y1+245)+dy*i,(x1+1)+dx*j,(y1+257)+dy*i);
}
}
//x1=x1-48;
//y1=y1-15;

pieslice((x1-23)+dx,(y1+250)+dy,0,360,2);
pieslice((x1-20)+dx,(y1+247)+dy,0,360,2);
pieslice((x1-17)+dx,(y1+250)+dy,0,360,2);
rectangle((x1-20)+dx,(y1+245)+dy,(x1-20)+dx,(y1+255)+dy);
}

//=======================Karta9krest====================
void Karta9krest(int x1,int y1)
{
//setfillstyle(1,2);

rectangle(x1-50,y1+250,x1+40,y1+380);
setfillstyle(1,WHITE);
//setcolor(1);
outtextxy(x1-40,y1+260,"9");
int dy=30;
int dx=30;
x1=x1-48;
y1=y1-7;
for(int i=1;i<=4;i++)
{
for(int j=1;j<=2;j++)
{
pieslice((x1-5)+dx*j,(y1+250)+dy*i,0,360,3);
pieslice((x1+0)+dx*j,(y1+245)+dy*i,0,360,3);
pieslice((x1+5)+dx*j,(y1+250)+dy*i,0,360,3);
rectangle((x1-1)+dx*j,(y1+245)+dy*i,(x1+1)+dx*j,(y1+257)+dy*i);
}
}
//==//left
pieslice((x1-23)+dx,(y1+250)+dy,0,360,2);
pieslice((x1-20)+dx,(y1+247)+dy,0,360,2);
pieslice((x1-17)+dx,(y1+250)+dy,0,360,2);
rectangle((x1-20)+dx,(y1+245)+dy,(x1-20)+dx,(y1+255)+dy);

//==//chentr
pieslice((x1+19)+dx,(y1+293)+dy,0,360,3);
pieslice((x1+15)+dx,(y1+287)+dy,0,360,3);
pieslice((x1+11)+dx,(y1+293)+dy,0,360,3);
rectangle((x1+14)+dx,(y1+290)+dy,(x1+16)+dx,(y1+300)+dy);
}

//=======================Karta10krest====================
void Karta10krest(int x1,int y1)
{
//setfillstyle(1,2);

rectangle(x1-50,y1+250,x1+40,y1+380);
setfillstyle(1,WHITE);
//setcolor(1);
outtextxy(x1-45,y1+260,"10");
int dy=30;
int dx=30;
x1=x1-48;
y1=y1-7;
for(int i=1;i<=4;i++)
{
for(int j=1;j<=2;j++)
{
pieslice((x1-5)+dx*j,(y1+250)+dy*i,0,360,3);
pieslice((x1+0)+dx*j,(y1+245)+dy*i,0,360,3);
pieslice((x1+5)+dx*j,(y1+250)+dy*i,0,360,3);
rectangle((x1-1)+dx*j,(y1+245)+dy*i,(x1+1)+dx*j,(y1+257)+dy*i);
}
}
//==//left
pieslice((x1-23)+dx,(y1+250)+dy,0,360,2);
pieslice((x1-20)+dx,(y1+247)+dy,0,360,2);
pieslice((x1-17)+dx,(y1+250)+dy,0,360,2);
rectangle((x1-20)+dx,(y1+245)+dy,(x1-20)+dx,(y1+255)+dy);

//==//chentr
for(int j1=1;j1<=2;j1++)
{pieslice((x1+19)+dx,(y1+293)+dy*j1,0,360,3);
pieslice((x1+15)+dx,(y1+287)+dy*j1,0,360,3);
pieslice((x1+11)+dx,(y1+293)+dy*j1,0,360,3);
rectangle((x1+14)+dx,(y1+290)+dy*j1,(x1+16)+dx,(y1+300)+dy*j1);
}

}
//====================Kartakingkrest===================
void Kartakingkrest(int x1,int y1)
{
rectangle(x1-50,y1+250,x1+40,y1+380);
setfillstyle(1,WHITE);
outtextxy(x1-40,y1+260,"K");
int dy=30;
int dx=30;
x1=x1-48;
y1=y1-7;
pieslice((x1-23)+dx,(y1+250)+dy,0,360,2);
pieslice((x1-20)+dx,(y1+247)+dy,0,360,2);
pieslice((x1-17)+dx,(y1+250)+dy,0,360,2);
rectangle((x1-20)+dx,(y1+245)+dy,(x1-20)+dx,(y1+255)+dy);

int d=50;
line((x1-28)+d,y1+280,(x1-20)+d,y1+300);
moveto((x1-20)+d,y1+300);
lineto((x1+5)+d,y1+300);
lineto((x1+13)+d,y1+280);
lineto((x1+3)+d,y1+290);
lineto((x1-3)+d,y1+290);
lineto((x1-7)+d,y1+280);
moveto((x1-28)+d,y1+280);
lineto((x1-18)+d,y1+290);
lineto((x1-12)+d,y1+290);
lineto((x1-7)+d,y1+280);
outtextxy((x1-22)+d,y1+310,"KING");

pieslice((x1+48)+dx,(y1+340)+dy,0,360,2);
pieslice((x1+45)+dx,(y1+337)+dy,0,360,2);
pieslice((x1+42)+dx,(y1+340)+dy,0,360,2);
rectangle((x1+45)+dx,(y1+335)+dy,(x1+45)+dx,(y1+345)+dy);
outtextxy(x1+72,y1+357,"K");

}



//====================KARTATUSKREST====================
void Kartatuskrest(int x1,int y1)
{
//setfillstyle(1,2);

rectangle(x1-50,y1+250,x1+40,y1+380);
setfillstyle(1,WHITE);
//setcolor(1);
outtextxy(x1-41,y1+260,"A");
int dy=30;
int dx=30;
x1=x1-48;
y1=y1-7;
//==//left
pieslice((x1-23)+dx,(y1+250)+dy,0,360,2);
pieslice((x1-20)+dx,(y1+247)+dy,0,360,2);
pieslice((x1-17)+dx,(y1+250)+dy,0,360,2);
rectangle((x1-20)+dx,(y1+245)+dy,(x1-20)+dx,(y1+255)+dy);

//==//chentr
pieslice((x1+19)+dx,(y1+293)+dy,0,360,3);
pieslice((x1+15)+dx,(y1+287)+dy,0,360,3);
pieslice((x1+11)+dx,(y1+293)+dy,0,360,3);
rectangle((x1+14)+dx,(y1+290)+dy,(x1+16)+dx,(y1+300)+dy);

//==//RATE
pieslice((x1+48)+dx,(y1+340)+dy,0,360,2);
pieslice((x1+45)+dx,(y1+337)+dy,0,360,2);
pieslice((x1+42)+dx,(y1+340)+dy,0,360,2);
rectangle((x1+45)+dx,(y1+335)+dy,(x1+45)+dx,(y1+345)+dy);
outtextxy(x1+72,y1+357,"A");
}



//===================KARTA6 BU==========================
void Karta6bu(int x1,int y1)
{

rectangle(x1-50,y1+250,x1+40,y1+380);
setfillstyle(1,WHITE);
outtextxy(x1-40,y1+260,"6");
int mas3[9];
mas3[0]=(x1-38);
mas3[1]=(y1+270);
mas3[2]=(x1-43);
mas3[3]=(y1+275);
mas3[4]=(x1-38);
mas3[5]=(y1+280);
mas3[6]=(x1-33);
mas3[7]=(y1+275);
mas3[8]=(x1-38);
mas3[9]=(y1+270);
fillpoly(4,mas3);

int dy=40;
int dx=30;
x1=x1-45;
y1=y1-15;
int mas[9];

for(int i=1;i<=3;i++)
{
for(int j=1;j<=2;j++)
{
mas[0]=(x1-5)+dx*j;
mas[1]=(y1+245)+dy*i;
mas[2]=(x1-10)+dx*j;
mas[3]=(y1+250)+dy*i;
mas[4]=(x1-5)+dx*j;
mas[5]=(y1+255)+dy*i;
mas[6]=(x1+0)+dx*j;
mas[7]=(y1+250)+dy*i;
mas[8]=(x1-5)+dx*j;
mas[9]=(y1+245)+dy*i;
fillpoly(4,mas);
}
}
}
//==================Karta7 bu===================
void Karta7bu(int x1,int y1)
{

rectangle(x1-50,y1+250,x1+40,y1+380);
setfillstyle(1,WHITE);
outtextxy(x1-40,y1+260,"7");
int mas3[9];
mas3[0]=(x1-38);
mas3[1]=(y1+270);
mas3[2]=(x1-43);
mas3[3]=(y1+275);
mas3[4]=(x1-38);
mas3[5]=(y1+280);
mas3[6]=(x1-33);
mas3[7]=(y1+275);
mas3[8]=(x1-38);
mas3[9]=(y1+270);
fillpoly(4,mas3);

int dy=40;
int dx=30;
x1=x1-45;
y1=y1-15;
int mas[19];

for(int i=1;i<=3;i++)
{
for(int j=1;j<=2;j++)
{
mas[0]=(x1-5)+dx*j;
mas[1]=(y1+245)+dy*i;
mas[2]=(x1-10)+dx*j;
mas[3]=(y1+250)+dy*i;
mas[4]=(x1-5)+dx*j;
mas[5]=(y1+255)+dy*i;
mas[6]=(x1+0)+dx*j;
mas[7]=(y1+250)+dy*i;
mas[8]=(x1-5)+dx*j;
mas[9]=(y1+245)+dy*i;
fillpoly(4,mas);
}
}
int mas1[9];
mas1[0]=(x1+10)+dx;
mas1[1]=(y1+263)+dy;
mas1[2]=(x1+5)+dx;
mas1[3]=(y1+268)+dy;
mas1[4]=(x1+10)+dx;
mas1[5]=(y1+273)+dy;
mas1[6]=(x1+15)+dx;
mas1[7]=(y1+268)+dy;
mas1[8]=(x1+10)+dx;
mas1[9]=(y1+263)+dy;
fillpoly(4,mas1);
}
//=================KARTA 8BU================
void Karta8bu(int x1,int y1)
{
rectangle(x1-50,y1+250,x1+40,y1+380);
setfillstyle(1,WHITE);
outtextxy(x1-40,y1+260,"8");
int mas3[9];
mas3[0]=(x1-38);
mas3[1]=(y1+270);
mas3[2]=(x1-43);
mas3[3]=(y1+275);
mas3[4]=(x1-38);
mas3[5]=(y1+280);
mas3[6]=(x1-33);
mas3[7]=(y1+275);
mas3[8]=(x1-38);
mas3[9]=(y1+270);
fillpoly(4,mas3);

int dy=30;
int dx=30;
x1=x1-45;
y1=y1-8;
int mas[19];

for(int i=1;i<=4;i++)
{
for(int j=1;j<=2;j++)
{
mas[0]=(x1-5)+dx*j;
mas[1]=(y1+245)+dy*i;
mas[2]=(x1-10)+dx*j;
mas[3]=(y1+250)+dy*i;
mas[4]=(x1-5)+dx*j;
mas[5]=(y1+255)+dy*i;
mas[6]=(x1+0)+dx*j;
mas[7]=(y1+250)+dy*i;
mas[8]=(x1-5)+dx*j;
mas[9]=(y1+245)+dy*i;
fillpoly(4,mas);
}
}
}
//=================KARTA 9BU=================
void Karta9bu(int x1,int y1)
{

rectangle(x1-50,y1+250,x1+40,y1+380);
setfillstyle(1,WHITE);
outtextxy(x1-40,y1+260,"9");
int mas3[9];
mas3[0]=(x1-38);
mas3[1]=(y1+270);
mas3[2]=(x1-43);
mas3[3]=(y1+275);
mas3[4]=(x1-38);
mas3[5]=(y1+280);
mas3[6]=(x1-33);
mas3[7]=(y1+275);
mas3[8]=(x1-38);
mas3[9]=(y1+270);
fillpoly(4,mas3);

int dy=30;
int dx=30;
x1=x1-45;
y1=y1-8;
int mas[19];

for(int i=1;i<=4;i++)
{
for(int j=1;j<=2;j++)
{
mas[0]=(x1-5)+dx*j;
mas[1]=(y1+245)+dy*i;
mas[2]=(x1-10)+dx*j;
mas[3]=(y1+250)+dy*i;
mas[4]=(x1-5)+dx*j;
mas[5]=(y1+255)+dy*i;
mas[6]=(x1+0)+dx*j;
mas[7]=(y1+250)+dy*i;
mas[8]=(x1-5)+dx*j;
mas[9]=(y1+245)+dy*i;
fillpoly(4,mas);
}
}
int mas1[9];
mas1[0]=(x1+10)+dx;
mas1[1]=(y1+288)+dy;
mas1[2]=(x1+5)+dx;
mas1[3]=(y1+293)+dy;
mas1[4]=(x1+10)+dx;
mas1[5]=(y1+298)+dy;
mas1[6]=(x1+15)+dx;
mas1[7]=(y1+293)+dy;
mas1[8]=(x1+10)+dx;
mas1[9]=(y1+288)+dy;
fillpoly(4,mas1);
}
//=====================KARTA10 BU==================
void Karta10bu(int x1,int y1)
{

rectangle(x1-50,y1+250,x1+40,y1+380);
setfillstyle(1,WHITE);
outtextxy(x1-45,y1+260,"10");
int mas3[9];
mas3[0]=(x1-38);
mas3[1]=(y1+270);
mas3[2]=(x1-43);
mas3[3]=(y1+275);
mas3[4]=(x1-38);
mas3[5]=(y1+280);
mas3[6]=(x1-33);
mas3[7]=(y1+275);
mas3[8]=(x1-38);
mas3[9]=(y1+270);
fillpoly(4,mas3);

int dy=30;
int dx=30;
x1=x1-45;
y1=y1-8;
int mas[19];

for(int i=1;i<=4;i++)
{
for(int j=1;j<=2;j++)
{
mas[0]=(x1-5)+dx*j;
mas[1]=(y1+245)+dy*i;
mas[2]=(x1-10)+dx*j;
mas[3]=(y1+250)+dy*i;
mas[4]=(x1-5)+dx*j;
mas[5]=(y1+255)+dy*i;
mas[6]=(x1+0)+dx*j;
mas[7]=(y1+250)+dy*i;
mas[8]=(x1-5)+dx*j;
mas[9]=(y1+245)+dy*i;
fillpoly(4,mas);
}
}
int mas1[9];

for(int j1=1;j1<=2;j1++)
{
mas1[0]=(x1+10)+dx;
mas1[1]=(y1+258)+dy*j1;
mas1[2]=(x1+5)+dx;
mas1[3]=(y1+263)+dy*j1;
mas1[4]=(x1+10)+dx;
mas1[5]=(y1+268)+dy*j1;
mas1[6]=(x1+15)+dx;
mas1[7]=(y1+263)+dy*j1;
mas1[8]=(x1+10)+dx;
mas1[9]=(y1+258)+dy*j1;
fillpoly(4,mas1);
}
}
//========================Kartatusbu==============
void Kartatusbu(int x1,int y1)
{

rectangle(x1-50,y1+250,x1+40,y1+380);
setfillstyle(1,WHITE);
outtextxy(x1-41,y1+260,"A");
int mas3[9];
mas3[0]=(x1-38);
mas3[1]=(y1+270);
mas3[2]=(x1-43);
mas3[3]=(y1+275);
mas3[4]=(x1-38);
mas3[5]=(y1+280);
mas3[6]=(x1-33);
mas3[7]=(y1+275);
mas3[8]=(x1-38);
mas3[9]=(y1+270);
fillpoly(4,mas3);

int dy=30;
int dx=30;
x1=x1-45;
y1=y1-8;
/*
int mas[19];

mas[0]=(x1-5)+dx;
mas[1]=(y1+245)+dy;
mas[2]=(x1-10)+dx;
mas[3]=(y1+250)+dy;
mas[4]=(x1-5)+dx;
mas[5]=(y1+255)+dy;
mas[6]=(x1+0)+dx;
mas[7]=(y1+250)+dy;
mas[8]=(x1-5)+dx;
mas[9]=(y1+245)+dy;
fillpoly(4,mas);
*/

int mas1[9];
mas1[0]=(x1+10)+dx;
mas1[1]=(y1+278)+dy;
mas1[2]=(x1+5)+dx;
mas1[3]=(y1+293)+dy;
mas1[4]=(x1+10)+dx;
mas1[5]=(y1+308)+dy;
mas1[6]=(x1+15)+dx;
mas1[7]=(y1+293)+dy;
mas1[8]=(x1+10)+dx;
mas1[9]=(y1+288)+dy;
fillpoly(4,mas1);

int mas[9];
mas[0]=(x1+70);
mas[1]=(y1+370);
mas[2]=(x1+65);
mas[3]=(y1+375);
mas[4]=(x1+70);
mas[5]=(y1+380);
mas[6]=(x1+75);
mas[7]=(y1+375);
mas[8]=(x1+70);
mas[9]=(y1+370);
fillpoly(4,mas);

outtextxy(x1+67,y1+360,"A");
}

//========================Kartakingbu==============
void Kartakingbu(int x1,int y1)
{

rectangle(x1-50,y1+250,x1+40,y1+380);
setfillstyle(1,WHITE);
outtextxy(x1-41,y1+260,"K");
int mas3[9];
mas3[0]=(x1-38);
mas3[1]=(y1+270);
mas3[2]=(x1-43);
mas3[3]=(y1+275);
mas3[4]=(x1-38);
mas3[5]=(y1+280);
mas3[6]=(x1-33);
mas3[7]=(y1+275);
mas3[8]=(x1-38);
mas3[9]=(y1+270);
fillpoly(4,mas3);

int dx=5;
line((x1-28)+dx,y1+280,(x1-20)+dx,y1+300);
moveto((x1-20)+dx,y1+300);
lineto((x1+5)+dx,y1+300);
lineto((x1+13)+dx,y1+280);
lineto((x1+3)+dx,y1+290);
lineto((x1-3)+dx,y1+290);
lineto((x1-7)+dx,y1+280);
moveto((x1-28)+dx,y1+280);
lineto((x1-18)+dx,y1+290);
lineto((x1-12)+dx,y1+290);
lineto((x1-7)+dx,y1+280);
outtextxy((x1-22)+dx,y1+310,"KING");


int mas[9];
mas[0]=(x1+30);
mas[1]=(y1+360);
mas[2]=(x1+25);
mas[3]=(y1+365);
mas[4]=(x1+30);
mas[5]=(y1+370);
mas[6]=(x1+35);
mas[7]=(y1+365);
mas[8]=(x1+30);
mas[9]=(y1+360);
fillpoly(4,mas);

outtextxy(x1+27,y1+350,"K");
}







//===============mouse=======================
void mouse()
{
asm{
 mov ax,1
int 0x33
}
mousemove(1,1);
}
//===============MOUSECOORD4==================
int mousecoord4(int x1,int y1,int x2,int y2)
{
int mbut,mx,my;
asm{
mov ax,3
int 0x33
mov mx,cx
mov my,dx
mov mbut,bx
}
int x=mx;
int y=my;
//int but=mbut;
if(x>=x1&&x<=x2&&y>=y1&&y<=y2)return 1;
else return 0;
}
//===============mousecoord3==================
int mousecoord3(int x1,int y1,int x2,int y2)
{
int mbut,mx,my;
asm{
mov ax,3
int 0x33
mov mx,cx
mov my,dx
mov mbut,bx
}
int x=mx;
int y=my;
//int but=mbut;
if(x>=x1&&x<=x2&&y>=y1&&y<=y2)return 1;
else return 0;
}
//===============mousecoord2==================
int mousecoord2(int x1,int y1,int x2,int y2)
{int mbut,mx,my;
asm{
mov ax,3
int 0x33
mov mx,cx
mov my,dx
mov mbut,bx
}
int x=mx;
int y=my;
//int but=mbut;
if(x>=x1&&x<=x2&&y>=y1&&y<=y2)return 1;
else return 0;
}
/////////////////////////////////////////////
int mousecoord1(int x1,int y1,int x2,int y2)
{

int mbut,mx,my;
asm{
mov ax,3
int 0x33
mov mx,cx
mov my,dx
mov mbut,bx
}
int x=mx;
int y=my;
//int but=mbut;
if(x>=x1&&x<=x2&&y>=y1&&y<=y2)return 1;
else return 0;
}
/////////////////////////////////////////////
/*int count()
{
int mbut,mx,my;
asm{
mov ax,3
int 0x33
mov mx,cx
mov my,dx
mov mbut,bx
}
int x=mx;
int y=my;
int but=mbut;
//if(but==0)int nb=0;
int nb;
if(but==0) nb=0;
if(but==1&&nb==0)
return 1;else return 0;
}*/
/////////////////////////////////////////////
/*void mStatus()
{
int mbut,mx,my;
asm{
mov ax,3
int 0x33
mov mx,cx
mov my,dx
mov mbut,bx
}
int x=mx;
int y=my;
int but=mbut;
}*/
/////////////////////////////////////////
void mousemove(int xm,int ym)
{
xm=24;ym=24;
asm{
mov ax,4
mov cx,xm
mov dx,ym
int 0x33
}
}

