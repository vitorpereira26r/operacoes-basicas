# operacoes-basicas

Notas:
Q1: 100
Q2: 100
Q3: 100
Q4: 100
Q5: 67.7
Q6: 100
Q7: 100
Q8: 100
Q9: 86.7
Q10: 100
Q11: 100
Total: 96

----------------------------------------------------

Questão 1: Operações básicas - Hello World! - 2
Faça um programa que escreva na tela: "Hello World! Este eh meu segundo programa!".

Entradas:

Não é necessário nenhuma entrada para este programa.
Saídas:

Texto entre aspas, conforme enunciado, exibindo inclusive as aspas.
Exemplo de Saída:

"Hello World! Este eh meu segundo programa!"

----------------------------------------------------

Questão 2: Operações básicas - Salário a receber
Desenvolva um programa que recebe o valor do salário mínimo e o número de horas trabalhadas por um funcionário, escritos em linhas diferentes. O programa deverá calcular e mostrar o salário que o funcionário irá receber seguindo as seguintes regras:

A hora trabalhada vale 5% do salário mínimo;
O salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
O imposto equivale a 23% do salário bruto;
O salário a receber equivale ao salário bruto menos o imposto.
Entrada:

Um número real indicando o valor do salário mínimo;
Um valor inteiro indicando o número de horas trabalhadas.
Saída:

Número real que representa o valor do salário a receber.
Exemplo de entrada:

1200
160
Exemplo de saída:

7392
Exemplo de Entrada:

845.36
80
Exemplo de Saída:

2603.71 

----------------------------------------------------

Questão 3: Operacões básicas - Conversão de salário
Faça um programa que receba o valor do salário de um funcionário em reais e converta este valor para Dólar, Euro e Libra.

Adote:

1 Dólar = 2.13 Reais
1 Euro = 2.84 Reais
1 Libra = 3.34 Reais
Entradas:

Valor em reais do salário do funcionário (número real).
Saídas (atenção à ordem):

Valor do salário em Dólar (número real).
Valor do salário em Euro (número real).
Valor do salário em Libra (número real).
Exemplo de Entrada:

600
Exemplo de Saída:

281.69
211.26
179.64
Exemplo de Entrada:

816.87
Exemplo de Saída:

383.51
287.63
244.57

----------------------------------------------------

Questão 4: Operações básicas - Área do trapézio
A área de um trapézio é dada pela seguinte expressão:

Área = [(base maior + base menor) * altura] / 2

Faça um programa que receba as medidas acima de um trapézio (as duas bases e a altura), escritas em linhas separadas, calcula e exiba sua área.

Entrada:

Número real indicando o valor da base maior do trapézio;
Número real indicando o valor da base menor do trapézio;
Número real indicando o valor da altura do trapézio.
Saída:

Número real representando a área do trapézio (não deve haver limitação de casas decimais).
Exemplo de entrada:

6.4
4.2
2.8
Exemplo de saída:

14.84
Exemplo de Entrada:

10
7.3
3
Exemplo de Saída:

25.95

----------------------------------------------------

Questão 5: Operações básicas - Número de degraus
Cada degrau de uma escada tem uma certa altura. Faça um programa que receba essa altura em centímetros e a altura que o usuário deseja subir na escada em metros. Calcule e escreva quantos degraus o usuário deverá subir para, no mínimo, atingir seu objetivo, sem se preocupar com a altura do usuário.

Sugestão: use uma biblioteca matemática para arredondamento.

Entradas:

Altura dos degraus em centímetros (número real).
Altura que se deseja alcançar em metros (número real).
Saídas:

Número inteiro de degraus necessários para atingir o objetivo.
Exemplo de Entrada:

40
2
Exemplo de Saída:

5

----------------------------------------------------

Questão 6: Operações básicas - Construção de caravelas
Para organizar a expedição de Lisboa para o Brasil, Cabral dispunha de cinco naus e precisava calcular quantas caravelas iria construir, de acordo com a quantidade de homens. Cada nau tinha capacidade para 200 pessoas e cada caravela tinha capacidade para 80 pessoas. Faça um programa para ler a quantidade de homens e calcular quantas caravelas seria necessário construir. Assuma que Cabral utilizará primeiro todas as suas naus já construídas e só então, caso seja necessário, irá mandar construir as caravelas necessárias. Nesta questão, assuma também que a quantidade de homens a serem transportados sempre será no mínimo o suficiente para utilizar por completo todas as naus.

Considere que se a quantidade de caravelas for decimal, é necessário construir uma caravela a mais (usar a função ceil).

