# Bere.c 

Um sistema simples de PDV escrito em C, simulando as operações diárias de uma pequena mercearia.

Desenvolvido como projeto mensal do curso de Engenharia de Software da UniAmérica.

---

## Funcionalidades

- Módulo de material de limpeza — seleção de produtos e acompanhamento de subtotal
- Módulo de alimentos — seleção de produtos com subtotal acumulado
- Módulo de padaria — seleção de produtos com subtotal acumulado
- Módulo de pagamento — dinheiro (com descontos progressivos) ou cartão, cálculo de troco
- Relatório de fechamento do dia — quantidade total de vendas e faturamento diário ao encerrar

## Regras de desconto (apenas dinheiro)

| Valor da compra | Desconto |
|---|---|
| R$ 30,00 – R$ 49,99 | 5% |
| R$ 50,00 – R$ 99,99 | 10% |
| R$ 100,00 ou mais | 18% |

---

## Como compilar e executar

Requisitos: GCC (ou qualquer compilador C)

```bash
gcc Bere.c -o bere
./bere
```

---

## Conceitos utilizados

- Funções e estrutura modular
- Laços `do-while` e `while`
- `switch` para navegação no menu
- Variáveis globais para acumular estado
- Entrada e saída básica com `scanf` e `printf`
