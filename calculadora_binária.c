#include <stdio.h>

int main(){
int operacao,num_1,num_2,div_1,div_2,res_1,res_2,i,j,mult,num_prim,num_sec;
int v1[6];
int v2[6];
int vsoma[6];
int vsub[6];
div_1=10000;
div_2=10000;

printf("        Calculadora Binaria\n");
printf("----------------------------------------------\n");
printf("Digite o numero correspondente a operacao que deseja fazer:\n");
printf("[1] Soma\n");
printf("[2] Subtracao\n");
printf("[3] Divisao\n");
printf("[4] Multiplicacao\n");
scanf("%i",&operacao);
printf("Digite agora os numeros que deseja somar:\n");
scanf("%i%i",&num_prim,&num_sec);


num_1=num_prim;
num_2=num_sec;

for(i=1;i<=5;i++){

    v1[i]=num_1/div_1;
    num_1= num_1-(v1[i]*div_1);
    div_1=div_1/10;

}

for(j=1;j<=5;j++){

    v2[j]=num_2/div_2;
    num_2= num_2-(v2[j]*div_2);
    div_2=div_2/10;

}
//SOMA
switch(operacao){

    case 1:
        for(j=5;j>=0;j--){

           vsoma[j]= v1[j]+ v2[j];


            if (vsoma[j]==2){
                vsoma[j]= 0;

                v1[j-1]=v1[j-1] + 1;
            }
            if(vsoma[j]==3){
                vsoma[j]= 1;

                v1[j-1]=v1[j-1] + 1;
            }
            if(vsoma[j]==1){
                vsoma[j]= 1;

            }
            if(vsoma[j]==0){
                vsoma[j]= 0;

            }

        }
            printf("------------\n");
        for(i=1;i<=5;i++){

            printf("%i",vsoma[i]);
        }
    break;
//SUBTR4AÇÃO
    case 2:
        for(j=5;j>=0;j--){

           vsub[j]= v1[j]- v2[j];


            if (vsub[j]==-1){
                vsub[j]= 1;

                v1[j-1]=v1[j-1]- 1;
            }
            if(vsub[j]==0){
                vsub[j]= 0;

            }
            if(vsub[j]==1){
                vsub[j]= 1;

            }
            if(vsub[j]==-2){
                vsub[j]= 0;

                v1[j-1]=v1[j-1]- 1;
            }

        }
            printf("------------\n");
        for(i=1;i<=5;i++){

            printf("%i",vsub[i]);
        }
    break;

    case 3:
        mult=num_prim*num_sec;
        printf("%i",mult);
    break;
}
    return 0;
    }

