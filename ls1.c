#include <stdio.h>

int main(void)
{
	int Input,Input_Replace;
	int *Int_Byte_Input;
	char *Char_Byte_Input;
	printf("Input:");
	scanf("%d",&Input);
	printf("Input_Replace:");
	scanf("%d",&Input_Replace);
	Int_Byte_Input=&Input;
	Char_Byte_Input=(char *)Int_Byte_Input;
	Char_Byte_Input+=2;
	*Char_Byte_Input=1;
	printf("Output:%d\n",Input);
	return 0;
}

