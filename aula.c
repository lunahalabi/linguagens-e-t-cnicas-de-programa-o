#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
 //EXERCICIO 10 

int main(int argc, char *argv[]) {
	
	int a,b,c, maior_temp, maior;
	printf("Insira os valores a serem comparados: ");
	scanf("%d %d %d", &a, &b, &c);
	maior_temp = ((a+b)+abs(a-b))/2;
	
	maior = ((maior_temp+c)+abs(maior_temp-c))/2;
	
	printf("O maior entre |%d|%d|%d| = %d", a,b,c, maior);
		
	return 0;
}


#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, res;
	int bit_64, bit_32, bit_16, bit_8, bit_4, bit_2, bit_1;
	printf("Insira o valor a ser convertido: ");
	scanf("%d", &n);// -> 41
	
	bit_64 = n%2;// -> 1
	res = n/2;// -> 20
	
	bit_32 = res%2;// -> 0
	res = res/2;// -> 20
	
	bit_16 = res%2;// -> 1
	res = res/2;
	
	bit_8 = res%2;
	res = res/2;
	
	bit_4 = res%2;
	res = res/2;
	
	bit_2 = res%2;
	res = res/2;
	
	
	printf("O numero %d em bin = %d%d%d%d%d%d%d", n, res%2, bit_2, bit_4, bit_8, bit_16, bit_32, bit_64);
	
	
	return 0;
}


#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, r;
	printf("Insira o valor: ");
	scanf("%d", &n);
	
	if(n>0){
		r = n*-1;
	}else{
		r = n*n;
	}
	printf("%d",r);
	
	return 0;
}
