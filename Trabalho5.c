#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, EntradaProg_C, EntradaProg_V;
    FILE *LeituraProg_C, *LeituraProg_V, *Resultado;
	
    LeituraProg_C = fopen("ResultadoProg_C.txt","r");
    LeituraProg_V = fopen("ResultadoProg_V.txt","r");
    Resultado = fopen	("ComparacaoEntre_C_V.txt","a");	
    for (num=0;num<100;num++){
    	fscanf(LeituraC, "%d", &EntradaProg_C);
    	fscanf(LeituraV, "%d", &EntradaProg_V);
	if (EntradaProg_C != EntradaProg_V){
	   fprintf(Resultado,"%d\n",num);
	}
    }
    return 0;
}
