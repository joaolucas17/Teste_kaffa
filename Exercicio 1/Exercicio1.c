#include <stdio.h>
#include <string.h>

int main()
{
    char CNPJ[19];
    int  j, num=0, cont=0, x=0;
    printf("Insira um CNPJ: ");
    scanf("%s", CNPJ);
    //contando quantos caracteres tem o CNPJ informado
    num = strlen(CNPJ);
        //fazendo a validação do CNPJ
        for(j=0;j<num;j++){

            if(CNPJ[j]=='0' || CNPJ[j]=='1' || CNPJ[j]=='2' || CNPJ[j]=='3' || CNPJ[j]=='4' || CNPJ[j]=='5' || CNPJ[j]=='6' || CNPJ[j]=='7' || CNPJ[j]=='8' || CNPJ[j]=='9'){
                cont++;
            }
            else if(CNPJ[j]=='.' || CNPJ[j]=='-' || CNPJ[j]=='/'){
                cont++;
                x++;
            }
            else if(CNPJ[j]=='\0'){
                break;
            }
            else{
                cont=50;
                break;
            }
        }
    //Apresentando status do CNPJ
    if(cont==18 && x==4){
        printf("CNPJ valido!");
    }
    else if(cont==14 && x==0){
        printf("CNPJ valido!");
    }
    else if(cont==50){
        printf("CNPJ invalido!");
    }
    else{
        printf("CNPJ invalido!");
    }
    return 0;
}