Entradas:

Quantidade de homens
Saídas:

Quantidade de caravelas
Exemplo de Entrada:

1200
Exemplo de Saída:

3

----------------------------------------------------

Questão 7: Operações básicas - Velocidade do Carro
O espaço que um carro precisa para parar completamente depende de vários fatores. Apesar disso, algumas vezes é desejável avaliar a velocidade de um carro baseando-se no comprimento das marcas de derrapagem na pista.

Em condições comuns, a velocidade é aproximadamente igual a 14.6 vezes a raiz quadrada do comprimento da marca de derrapagem. Matematicamente: v = 14.6 c , em que v é a velocidade do carro e c é o comprimento da marca de derrapagem.

Faça um programa que recebe o comprimento de uma marca de derrapagem e escreve a velocidade aproximada do carro.

Entrada:

Número real indicando o comprimento da marca de derrapagem.
Saída:

Número real indicando a velocidade aproximada do carro.
Exemplo de Entrada:

39.3
Exemplo de Saída:

91.527
Exemplo de Entrada:

15
Exemplo de Saída:

56.546

----------------------------------------------------

Questão 8: Operações Básicas - Representar valor com o menor número de notas
A moeda corrente de um determinado país possui notas de 100, 50, 20, 10, 5, 2 e 1 unidade monetária. Faça um programa que recebe um valor inteiro positivo nesta moeda, e retorna quantas notas de cada valor devem ser utilizadas para obter tal valor, utilizando o menor número de notas possível.

Entradas:

Um número inteiro positivo, representando o valor a ser obtido utilizando as notas.
Saídas:

Número de notas de 100.
Número de notas de 50.
Número de notas de 20.
Número de notas de 10.
Número de notas de 5.
Número de notas de 2.
Número de notas de 1.
Exemplo de Entrada:

36
Exemplo de saída:

0 
0 
1
1
1
0
1
Exemplo de Entrada:

267
Exemplo de Saída:

2
1
0
1
1
1
0

----------------------------------------------------

Questão 9: Operações Básicas - Conversão de Milissegundos para Horário
Implemente um programa que receba um número que represente o tempo em milissegundos que se passou desde as 00 : 00 : 00 (HORAS : MINUTOS : SEGUNDOS) horas de um dia. O seu programa deve imprimir na saída padrão a hora representada por este número de milissegundos.

Entradas:

Número inteiro representando o tempo em milissegundos.
Saída:

Tempo convertido para o formato "HORAS : MINUTOS : SEGUNDOS", conforme essa formatação (itens separados por espaço), em que HORAS e MINUTOS são números inteiros e SEGUNDOS um número real.
Exemplo de Entrada:

3600000
Exemplo de Saída:

1 : 0 : 0.0
Exemplo de Entrada:

8746900
Exemplo de Saída:

2 : 25 : 46.9

----------------------------------------------------

Questão 10: Operações básicas - Embalagens de Luxo
Um fabricante produz e embala seus produtos dois a dois. Recentemente ele começou a experimentar a venda dos produtos em embalagens de luxo, para presente, com preço maior.

Uma pesquisa de mercado estimou que existe demanda para 1/3 da sua produção distribuídos em embalagens de luxo. O fabricante então adaptou a linha de produção de tal forma que duas embalagens comuns são usadas, depois uma de luxo, depois mais duas comuns, depois mais uma de luxo e assim por diante.

Faça um programa que dada a quantidade de produtos, informe quantos foram distribuídos em embalagens comuns e quantos foram distribuídos em embalagens de luxo.

Entradas:

O número de produtos produzidos (um número inteiro, positivo).
Saídas:

O número de produtos distribuídos em embalagens comuns (número inteiro).
O número de produtos distribuídos em embalagens de luxo (número inteiro).
Exemplo de Entrada:

16
Exemplo de Saída:

11
5
Exemplo de Entrada:

26
Exemplo de Saída:

18
8

----------------------------------------------------

Questão 11: Operações básicas - Número de diagonais de um polígono convexo
Faça um programa que receba o número de lados de um polígono convexo, calcule e mostre o número de diagonais desse polígono. Sabe-se que NumeroDeDiagonais = [N * (N - 3)] / 2, em que N é o número de lados do polígono.

Entrada:

Número inteiro representando o número de lados do polígono (N > 3).
Saída:

Numero de diagonais desse polígono.
Exemplo de Entrada:

9
Exemplo de Saída:

27
Exemplo de Entrada:

3
Exemplo de Saída:

0
