///Autor: Gabriel Neves dos Santos Silva.
///RA: 20115803-5.
///Curso: Engenharia de Software.
///Sistema organizador de impressos.


#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
#include <string.h>
typedef struct cadastro CADASTRO;
struct cadastro{
char titulo[30];
char autor[30];
char editora[30];
char isbn[20];
char edicao[10];
char ano[10];
char exemplar[5];
char tipo[15];
char caixa[5]; 	
		
};
void cadastrol();
void escolhacx();
void listaobras();










int main(int argc, char *argv[]) {
int escolha;
setlocale (LC_ALL, "portuguese");
 
	 do{ 
	 printf("---------------------------------------------------------\n");
	 printf("Gabriel Neves dos Santos Silva. \n");
	 printf("20115803-5 \n");
	 printf("Engenharia de Software. \n");
	 printf("---------------------------------------------------------\n\n\n\n");
   	 printf("     1 - Cadastrar. \n \n");
	 printf("     2 - Listar obras cadastradas. \n \n");
	 printf("     3 - Listar conteúdo das caixas. \n \n");
	 printf("     0 - Sair.\n \n \n \n");
	 printf("         Escolha uma opção: ");
	 scanf("%d",&escolha);
	 fflush(stdin);
	 system("cls");
	
		switch(escolha)
		{
			case 1:
				cadastrol();
				break;
			case 2:
				listaobras();
			    break;
			case 3:
				escolhacx();
				
				break;
			case 0:
			printf("          Até logo!");    
			      break; 
			
			default:
		
			printf("-+-+-+-+- Opção inválida! -+-+-+-+- \n");
			printf("-+-+-+-+- Pressione qualquer tecla para retornar ao menu... -+-+-+-+-");
			getch();
			system("cls");	 
			
			     	 	
				
		}
		
	
	
	
		 
	  } while(escolha!=0);	
	
	return 0;
}

void cadastrol()
	{
		CADASTRO ctt;
	 FILE* lit;
	 
		lit = fopen ("lit.txt","ab");
				 if (lit==NULL)
				 {
				 printf("-+-+-+-+- Arquivo não encontrado! -+-+-+-+-");
				 system("pause");
				 exit(1);}
				 
				 else{
				 	
				 	fflush(stdin);
				 	printf("     Informe o titulo:  ");
				 	gets(ctt.titulo);
				 	printf("     Informe o autor:  ");
				 	gets(ctt.autor);
				 	fflush(stdin);
				 	printf("     Informe a editora:  ");
				 	gets(ctt.editora);
				 	fflush(stdin);
				 	printf("     Informe o ISBN:  ");
				 	gets(ctt.isbn);
				 	fflush(stdin);
				 	printf("     Informe a Edição:  ");
				 	gets(ctt.edicao);
				 	fflush(stdin);
				 	printf("     Informe o ano:  ");
				 	gets(ctt.ano);
				 	fflush(stdin);
				 	printf("     Digíte o tipo: [Livro] [Revista]:  ");
				 	gets(ctt.tipo);
				 	fflush(stdin);
				 	printf("     Informe a quantidade de exemplares:  ");
				 	gets(ctt.exemplar);
				 	fflush(stdin);
				 	printf("     Dígite o número da caixa que deseja Salvar: [1] [2] [3]: ");
				 	gets(ctt.caixa);
				 	fwrite(&ctt, sizeof(CADASTRO),1,lit);
				 	fclose(lit);		
					system("cls");		 	
				 	
				 }
	}




void listaobras(){
	
	CADASTRO ctt;
    FILE* lit;
    char tobra[15]; 
	 
		lit = fopen ("lit.txt","rb");
				 if (lit==NULL)
				 {
				 printf("-+-+-+-+- Arquivo não encontrado! -+-+-+-+-");
				 system("pause");
				 exit(1);}
				 else{
				 	printf("     Dígite o tipo de obra deseja Listar? [Livro] ou [Revista]:  ");
				 	gets(tobra);
				 	system("cls");
				 	
				 while(fread(&ctt,sizeof(CADASTRO),1,lit)==1)
				 	{
				 	if(strcmp(tobra,ctt.tipo)==0){
				 		printf("     Título:%s\n",ctt.titulo);
				 		printf("     Autor:%s\n",ctt.autor);
				 		printf("     Editora:%s\n",ctt.editora);
				 		printf("     ISBN:%s\n",ctt.isbn);
				 		printf("     Edição:%s\n",ctt.edicao);
				 		printf("     Ano:%s\n",ctt.ano);
				 		printf("     Tipo:%s\n",ctt.tipo);
				 		printf("     Exemplares:%s\n",ctt.exemplar);
				 		printf("     Caixa número:%s\n",ctt.caixa);
				 		printf("-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n\n");
				 		
					 }	
				 
				 		
				 	
					 }	
				 }
	
	fclose(lit);
	printf("-+-+-+-+- Pressione qualquer tecla para retornar ao menu... -+-+-+-+-");
	getch();
	system("cls");
}


void escolhacx(){
	
		CADASTRO ctt;
    FILE* lit;
    char ecaixa[5]; 
	 
		lit = fopen ("lit.txt","rb");
				 if (lit==NULL)
				 {
				 printf("     Erro ao abrir arquivo.");
				 system("pause");
				 exit(1);}
				 else{
				 	printf("     Escolha uma caixa, e dígite seu número para à selecionar: [1][2][3]   ");
				 	gets(ecaixa);
				 	system("cls");
				 	
				 while(fread(&ctt,sizeof(CADASTRO),1,lit)==1)
				 	{
				 	if(strcmp(ecaixa,ctt.caixa)==0){
				 		printf("     Título:%s\n",ctt.titulo);
				 		printf("     Autor:%s\n",ctt.autor);
				 		printf("     Editora:%s\n",ctt.editora);
				 		printf("     ISBN:%s\n",ctt.isbn);
				 		printf("     Edição:%s\n",ctt.edicao);
				 		printf("     Ano:%s\n",ctt.ano);
				 		printf("     Tipo:%s\n",ctt.tipo);
				 		printf("     Exemplares:%s\n",ctt.exemplar);
				 		printf("     Caixa número:%s\n",ctt.caixa);
				 		printf("-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n\n");
				 		
					 }	
				 
				 		
				 	
					 }	
				 }
	
	fclose(lit);
	printf("-+-+-+-+- Pressione qualquer tecla para retornar ao menu... -+-+-+-+-");
	getch();
	system("cls");
	
}
