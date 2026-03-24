# 🎯 Jogo de Adivinhação em C

Um jogo simples de adivinhação desenvolvido em linguagem C, onde o jogador tenta acertar um número aleatório com base em dicas e níveis de dificuldade.

---

## 📌 Visão Geral

Este projeto tem como objetivo praticar conceitos fundamentais da linguagem C, incluindo:

- Geração de números aleatórios (`rand`, `srand`)
- Estruturas de controle (`if`, `else`, `do-while`)
- Ponteiros e passagem por referência
- Modularização com múltiplos arquivos (`.c` e `.h`)

O jogo é dividido em dois arquivos principais:
- `main_jogo.c` → controla o fluxo do jogo
- `jogo.c` → contém a lógica de cada rodada

---

## 📂 Estrutura do Projeto

```
/projeto
│── main_jogo.c
│── jogo.c
│── jogo.h
```

---

## 🧠 Funcionamento Geral

1. O programa inicia no `main.c`
2. Inicializa o gerador de números aleatórios
3. Executa um loop chamando `jogar_rodada()`
4. O jogo continua até o usuário decidir sair

---

## 🧩 Código Principal (`main.c`)

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "jogo.h"

int main() {
    int continuar;
    int pontos = 0;
    int contador_tentativas = 0;

    srand(time(NULL)); // inicializa um numero aleatorio com base no tempo atual

    do {
        jogar_rodada(&continuar, &pontos, &contador_tentativas);
    } while (continuar == 1); 

    printf("Fim de jogo.\n");
    return 0;
}
```

### 🔍 Responsabilidades do `main.c`

- Inicializar a semente aleatória (`srand`)
- Controlar o loop principal do jogo
- Gerenciar estado global:
  - Pontuação
  - Tentativas
  - Continuação do jogo

---

## 🎮 Lógica do Jogo (`jogo.c`)

A função principal:

```c
void jogar_rodada(int *continuar, int *pontos, int *contador_tentativas);
```

### Funções do módulo:

- Escolha de dificuldade (fácil, médio, difícil)
- Geração de número aleatório
- Dica de paridade (par ou ímpar)
- Entrada e validação do chute
- Atualização de pontos e tentativas
- Controle de continuidade do jogo

---

## 🎯 Níveis de Dificuldade

| Nível   | Intervalo        |
|--------|------------------|
| Fácil  | 0 a 9            |
| Médio  | 0 a 49           |
| Difícil| 0 a 99           |

---

## ⚙️ Funcionalidades

- 🎯 Sistema de níveis
- 🔢 Número aleatório por rodada
- 💡 Dica (par/ímpar)
- 📊 Sistema de pontuação
- 🔁 Contador de tentativas
- 🔄 Loop contínuo até o usuário sair
- ✅ Validação básica de entrada

---

## ▶️ Compilação

```bash
gcc main_jogo.c jogo.c -o jogo
```

---

## ▶️ Execução

```bash
.\main_jogo
```

---

## 🖥️ Exemplo de Execução

```
Vamos advinhar um numero aleatorio!!
==========================
Escolha o nivel (1/2/3): 2

Dica: O numero eh impar
Digite seu guess: 0 a 49: 13

Vish, deu ruim! O numero era: 27
Voce fez 0 pontos ate agora.
Voce fez 1 tentativas ate agora.
Continuar? (Digite 1 para sim, 0 para sair):
```

---

## ⚠️ Observações

- `system("cls")` funciona apenas no Windows  
  → Em Linux/Mac use:
  ```c
  system("clear");
  ```

- Sempre use:
  ```c
  srand(time(NULL));
  ```
  para evitar números repetidos

---

## 🚀 Possíveis Melhorias

- 🔁 Múltiplas tentativas por rodada
- 📈 Sistema de ranking
- 🎯 Dicas adicionais (maior/menor)
- 💾 Salvar resultados em arquivo
- 🖥️ Interface mais amigável
- ⏱️ Sistema de tempo por rodada

---

## 🧠 Conceitos Aplicados

- Modularização de código
- Ponteiros e passagem por referência
- Controle de fluxo
- Geração de números aleatórios
- Entrada e saída padrão

---

## 📄 Licença

Uso livre para fins acadêmicos e aprendizado.

---

## 👨‍💻 Autor

Projeto desenvolvido como prática de programação em C.
