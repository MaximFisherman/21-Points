
struct mousestate{
	 int x,y;
	 int b;
};

void mouseon(){
    _asm{
	 mov ax,1
	 int 0x33
    }
}

void mouseoff()
{
_asm{
		mov ax,0
		int 0x33
	 }
}
void MoveMouseCursor(int x,int y)
{
    _asm{
	 mov ax,4
	 mov cx,x
	 mov dx,y
	 int 0x33
    }
}

void getmousestate(mousestate &s)
 {
	int xt,yt,bt;
	_asm{
		mov ax,3
		int 0x33
		mov xt,cx
		mov yt,dx
		mov bt,bx
    }
    s.x=xt; s.y=yt; s.b=bt;
}

int operator==(mousestate& m1,mousestate& m2)
 {return m1.x==m2.x && m1.y==m2.y;}
int operator!=(mousestate& m1,mousestate& m2)
 {return !(m1==m2);}

mousestate GM={320,240,0};
void MShow()
 {mouseon(); MoveMouseCursor(GM.x,GM.y);}
void MHide()
 {getmousestate(GM); MoveMouseCursor(0,0); mouseoff();}