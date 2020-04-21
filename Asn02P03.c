#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void t_hanoi(int n,char A,char B,char C,char D, char E)
{
	if(n>0)
	{
	    int p=n/3;

		t_hanoi(p-1,A,E,C,B,D);
		printf("\n Move disk %d from %c to %c",n,A,C);
		t_hanoi(p-1,E,C,A,D,B);

		t_hanoi((2*p)-2,A,E,D,B,C);
		printf("\n Move disk %d from %c to %c",n-1,A,D);
		t_hanoi((2*p)-2,E,D,A,B,C);

		t_hanoi(p-3,A,E,B,C,D);
        	printf("\n Move disk %d from %c to %c",n-2,A,B);
		t_hanoi(p-3,E,B,A,C,D);

		t_hanoi((2*p)-2,D,E,B,A,C);
		printf("\n Move disk %d from %c to %c",n-1,D,B);
		t_hanoi((2*p)-2,E,B,D,A,C);

		t_hanoi(p-1,C,E,B,A,D);
		printf("\n Move disk %d from %c to %c",n,C,B);
		t_hanoi(p-1,E,B,C,A,D);



	}

}
int main(int argc, char *argv[])
{
    if(argc==1)
	{
		printf("....Insufficent parameters..or..no parameters passed..\n");
		exit(0);
	}
    int n;
    n= atoi(argv[1]);
	t_hanoi(n,'A','B','C','D','E');
}
