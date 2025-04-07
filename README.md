# 🃏 Super Trunfo - Cidades do Brasil (Nível Mestre)

Este projeto em linguagem C simula uma batalha entre duas cartas de cidades brasileiras no estilo *Super Trunfo*, com atributos comparáveis e cálculo de um **Super Poder** especial.

## 📋 Funcionalidades

- Cadastro de 2 cartas com os seguintes dados:
  - Estado (letra)
  - Código da carta (ex: A01)
  - Nome da cidade
  - População (`unsigned long int`)
  - Área (km²)
  - PIB (em bilhões)
  - Número de pontos turísticos

- Cálculo dos seguintes atributos:
  - **Densidade Populacional** (`população / área`)
  - **PIB per Capita** (`PIB / população`)
  - **Super Poder**:
    ```
    população + área + PIB + pontos turísticos + PIB per capita + (1 / densidade populacional)
    ```

- Comparação entre as duas cartas:
  - Para cada atributo (incluindo o Super Poder), o programa exibe **qual carta venceu**, com base nas regras:
    - Quanto **maior o valor**, melhor (exceto para a densidade populacional, onde **menor é melhor**).

## 🧠 Conceitos Aplicados

- Tipos de dados (`char`, `int`, `float`, `unsigned long int`)
- Conversão de tipos
- Operadores relacionais
- Entrada e saída formatada (`scanf`, `printf`)
- Lógica de comparação
- Cálculos com ponto flutuante (`float`)

## 🧑‍💻 Trabalho Acadêmico

Este programa foi desenvolvido como parte de um exercício de lógica e programação em linguagem C, para fins educacionais.
