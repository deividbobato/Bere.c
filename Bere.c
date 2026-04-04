// tela inicial com as 5 opções:
//módulos: 1 Venda de Material de Limpeza - 2 Venda de Alimentos - 3 Padaria - 4 Pagamento - 5 Sair
//dentro de cada módulo, inserir opção de voltar ao menu principal
//criação de variaveis pra guardar os valores que o cliente gastou em cada categoria
//criação de um relatorio geral, com quantidade de vendas e o valor total por dia

#include <stdio.h>

// Definição de variáveis - Valores zerados para as contas comecarem do zero, e permitir a soma acumulada
float totalLimpeza = 0, totalAlimentos = 0, totalPadaria = 0;

//variaveis para o relatorio de fim do dia
float faturamentoDiario = 0;
int qtdVendas = 0;


// Avisamos ao programa que as funções dos outros modulos existem (São avisos, basicamente)
void moduloLimpeza();
void moduloAlimentos();
void moduloPadaria();
void moduloPagamento();

int main() {
    int opcao;
    
    do {
        // Exibe o Menu Principal 
        printf("\n=== Menu Principal ===\n");
        printf("1. Material de Limpeza\n");
        printf("2. Venda de Alimentos\n");
        printf("3. Padaria\n");
        printf("4. Pagamento\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);     
        
        

        
        //O selecionador Switch (direciona o usuário para o lugar certo com base na opção que ele escolheu no Menu Principal)
        switch(opcao) {
            case 1:
                moduloLimpeza(); // Chama a função do módulo de Limpeza
                break;
            case 2:
                moduloAlimentos(); // Chama a função do módulo de Alimentos
                break;
            case 3:
                moduloPadaria();// Chama a função do módulo de Padaria
                break;
            case 4:
                moduloPagamento(); // Chama a função de Pagamento
                break;
            case 5:
                //Pega o que esta guardado nas variaveis de relatorio e mostra na tela antes de encerrar o sistema
                printf("\n--- Fechamento do dia da dona Bere ---\n");
                printf("Quantidadede de vendas realizadas: %d\n" , qtdVendas);
                printf("Faturamento total do dia: R$ %.2f\n" , faturamentoDiario);
                printf("Encerrando o sistema...\n");
                break;  
            
        default: //Se dona Bere digitar um número que não existe, avisa que a opção é inválida
            printf("\nOpcao invalida! Digite um numero de 1 a 5.\n");
            break;
        }
    } while (opcao != 5); // Só sai da repeticao se a opcao for 5
    
    // Mostra o relatório final antes de fechar
    return 0;
}

//Aqui, vamos começar as funções dos respectivos módulos de Limpeza, alimentos, padaria e pagamento!

//Chamando o modulo de Alimentos!

void moduloAlimentos() {
    
    int codigo = 0;          //Armazena o código do produto digitado pelo usuário
    int quantidade = 0;      //Armazena a quantidade do produto
    float preco = 0;         //Armazena o preço do produto escolhido
    

    //Loop que mantém o menu ativo até o usuário digitar 26
    while (codigo != 26) {   

        //Exibição do menu de produtos
        printf("\nTELA DE ALIMENTOS\n");
        printf("21 - Cafe (R$ 19.99)\n");
        printf("22 - Leite(cx) (R$ 5.90)\n");
        printf("23 - Arroz(1kg) (R$ 4.50)\n");
        printf("24 - Feijao Preto(1kg) (R$ 8.00)\n");
        printf("25 - Açucar(1kg) (R$ 5.00)");
        printf("26 - Voltar ao menu principal\n");

        //Solicita que o usuário digite o código do produto
        printf("\nDigite o codigo do produto: ");
        scanf("%d", &codigo);

        //Se o código for 26, sai do loop
        if (codigo == 26) {   
            break;
        }

        //Solicita a quantidade do produto escolhido
        printf("Digite a quantidade: ");
        scanf("%d", &quantidade);

        //Estrutura de decisão para definir o preço de acordo com o código
        switch (codigo) {

            case 21:             //Se escolher Café
                preco = 19.99;
                break;

            case 22:             //Se escolher Leite
                preco = 5.90;
                break;

            case 23:             //Se escolher Arroz
                preco = 4.50;
                break;

            case 24:             //Se escolher Feijão preto
                preco = 8.00;
                break;

            case 25:             //Se escolher Açucar
                preco = 5.00;
                break;

            default:            //Caso o código digitado não exista
                printf("Codigo invalido!\n");
                preco = 0;      //Define o preço como 0 para não somar valor incorreto
        }

        //Calcula o subtotal acumulando o valor da compra atual
        totalAlimentos += quantidade * preco;

        //Exibe o valor parcial da compra
        printf("Subtotal atual: R$ %.2f\n", totalAlimentos);
    }

    //Exibe o total final da compra ao sair do loop
    printf("\nTotal final de alimentos: R$ %.2f\n", totalAlimentos);
    printf("Voltando ao menu...\n");

}


void moduloPadaria() { //Chamando o módulo de padaria!


    int codigo = 0;          //Armazena o código do produto digitado pelo usuário
    int quantidade = 0;      //Armazena a quantidade do produto
    float preco = 0;         //Armazena o preço do produto escolhido

    //Loop que mantém o menu ativo até o usuário digitar 35
    while (codigo != 35) {   

        //Exibição do menu de produtos
        printf("\nPADARIA\n");
        printf("31 - Pao de Forma (R$ 9.50)\n");
        printf("32 - Pao Integral (R$ 12.50)\n");
        printf("33 - Pao Frances(Unid) (R$ 1.90)\n");
        printf("34 - Sonho (R$ 8.50)\n");
        printf("35 - Voltar ao menu principal\n");

        //Solicita que o usuário digite o código do produto
        printf("\nDigite o codigo do produto: ");
        scanf("%d", &codigo);

        //Se o código for 35, sai do loop e volta ao menu principal
        if (codigo == 35) {   
            break;
        }

        //Solicita a quantidade do produto escolhido
        printf("Digite a quantidade: ");
        scanf("%d", &quantidade);

        //Estrutura de decisão para definir o preço de acordo com o código
        switch (codigo) {

            case 31:             //Se escolher pao de forma
                preco = 9.50;
                break;

            case 32:             //Se escolher pao integral
                preco = 12.50;
                break; 

            case 33:             //Se escolher pao frances
                preco = 1.90;
                break;

            case 34:             //Se escolher sonho
                preco = 8.50;
                break;

            default:            //Caso o código digitado não exista
                printf("Codigo invalido!\n");
                preco = 0;      //Define o preço como 0 para não somar valor incorreto
        }

        //Calcula o subtotal acumulando o valor da compra atual
        totalPadaria += quantidade * preco;

        //Exibe o valor parcial da compra
        printf("Subtotal atual: R$ %.2f\n", totalPadaria);
    }

    //Exibe o total final da compra ao sair do loop
    printf("\nTotal final da padaria: R$ %.2f\n", totalPadaria);
    printf("Voltando ao menu principal...\n");

}


void moduloPagamento() {  //Chamando o modulo de pagamento!

    float total_geral = totalLimpeza + totalAlimentos + totalPadaria;

    printf("\n----- Resumo da compra -----\n");
    printf("Total limpeza : R$ %.2f\n", totalLimpeza);
    printf("Total alimentos : R$ %.2f\n", totalAlimentos);
    printf("Total padaria : R$ %.2f\n", totalPadaria);
    printf("Total a pagar : R$ %.2f\n", total_geral);

    int pagamento;
    float valor_pago, troco;

    printf("\nForma de pagamento:\n");
    printf("36 - Dinheiro\n");
    printf("37 - Cartao\n");
    printf("Escolha: ");
    scanf("%d", &pagamento);

    if(pagamento == 36) {

        float desconto = 0;

        if(total_geral > 100)
            desconto = total_geral * 0.18;
        else if(total_geral >= 50)
            desconto = total_geral * 0.10;
        else if(total_geral >= 30)
            desconto = total_geral * 0.05;

        float total_com_desconto = total_geral - desconto;

        printf("Total com desconto: R$ %.2f\n", total_com_desconto);

        printf("Digite o valor pago: ");
        scanf("%f", &valor_pago);

        if(valor_pago < total_com_desconto) {
            printf("Valor insuficiente!\n");
        } else {
            troco = valor_pago - total_com_desconto;
            printf("Troco: R$ %.2f\n", troco);
            printf("Compra finalizada!\n");
        }

    } else if(pagamento == 37) {

        printf("Pagamento no cartao aprovado!\n");
        printf("Compra finalizada!\n");

    } else {

        printf("Opcao invalida!\n");
    }

    faturamentoDiario += total_geral;
    qtdVendas++;

    totalLimpeza = 0;
    totalAlimentos = 0;
    totalPadaria = 0;
}