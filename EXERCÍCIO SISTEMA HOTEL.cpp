#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int Opcao, cpf, apartamento, viajantes, reserva, hospedagem ;
    char nome [30],pagamento[10], serviço [30], pedido[20];
    printf("Selecione uma Opcao\n");
    printf("1- Fazer checkin\n");
    printf("2- Solicitar serviço de quarto\n");
    printf("3- Fazer um pedido\n");
    scanf("%d", &Opcao);
   
    
    switch(Opcao){
        case 1: 
        printf("Informe o nome do indivíduo\n");
        scanf("%s",nome);
        printf("Informe o cpf do indivíduo\n");
        scanf("%d",&cpf);
        printf("Informe a quantidade de viajantes\n");
        scanf("%d",&viajantes);
        printf("Informe o número da reserva\n");
        scanf("%d",&reserva);
        printf("Informe a duração da hospedagem\n");
        scanf("%d",&hospedagem);
        printf("Informe o número do apartamento\n");
        scanf("%d",&apartamento);
        printf("Informe a forma de pagamento\n");
        scanf("%s",pagamento);
        printf("Seu checkin foi realizado com sucesso\n");
        break;
        
        case 2:
        printf("Informe o nome do indivíduo\n");
        scanf("%s",nome);
        printf("Informe o número do apartamento\n");
        scanf("%d",&apartamento);
        printf("Informe qual tipo de serviço deseja\n");
        scanf("%s",serviço);
        printf("Em alguns instantes nossa camarera estará no apartamento\n");
        break;
        
        case 3:
        printf("Informe o nome do indivíduo\n");
        scanf("%s",nome);
        printf("Informe o pedido\n");
        scanf("%s",pedido);
        printf("Informe o número do apartamento\n");
        scanf("%d",&apartamento);
        printf("Em alguns minutos seu pedido chegará ao apartamento\n");
        break;
        
        default:
        printf("Opcao Inválida!Programa Encerrado");
        
        return 1;
    }
        return 0;
        
    }
        
    
    
  