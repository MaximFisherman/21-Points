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

