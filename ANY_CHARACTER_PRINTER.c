#include<stdio.h>
#include<string.h>
char a[3][503];
char string[100];

int activate_A(int pixel)
{
	a[0][0+4*pixel]=201;
	a[0][1+4*pixel]=205;
	a[0][2+4*pixel]=187;
	a[1][0+4*pixel]=204;
	a[1][1+4*pixel]=205;
	a[1][2+4*pixel]=185;
	a[2][0+4*pixel]=202;
	a[2][2+4*pixel]=202;
}
int activate_B(int pixel)
{
	a[0][0+4*pixel]=203;
	a[0][1+4*pixel]=205;
	a[0][2+4*pixel]=187;
	a[1][0+4*pixel]=204;
	a[1][1+4*pixel]=205;
	a[1][2+4*pixel]=185;
	a[2][0+4*pixel]=202;
	a[2][1+4*pixel]=205;
	a[2][2+4*pixel]=188;
}
int activate_C(int pixel)
{
	a[0][0+4*pixel]=201;
	a[0][1+4*pixel]=205;
	a[0][2+4*pixel]=187;
	a[1][0+4*pixel]=186;
	a[2][0+4*pixel]=200;
	a[2][1+4*pixel]=205;
	a[2][2+4*pixel]=188;
}
int activate_D(int pixel)
{
	a[0][0+4*pixel]=203;
	a[0][1+4*pixel]=205;
	a[0][2+4*pixel]=187;
	a[1][0+4*pixel]=186;
	a[1][2+4*pixel]=186;
	a[2][0+4*pixel]=202;
	a[2][1+4*pixel]=205;
	a[2][2+4*pixel]=188;
}
int activate_E(int pixel)
{
	a[0][0+4*pixel]=201;
	a[0][1+4*pixel]=205;
	a[0][2+4*pixel]=187;
	a[1][0+4*pixel]=204;
	a[1][1+4*pixel]=205;
	a[2][0+4*pixel]=200;
	a[2][1+4*pixel]=205;
	a[2][2+4*pixel]=188;
}
int activate_F(int pixel)
{
	a[0][0+4*pixel]=201;
	a[0][1+4*pixel]=205;
	a[0][2+4*pixel]=205;
	a[1][0+4*pixel]=204;
	a[1][1+4*pixel]=205;
	a[1][2+4*pixel]=205;
	a[2][0+4*pixel]=202;
}

int activate_G(int pixel)
{
	a[0][0+4*pixel]=201;
	a[0][1+4*pixel]=205;
	a[0][2+4*pixel]=187;
	a[1][0+4*pixel]=186;
	a[1][1+4*pixel]=205;
	a[1][2+4*pixel]=187;
	a[2][0+4*pixel]=200;
	a[2][1+4*pixel]=205;
	a[2][2+4*pixel]=188;
}

int activate_H(int pixel)
{
	a[0][0+4*pixel]=203;
	a[0][2+4*pixel]=203;
	a[1][0+4*pixel]=204;
	a[1][1+4*pixel]=205;
	a[1][2+4*pixel]=185;
	a[2][0+4*pixel]=202;
	a[2][2+4*pixel]=202;
}
int activate_I(int pixel)
{
	a[0][0+4*pixel]=205;
	a[0][1+4*pixel]=203;
	a[0][2+4*pixel]=205;
	a[1][1+4*pixel]=186;
	a[2][0+4*pixel]=205;
	a[2][1+4*pixel]=202;
	a[2][2+4*pixel]=205;
}
int activate_J(int pixel)
{
	a[0][1+4*pixel]=203;
	a[1][1+4*pixel]=186;
	a[2][0+4*pixel]=200;
	a[2][1+4*pixel]=188;
}

