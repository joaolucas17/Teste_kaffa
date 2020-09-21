#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char cnpj[15], num;
    int i, j, k, x[14];
    printf("Digite um cnpj: ");
    scanf("%s", cnpj);
    //Convertendo string CNPJ, pata um vetor de inteiro
    for(i=0;i<14;i++){
      if(cnpj[i]=='\0'){
          break;
      }
      else{
          x[i]=cnpj[i]-'0';
        }
    }
    //Verificação de digito de segurança
    j=((x[0]*6)+(x[1]*7)+(x[2]*8)+(x[3]*9)+(x[4]*2)+(x[5]*3)+(x[6]*4)+(x[7]*5)+(x[8]*6)+(x[9]*7)+(x[10]*8)+(x[11]*9))%11;
    k=((x[0]*5)+(x[1]*6)+(x[2]*7)+(x[3]*8)+(x[4]*9)+(x[5]*2)+(x[6]*3)+(x[7]*4)+(x[8]*5)+(x[9]*6)+(x[10]*7)+(x[11]*8)+(j*9))%11;
    if(j>=10){
         j=0;
     }
     if(k>=10){
         k=0;
     }
    //Apresentando status do CNPJ
    if(j==x[12] && k==x[13] ){
        printf("CNPJ valido!");

    }
    else{
        printf("CNPJ invalido!");
    }
}
