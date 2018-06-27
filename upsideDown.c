#include<stdio.h>

int main()
{
	/* 	This program only works for small characters */
    char name[20];
    fgets(name, 25, stdin);
    int i;
    for(i=0;name[i]!='\0';i++)
    {
        switch(name[i])
		{
			case 'a':
						printf("\u0250");
						break;
			case 'b':
						printf("q");
						break;
			case 'c':
						printf("\u0254");
						break;
			case 'd':
						printf("p");
						break;
			case 'e':
						printf("\u01DD");
						break;
			case 'f':
						printf("\u025F");
						break;
			case 'g':
						printf("\u0183");
						break;
			case 'h':
						printf("\u0265");
						break;
			case 'i':
						printf("\u1D09");
						break;
			case 'j':
						printf("\u027E");
						break;
			case 'k':
						printf("\u029E");
						break;
			case 'l':
						printf("l");
						break;
			case 'm':
						printf("\u026F");
						break;
			case 'n':
						printf("u");
						break;
			case 'o':
						printf("o");
						break;
			case 'p':
						printf("d");
						break;
			case 'q':
						printf("b");
						break;
			case 'r':
						printf("\u0279");
						break;
			case 's':
						printf("s");
						break;
			case 't':
						printf("\u0287");
						break;
			case 'u':
						printf("n");
						break;
			case 'v':
						printf("\u028C");
						break;
			case 'w':
						printf("\u028D");
						break;
			case 'x':
						printf("x");
						break;
			case 'y':
						printf("\u028E");
						break;
			case 'z':
						printf("z");
						break;
			case ' ':
						printf(" ");
						break;
			default:
						break;
		}   
    }
		
	
    return 0;
}
