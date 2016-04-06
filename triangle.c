#include<stdlib.h>
#include<stdio.h>

typedef struct{
	int x,y;
}triangle;

confPoint(triangle point1,triangle point2,triangle point3){
	int num;
	num = abs(point1.x*(point2.y-point3.y) + point2.x*(point3.y-point1.y)+ point3.x*(point1.y-point2.y));
	return(num);
}

int main(){
	triangle t1,t2,t3,p;
	int i,num,num1,num2,num3;
	FILE *readT;
	FILE *readP;
	FILE *grava;
	readT=fopen("triangle.txt","r");
	readP=fopen("points.txt","r");
	grava=fopen("Result.txt","w");
	/*Laço de repetição*/
	for(i=0;i<10;i++){
		/*lê a partir de um arquivo*/
		fscanf(readT,"%i %i",&t1.x,&t1.y);
		fscanf(readT,"%i %i",&t2.x,&t2.y);
		fscanf(readT,"%i %i",&t3.x,&t3.y);
		fscanf(readP,"%i %i",&p.x,&p.y);
		num = confPoint(t1,t2,t3);
		num1 = confPoint(p,t2,t3);
		num2 = confPoint(t1,p,t3);
		num3 = confPoint(t1,t2,p);
		/*grava as coordenadas no arquivo Result.txt*/
		if(num == (num1+num2+num3)){
			printf("A coordernada informada contem no triangulo\n");
			fprintf(grava,"1\n");
		}else{
			printf("A coordenada informada nao contem no triangulo\n");
			fprintf(grava,"0\n");
		}
	}
	system("pause");
	return(0);
}