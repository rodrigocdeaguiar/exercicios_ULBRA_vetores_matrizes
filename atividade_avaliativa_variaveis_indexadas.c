/*
O c�digo abaixo foi realizado para cadastro de notas e faltas para a secretaria de 
uma escola. � de car�ter primitivo, pois os sistemas escolares est�o utilzando
c�digos e funcionalidades mais avan�adas para tal finalidade.
O sistema se inicia com o cadastro do n�mero de aulas dadas ao longo do ano.
Posteriormemte, ser� utilizada a fun��o para digitar as notas e faltas de cada bimestre
(coluna 1 = notas, coluna 2=faltas), sendo as linhas equivalente a cada um.
Posteriormente, o sistema calcular� a m�dia do aluno, atrav�s da fun��o Calcula_media_anual
Contudo, a m�dia anual n�o � suficiente para aprova��o: a fun��o "Teste_reprovacao_faltas"
calcular� o percentual de infrequencia do aluno.
No c�digo principal (main), est�o os testes para aprova��o por m�dia (m�dia > 6.0) e 
reprova��o por infrequ�ncia (infrequ�ncia > 25%)
A seguir, o c�digo:
*/
#include <stdio.h>
#include <locale.h>

void Digita_nota_falta(float dados[][2]){
	printf("\nDigite a nota do 1� bimestre: ");
	scanf("%f", &dados[0][0]);
	printf("\nDigite a nota do 2� bimestre: ");
	scanf("%f", &dados[1][0]);
	printf("\nDigite a nota do 3� bimestre: ");
	scanf("%f", &dados[2][0]);
	printf("\nDigite a nota do 4� bimestre: ");
	scanf("%f", &dados[3][0]);
	printf("\nDigite o n�mero de faltas do 1� bimestre: ");
	scanf("%f", &dados[0][1]);
	printf("\nDigite o n�mero de faltas do 2� bimestre: ");
	scanf("%f", &dados[1][1]);
	printf("\nDigite o n�mero de faltas do 3� bimestre: ");
	scanf("%f", &dados[2][1]);
	printf("\nDigite o n�mero de faltas do 4� bimestre: ");
	scanf("%f", &dados[3][1]);
}


float Calcula_media_anual(float dados[4][2]){
	float media = (dados[0][0]+dados[1][0]+dados[2][0]+dados[3][0])/4;
	return media;
}

float Teste_reprovacao_faltas(float dados[4][2], float numero_aulas){
	float infrequencia;
	infrequencia = (dados[0][1]+dados[1][1]+dados[2][1]+dados[3][1])/numero_aulas*100;
	return infrequencia;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	float indice_frequencia, media_notas, aulas_dadas, nota_falta[4][2];
	
	printf("\nDigite o n�mero de aulas dadas no ano: ");
	scanf("%f", &aulas_dadas);
	
	
	Digita_nota_falta(nota_falta);
	
	media_notas = Calcula_media_anual(nota_falta);
	
	if(media_notas<6.0){
		printf("\nM�dia: %.1f. Aluno reprovado por m�dia.", media_notas);
	}
	else{
		printf("\nM�dia: %.1f. Aluno aprovado por m�dia.", media_notas);
	}
	
	indice_frequencia = Teste_reprovacao_faltas(nota_falta, aulas_dadas);
	
	if(indice_frequencia>25.0){
		printf("\nAluno reprovado por faltas. Infrequ�ncia: %.1f", indice_frequencia);
	}	
}
