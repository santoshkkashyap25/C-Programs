#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=25;
	int b=4;
	printf("%d\n",a/b); // integer division
	
	float c=25;
	float d=4;
	printf("%f\n",c/d); // float division
	
	int x,y,z;
	x=y=z=3;// valid R-->L assignment
	printf("x=%d,y=%d,z=%d\n",x,y,z );
	
	int w=4+2*6;
	printf("w=%d\n",w);
	
	w=(4+2)*6; // parenthesis has higher precedence
	printf("w=%d\n",w);
	
	int p=10;
	p+=20;
	printf("p=%d\n",p);

    // shift operators exist for only positive numbers in general
	int k=0x80;
	k=k>>3; // >>: all bits are shifted right
	printf("k=k>>3=%d\n",k);

	signed int l=-1;
	l=l<<1; // <<: all bits are shifted left
	printf("l=l>>1=%d\n",l);

	// ternary operator
	int friends=1;
	printf("I have %d friend%s.",friends,(friends!=1)?"s":"");

	// bitwise operators always return a value
	
	return 0;

}

/*
Description				Operators			Associativity

Function expression		( )   				Left to Right
Array Expression		[]					Left to Right
Structure operators		->					Left to Right
Unary minus				–					Right to Left
Increment & Decrement	--  ++				Right to Left
One’s compliment		~					Right to Left
Pointer Operators		& *					Right to Left
Type cast				(data type)			Right to Left
size of operator		sizeof()			Right to Left

Mul, Div,Mod			*,  /,  %			Left to Right
Add, Subtract			+,  –				Left to Right

Less Than				<					Left to Right
Greater than			>					Left to Right
Less than equal to		<=					Left to Right
Greater than equal to	>=					Left to Right
Equal to				==					Left to Right
Not equal				!=					Left to Right

AND						&&					Left to Right
OR						||					Left to Right
NOT						!					Right to Left

AND						&					Left to Right
Exclusive OR			^					Left to Right
Inclusive OR			|					Left to Right

=,*=,/=,%=,+=,-=,&=,^=,|=,<<=,>>=			Right to Left

Comma					,					Right to Left
Conditional Operator	?:					Right to Left

*/