int activate_K(int pixel)
{
	a[0][0+4*pixel]='*';
	a[0][2+4*pixel]='*';
	a[1][0+4*pixel]='*';
	a[1][1+4*pixel]='*';
	a[2][0+4*pixel]='*';
	a[2][2+4*pixel]='*';
}
int activate_L(int pixel)
{
	a[0][0+4*pixel]=203;
	a[1][0+4*pixel]=186;
	a[2][0+4*pixel]=200;
	a[2][1+4*pixel]=205;
	a[2][2+4*pixel]=188;
}
int activate_M(int pixel)
{
	a[0][0+4*pixel]='*';
	a[0][2+4*pixel]='*';
	a[1][0+4*pixel]='*';
	a[1][1+4*pixel]='*';
	a[1][2+4*pixel]='*';
	a[2][0+4*pixel]='*';
	a[2][2+4*pixel]='*';
}
int activate_N(int pixel)
{
	a[0][0+4*pixel]='*';
	a[0][2+4*pixel]='*';
	a[1][0+4*pixel]='*';
	a[1][1+4*pixel]='\\';
	a[1][2+4*pixel]='*';
	a[2][0+4*pixel]='*';
	a[2][2+4*pixel]='*';
}
int activate_O(int pixel)
{
	a[0][0+4*pixel]=201;
	a[0][1+4*pixel]=205;
	a[0][2+4*pixel]=187;
	a[1][0+4*pixel]=186;
	a[1][2+4*pixel]=186;
	a[2][0+4*pixel]=200;
	a[2][1+4*pixel]=205;
	a[2][2+4*pixel]=188;
}
int activate_P(int pixel)
{
	a[0][0+4*pixel]=201;
	a[0][1+4*pixel]=205;
	a[0][2+4*pixel]=187;
	a[1][0+4*pixel]=204;
	a[1][1+4*pixel]=205;
	a[1][2+4*pixel]=188;
	a[2][0+4*pixel]=202;
}
int activate_Q(int pixel)
{
	a[0][0+4*pixel]=201;
	a[0][1+4*pixel]=205;
	a[0][2+4*pixel]=187;
	a[1][0+4*pixel]=186;
	a[1][2+4*pixel]=186;
	a[2][0+4*pixel]=200;
	a[2][1+4*pixel]=205;
	a[2][2+4*pixel]=202;
}
int activate_R(int pixel)
{
	a[0][0+4*pixel]=201;
	a[0][1+4*pixel]=205;
	a[0][2+4*pixel]=187;
	a[1][0+4*pixel]=186;
	a[1][2+4*pixel]=185;
	a[2][0+4*pixel]=202;
	a[2][2+4*pixel]=202;
}
int activate_S(int pixel)
{
	a[0][0+4*pixel]=201;
	a[0][1+4*pixel]=205;
	a[0][2+4*pixel]=187;
	a[1][0+4*pixel]=200;
	a[1][1+4*pixel]=205;
	a[1][2+4*pixel]=187;
	a[2][0+4*pixel]=200;
	a[2][1+4*pixel]=205;
	a[2][2+4*pixel]=188;
}
int activate_T(int pixel)
{
	a[0][0+4*pixel]=205;
	a[0][1+4*pixel]=203;
	a[0][2+4*pixel]=205;
	a[1][1+4*pixel]=186;
	a[2][1+4*pixel]=202;
}
int activate_U(int pixel)
{
	a[0][0+4*pixel]=203;
	a[0][2+4*pixel]=203;
	a[1][0+4*pixel]=186;
	a[1][2+4*pixel]=186;
	a[2][0+4*pixel]=200;
	a[2][1+4*pixel]=205;
	a[2][2+4*pixel]=188;
}
int activate_V(int pixel)
{
	a[0][0+4*pixel]='*';
	a[0][2+4*pixel]='*';
	a[1][0+4*pixel]='*';
	a[1][2+4*pixel]='*';
	a[2][1+4*pixel]='*';
}
int activate_W(int pixel)
{
	a[0][0+4*pixel]=210;
	a[0][2+4*pixel]=210;
	a[1][0+4*pixel]=186;
	a[1][2+4*pixel]=186;
	a[2][0+4*pixel]=200;
	a[2][1+4*pixel]=202;
	a[2][2+4*pixel]=188;
}
int activate_X(int pixel)
{
	a[0][0+4*pixel]='*';
	a[0][2+4*pixel]='*';
	a[1][0+4*pixel]='*';
	a[1][1+4*pixel]='*';
	a[1][2+4*pixel]='*';
	a[2][0+4*pixel]='*';
	a[2][2+4*pixel]='*';
}
int activate_Y(int pixel)
{
	a[0][0+4*pixel]='*';
	a[0][2+4*pixel]='*';
	a[1][1+4*pixel]='*';
	a[2][1+4*pixel]='*';
}
int activate_Z(int pixel)
{
	a[0][0+4*pixel]='*';
	a[0][1+4*pixel]='*';
	a[0][2+4*pixel]='*';
	a[1][1+4*pixel]='*';
	a[2][0+4*pixel]='*';
	a[2][1+4*pixel]='*';
	a[2][2+4*pixel]='*';
}

