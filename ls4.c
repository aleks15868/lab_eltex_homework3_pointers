#include <stdio.h>
#define Cout_Arr_Input 200
#define Cout_Arr_Sub_Input 20
int main(void)
{
	int i=0;
	int Cout_Sub=0;
	char Array[Cout_Arr_Input];
	char Sub_Array[Cout_Arr_Sub_Input];
	char *Pref_Array=(char *)Array;
	char *Pref_Sub_Array=(char *)Sub_Array;
	char *Pref_Flag = NULL;
	Pref_Flag = Sub_Array;
	printf("Input:");
	fgets(Array,Cout_Arr_Input,stdin);
	printf("Substring input:");
        fgets(Sub_Array,Cout_Arr_Sub_Input,stdin);
	while(*Pref_Array!='\0')
	{
		if (*(Pref_Sub_Array+1) == '\0')
		{
			Pref_Sub_Array=NULL;
			break;
		}
		if(*Pref_Array==*Pref_Sub_Array)
		{
			Cout_Sub++;
			Pref_Sub_Array++;
		}
		else
		{
			Pref_Sub_Array=Pref_Flag;
		}
		Pref_Array++;
	}
	return 0;

}