int identify()
{
int i;
for(i=0;string[i]!='\0';i++)
{
	if(string[i]=='A'||string[i]=='a')
	{
	activate_A(i);	
	}
	else if(string[i]=='B'||string[i]=='b')
	{
	activate_B(i);	
	}
	else if(string[i]=='C'||string[i]=='c')
	{
	activate_C(i);	
	}
	else if(string[i]=='D'||string[i]=='d')
	{
	activate_D(i);	
	}
	else if(string[i]=='E'||string[i]=='e')
	{
	activate_E(i);	
	}
	else if(string[i]=='F'||string[i]=='f')
	{
	activate_F(i);	
	}
	else if(string[i]=='G'||string[i]=='g')
	{
	activate_G(i);	
	}
	else if(string[i]=='H'||string[i]=='h')
	{
	activate_H(i);	
	}
	
	else if(string[i]=='I'||string[i]=='i')
	{
	activate_I(i);	
	}
	
	else if(string[i]=='J'||string[i]=='j')
	{
	activate_J(i);	
	}
	else if(string[i]=='K'||string[i]=='k')
	{
	activate_K(i);	
	}
	else if(string[i]=='L'||string[i]=='l')
	{
	activate_L(i);	
	}
	else if(string[i]=='M'||string[i]=='m')
	{
	activate_M(i);	
	}
	else if(string[i]=='N'||string[i]=='n')
	{
	activate_N(i);	
	}
	else if(string[i]=='O'||string[i]=='o')
	{
	activate_O(i);	
	}
	else if(string[i]=='P'||string[i]=='p')
	{
	activate_P(i);	
	}
	else if(string[i]=='Q'||string[i]=='q')
	{
	activate_Q(i);	
	}
	else if(string[i]=='R'||string[i]=='r')
	{
	activate_R(i);	
	}
	else if(string[i]=='S'||string[i]=='s')
	{
	activate_S(i);	
	}
	else if(string[i]=='T'||string[i]=='t')
	{
	activate_T(i);	
	}
	else if(string[i]=='U'||string[i]=='u')
	{
	activate_U(i);	
	}
	else if(string[i]=='V'||string[i]=='v')
	{
	activate_V(i);	
	}
	else if(string[i]=='W'||string[i]=='w')
	{
	activate_W(i);	
	}
	else if(string[i]=='X'||string[i]=='x')
	{
	activate_X(i);	
	}
	else if(string[i]=='Y'||string[i]=='y')
	{
	activate_Y(i);	
	}
	else if(string[i]=='Z'||string[i]=='z')
	{
	activate_Z(i);	
	}	
}

}
int main()
{
int i,j,section;

printf("Enter the string:");
gets(string);

identify();

for(i=0;i<=2;i++)
{
	for(j=0;j<=167;j++)
	{
	printf("%c",a[i][j]);	
	}		
	
}
getch();
return 0;
}
