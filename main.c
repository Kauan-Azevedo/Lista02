#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void ex01() {
  /*  A imobiliária Imóbilis vende apenas terrenos retangulares. Faça um
   * algoritmo para ler as dimensões de um terreno e depois exibir a área do
   * terreno. */
  float dimensao, lado, comprimento;

  printf("Valor do lado e do comprimento respectivamente: ");
  scanf("%f%f", &lado, &comprimento);

  dimensao = comprimento * lado;

  printf("%.2f m²", dimensao);
};

void ex02() {
  /*2. Faça um algoritmo para calcular quantas ferraduras são necessárias para
equipar todos os cavalos comprados para um haras.*/
  int cavalos, ferraduras;

  printf("Numero de cavalos: ");
  scanf("%i", &cavalos);

  ferraduras = cavalos * 4;

  printf("Quantidade de ferraduras necessarias: %i", ferraduras);
};

void ex03() {
  /*3. A padaria Hotpão vende uma certa quantidade de pães franceses e uma
quantidade de broas a cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$
1,50. Ao final do dia, o dono quer saber quanto arrecadou com a venda dos pães e
broas (juntos), e quanto deve guardar numa conta de poupança (10% do total
arrecadado). Você foi contratado para fazer os cálculos para o dono. Com base
nestes fatos, faça um algoritmo para ler as quantidades de pães e de broas, e
depois calcular os dados solicitados.*/
  float pao, broa, poup, total;

  printf("Quantidade de paes e broas vendidos respectivamente: ");
  scanf("%f %f", &pao, &broa);

  pao = pao * 0.12;
  broa = broa * 1.50;
  total = pao + broa;
  poup = total * 0.10;

  printf("\nPao: R$ %.2f\nBroa: R$ %.2f\nTotal: R$ %.2f\nGuardar na poupanca: "
         "R$ %.2f ",
         pao, broa, total, poup);
};

void ex04() {
  /*4. Escreva um algoritmo para ler o nome e a idade de uma pessoa, e exibir
quantos dias de vida ela possui. Considere sempre anos completos, e que um ano
possui 365 dias. Ex: uma pessoa com 19 anos possui 6935 dias de vida; veja um
exemplo de saída: MARIA, VOCÊ JÁ VIVEU 6935 DIAS 5.*/
  char nome[150];
  int dias;

  printf("Digite seu nome: ");
  scanf("%s", nome);

  printf("Digite sua idade: ");
  scanf("%i", &dias);

  dias = dias * 365;

  printf("Ola %s voce ja viveu %i dias.", nome, dias);
};

void ex05() {
  //   /*5. Um motorista deseja colocar no seu tanque X reais de gasolina.
  //   Escreva um algoritmo para ler o preço do litro da gasolina e o valor do
  //   pagamento, e exibir quantos litros ele conseguiu colocar no tanque.*/
  float valorReais, precoLitro, gasTanque;

  printf("Quantos rais de gasolina voce colocou e o preco de gasolina "
         "respectivamente: ");
  scanf("%f %f", &valorReais, &precoLitro);

  gasTanque = valorReais / precoLitro;

  printf("\nVoce colocou %.2f litros de gasolina", gasTanque);
};

void ex06() {
  /*6. O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição.
Escreva um algoritmo que leia o peso do prato montado pelo cliente (em quilos) e
imprima o valor a pagar. Assume que a balança já desconte o peso do prato.*/
  float prato, valorFinal;

  printf("Peso da comida: ");
  scanf("%f", &prato);

  valorFinal = prato * 12.00;

  printf("Valor final: %.2f\n", valorFinal);
};

void ex07() {
  /*7. Entrar com o dia e o mês de uma data e informar quantos dias se passaram
desde o início do ano. Esqueça a questão dos anos bissextos e considere sempre
que um mês possui 30 dias.*/
  int diasPassados, dias, mes;

  printf("dia e mes do ano(dd m): ");
  scanf("%i %i", &dias, &mes);

  mes = mes * 30;
  diasPassados = mes + dias;

  printf("Se passaram %i dias desde o inicio do ano.\n", diasPassados);
};

void ex08() {
  /*Faça um algoritmo para ler três notas de um aluno em uma disciplina e
imprimir a sua média ponderada (as notas tem pesos respectivos de 1, 2 e 3).*/

  float mediaP, notaP1, p1 = 1.0, notaP2, p2 = 2.0, notaP3, p3 = 3.0;

  printf("Nota das tres provas respectivamente: ");
  scanf("%f %f %f", &notaP1, &notaP2, &notaP3);

  mediaP = ((notaP1 * p1) + (notaP2 * p2) + (notaP3 * p3)) / (p1 + p2 + p3);

  printf("a media ponderada do aluno é %.2f\n", mediaP);
};

void ex09() {
  /*Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada
uma sendo vendida respectivamente por 10, 12 e 15 reais. Construa um algoritmo
em que o usuário forneça a quantidade de camisetas pequenas, médias e grandes
referentes a uma venda, e a máquina informe quanto será o valor arrecadado.*/
  float cPequena, cMedia, cGrande, total;

  printf("Quantidade de camisetas pequenas, medias e grandes vendidas "
         "respectivamente: ");
  scanf("%f %f %f", &cPequena, &cMedia, &cGrande);

  cPequena = cPequena * 10;
  cMedia = cMedia * 12;
  cGrande = cGrande * 15;
  total = cPequena + cMedia + cGrande;

  printf("O valor total e de: R$ %2.f\n", total);
};

void ex10() {
  /*Construa um algoritmo para calcular a distância entre dois pontos do plano
cartesiano. Cada ponto é um par ordenado (x,y).*/
  int x1, x2, y1, y2;
  float dist;

  printf("\nValor inicial(X, Y): ");
  scanf("%i %i", &x1, &y1);

  printf("Valor do destino(X, Y): ");
  scanf("%i %i", &x2, &y2);

  dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

  printf("A distancia entre (%i, %i) e (%i, %i) é de %.2f\n\n", x1, y1, x2, y2,
         dist);
};

void ex11() {
  /*11. Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade
de dias. Faça um algoritmo para converter este tempo em anos, meses e dias.
Assume que cada mês possui sempre 30 dias.*/
  int dia = 0, mes = 0, ano = 0, acidentes;

  printf("Quantidade de dias sem acidentes: ");
  scanf("%i", &acidentes);

  do {
    if (acidentes >= 360) {
      do {
        ano += 1;
        acidentes -= 360;
      } while (acidentes >= 360);
    };
    if (acidentes >= 30) {
      do {
        mes += 1;
        acidentes -= 30;
      } while (acidentes >= 30);
    };
    if (acidentes > 0) {
      dia += 1;
      acidentes -= 1;
    };
  } while (acidentes > 0);

  printf("\nDia(s): %i\nMese(s): %i\nAno(s): %i\n", dia, mes, ano);
};

void ex12() {
  /*12. Faça um algoritmo para ler o salário de um funcionário e aumentá-lo em
15%. Após o aumento, desconte 8% de impostos. Imprima o salário inicial, o
salário com o aumento e o salário final.*/
  float salAtual, salAumento, salImposto;

  printf("Salario atual: ");
  scanf("%f", &salAtual);

  salAumento = (salAtual / 100) * 15;
  salImposto = salAtual + salAumento - (salAtual / 100) * 8;

  printf("\nSalario Atual: %.2f\nSalario Aumento: %.2f\nSalario final: %.2f\n",
         salAtual, salAumento, salImposto);
};

void ex13() {
  /*13. Ler um número inteiro (assuma até três dígitos) e imprimir a saída da
seguinte forma: CENTENA = x DEZENA = x UNIDADE = x*/
  int numero, centena = 0, dezena = 0, unidade = 0;

  printf("\nDigite um numero ate 999: ");
  scanf("%i", &numero);

  if (numero > 999) {
    printf("Numero inserido excede o limite permitido!!!");
  } else {
    do {
      if (numero > 99) {
        do {
          centena += 1;
          numero -= 100;
        } while (numero > 99);
      };
      if (numero > 9) {
        do {
          dezena += 1;
          numero -= 10;
        } while (numero > 9);
      };
      if (numero > 0) {
        do {
          unidade += 1;
          numero -= 1;
        } while (numero > 0);
      }
    } while (numero > 0);
    printf("Centena: %i\nDezena: %i\nUnidade: %i\n", centena, dezena, unidade);
  }
};

void ex14() {
  /*14. Calcule a área de u ma pizza que possui um raio R (pi=3.14).*/
  float pi = 3.14, raio, area;

  printf("Digite o tamanho do raio: ");
  scanf("%f", &raio);

  area = pi * pow(raio, 2);

  printf("\nA area da pizza é %.1f\n", area);
};

void ex15(){
    /*15. Três amigos, Carlos, André e Felipe, decidiram rachar igualmente a
  conta de um bar. Faça um algoritmo para ler o valor total da conta e imprimir
  quanto cada um deve pagar, mas faça com que Carlos e André não paguem
  centavos. Ex: uma conta de R$101,53 resulta em R$33,00 para Carlos, R$33,00
  para André e R$35,53 para Felipe.*/

    // float totalPagar, felipe;
    // int carlos, andre;

    // printf("Digite o valor da conta: ");
    // scanf("%f", &totalPagar);

    // carlos = (totalPagar / 100) * 33;
    // andre = (totalPagar / 100) * 33;
    // felipe = (totalPagar / 100) * 33.00;

    // printf("Carlos paga: %d.00\nAndre paga: %d.00\nFelipe paga: %.2f\n",
    // carlos,
    //        andre, felipe);

}; // VER DEPOIS

void ex16() {
  /*16. A lanchonete Gostosura vende apenas um tipo de sanduíche, cujo recheio
inclui duas fatias de queijo, uma fatia de presunto e uma rodela de hambúrguer.
Sabendo que cada fatia de queijo ou presunto pesa 50 gramas, e que a rodela de
hambúrguer pesa 100 gramas, faça um algoritmo em que o dono forneça a quantidade
de sanduíches a fazer, e a máquina informe as
quantidades (em quilos) de queijo, presunto e carne necessários para compra.*/
  int sanduiche;
  float queijo = 100, presunto = 50, carne = 100;

  printf("Quantidade de sanduiches: ");
  scanf("%i", &sanduiche);

  queijo = (queijo * sanduiche) / 1000;
  presunto = (presunto * sanduiche) / 1000;
  carne = (carne * sanduiche) / 1000;

  printf("\nSerao necessarios %.2fKg de queijo %.2fKg de presunto e %.2fKg de "
         "carne.\n",
         queijo, presunto, carne);
};

void ex17() {
  /*17. Alguns países medem temperaturas em graus Celsius, e outros em graus
Fahrenheit. Faça um algoritmo para ler uma temperatura Celsius e imprimi-la em
Fahrenheit (pesquise como fazer este tipo de conversão).*/
  float celsius, fahrenheit;

  printf("Digite a temperatura em celsius: ");
  scanf("%f", &celsius);

  fahrenheit = (celsius * 1.8) + 32;
  printf("\n\nCelsius: %.2f °C\nFahrenheit: %.2f °F\n", celsius, fahrenheit);
};

void ex18() {
  /*18. A empresa Hipotheticus paga R$10,00 por hora normal trabalhada, e
R$15,00 por hora extra. Faça um algoritmo para calcular e imprimir o salário
bruto e o salário líquido de um determinado funcionário. Considere que o salário
líquido é igual ao salário bruto descontando- se 10% de impostos.*/
  float trabalhoHora, trabalhoExtra, salarioBruto, salarioLiquido;

  printf("\nTotal de horas trabalhadas: ");
  scanf("%f", &trabalhoHora);

  printf("Quantidade de horas extras: ");
  scanf("%f", &trabalhoExtra);

  salarioBruto = trabalhoHora * 10.0 + (trabalhoExtra * 15.0);
  salarioLiquido = salarioBruto - (salarioBruto * 0.10);

  printf("\nSalario bruto: %.2f\nSalario liquido: %.2f\n", salarioBruto,
         salarioLiquido);
};

void ex19() {
  /*19. A granja Frangotech possui um controle automatizado de cada frango da
sua produção. No pé direito do frango há um anel com um chip de identificação;
no pé esquerdo são dois anéis para indicar o tipo de alimento que ele deve
consumir. Sabendo que o anel com chip custa R$4,00 e o anel de alimento custa
R$3,50, faça um algoritmo para calcular o gasto total da granja para marcar
todos os seus frangos.*/
  float totalCusto;
  int frangos;

  printf("Quantidade de frangos: ");
  scanf("%i", &frangos);

  totalCusto = frangos * (4.0 + (3.50 * 2));

  printf("Ira custar: %.2f R$ para colocar o anel em %i frango(s)", totalCusto,
         frangos);
};

void ex20() {
  /*20. Uma confecção produz X blusas de lã e para isto gasta uma certa
quantidade de novelos.
Faça um algoritmo para calcular quantos novelos de lã ela gasta por blusa.*/
  int camisetas;
  float novelos, calculo;

  printf("Quantas camisas foram produzidas: ");
  scanf("%i", &camisetas);

  printf("Quantos novelos foram gastos: ");
  scanf("%f", &novelos);

  calculo = camisetas / novelos;

  printf("Voce gastou %.2f novelos de lã.", calculo);
};

void ex21() {
  /*21. A fábrica de refrigerantes Meia-Cola vende seu produto em três formatos:
lata de 350 ml, garrafa de 600 ml e garrafa de 2 litros. Se um comerciante
compra uma determinada quantidade de cada formato, faça um algoritmo para
calcular quantos litros de refrigerante ele comprou.*/
  float lata, garrafa, garrafaGrande, somaTotal;

  printf("Quantas garrafas de 350ml, 600ml e 2l voce comprou: ");
  scanf("%f %f %f", &lata, &garrafa, &garrafaGrande);

  lata = (lata * 350) / 1000;
  garrafa = (garrafa * 600) / 1000;

  somaTotal = lata + garrafa + garrafaGrande;

  printf("Voce comprou um total de %.2f litros", somaTotal);
};

void ex22() {
  /*22. Pedrinho tem um cofrinho com muitas moedas, e deseja saber quantos reais
conseguiu poupar. Faça um algoritmo para ler a quantidade de cada tipo de moeda,
e imprimir o valor total economizado, em reais. Considere que existam moedas de
1, 5, 10, 25 e 50 centavos, e ainda moedas de 1 real. Não havendo moeda de um
tipo, a quantidade respectiva é zero.*/

  float um, cinco, dez, vinteCinco, cinquenta, umReal, total = 0;

  printf("Quantidade de moedas de 1, 5, 10, 25, 50 centavos e 1 real(0 0 0 0 0 "
         "0): ");
  scanf("%f %f %f %f %f %f", &um, &cinco, &dez, &vinteCinco, &cinquenta,
        &umReal);

  um = (1 * um) / 100;
  cinco = (5 * cinco) / 100;
  dez = (10 * dez) / 100;
  vinteCinco = (25 * vinteCinco) / 100;
  cinquenta = (50 * cinquenta) / 100;

  total = um + cinco + dez + vinteCinco + cinquenta + umReal;

  printf("Voce tem um total de %.2f Reais", total);
};

void ex23() {
  /*23. Num dia de sol, você deseja medir a altura de um prédio, porém, a
trena não é suficientemente longa. Assumindo que seja possível medir sua sombra
e a do prédio no chão, e que você lembre da sua altura, faça um algoritmo para
ler os dados necessários e calcular a altura do prédio.*/
  float sombraP, qntSombra, total;

  printf("Sua altura e quantidade de sombras: ");
  scanf("%f %f", &sombraP, &qntSombra);

  total = qntSombra * sombraP;

  printf("Altura do predio: %.2f metros", total);
};

void ex24() {
  /*24. Um tonel de refresco é feito com 8 partes de água mineral e 2 partes
de suco de maracujá. Faça um algoritmo para calcular quantos litros de água e de
suco são necessários para se fazer X litros de refresco (informados pelo
usuário).*/
  float refresco, agua, maracuja;

  printf("Quantos litros de refresco voce deseja: ");
  scanf("%f", &refresco);

  agua = refresco * 0.80;
  maracuja = refresco * 0.20;

  printf("Serao necessarios %.2f litros de agua mineral e\n%.2f litros de suco "
         "de maracuja\n",
         agua, maracuja);
};

void ex25() {
  /*25. Calcule o volume de uma caixa d'agua cilíndrica.*/
  float altura, diametroBase, calculo;

  printf("Digite a altura e o diametro da caixa d'agua: ");
  scanf("%f %f", &altura, &diametroBase);

  calculo = diametroBase * altura;

  printf("O volume da caixa d'agua equivale a %.2f", calculo);

  // WIP;
  // https://www.todamateria.com.br/volume-do-cilindro/;
};

void ex26() {
  /*26. Faça um algoritmo que receba três números, calcule e mostre a
multiplicação desses números.*/
  float n1, n2, n3, mult;

  printf("Digite o valor para n1, n2 e n3: ");
  scanf("%f %f %f", &n1, &n2, &n3);

  mult = n1 * n2 * n3;

  printf("Resultado da multiplicacao: %.2f", mult);
};

void ex27() {
  /*27. Faça um algoritmo que receba dois números, calcule e mostre a divisão do
primeiro número pelo segundo. Sabe-se que o segundo número não pode ser zero,
portanto não é necessário se preocupar com validações.*/
  float n1, n2, div;

  printf("Valor para n1 e n2: ");
  scanf("%f %f", &n1, &n2);

  div = n1 / n2;

  printf("Resultado da divisao: %.2f", div);
};

void ex28() {
  /*28. Faça um algoritmo que receba duas notas, calcule e mostre a média
ponderada dessas
notas, considerando peso 2 para a primeira nota e peso 3 para a segunda nota.*/
  float n1, n2, div;

  printf("Valor para n1 e n2: ");
  scanf("%f %f", &n1, &n2);

  div = ((n1 * 1) + (n2 * 2) / (1 + 2));

  printf("Media ponderada: %.2f", div);
}

void ex29() {
  /*29. Faça um algoritmo que receba o preço de um produto, calcule e mostre o
novo preço, sabendo-se que este sofreu um desconto de 10%. 30. Um funcionário
recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um algoritmo
que receba o salário fixo de um funcionário e o valor de suas vendas, calcule e
mostre a comissão e o salário final do funcionário.*/
  float produto, newProduto;

  printf("Preco do produto: ");
  scanf("%f", &produto);

  newProduto = produto - (produto * 0.10);

  printf("Valor final do produto: R$ %.2f", newProduto);
}
void ex30() {
  /*30. Um funcionário recebe um salário fixo
mais 4% de comissão sobre as vendas. Faça um algoritmo que receba o salário fixo
de um funcionário e o valor de suas vendas, calcule e mostre a comissão e o
salário final do funcionário.*/

  float salario, vendas, total;

  printf("Valor do salario e das vendas: ");
  scanf("%f %f", &salario, &vendas);

  total = salario + (vendas * 0.02);

  printf("Salario com as vendas: R$ %.2f", total);
}

void ex31() {
  /*31. Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso se a pessoa emagrecer 20% sobre o peso digitado.*/
  float peso, peso15, peso20;

  printf("Digite seu peso: ");
  scanf("%f", &peso);

  peso15 = peso + (peso * 0.15);
  peso20 = peso + (peso * 0.30);

  printf("Peso se engordar 15%: %.2f\nPeso se engordar 20%: %.2f", peso15,
         peso20);
}

void ex32() {
  /*32. Faça um algoritmo que receba o peso de uma pessoa em quilos, calcule e
mostre esse peso em gramas.*/
  float peso, pesoGrama;

  printf("Diite seu peso: ");
  scanf("%f", &peso);

  pesoGrama = peso * 1000;

  printf("Seu peso e equivalente a %.2f g", pesoGrama);
}

void ex33() {
  /*33. Faça um algoritmo que calcule e mostre a área de um trapézio. Sabe-se
que: A = (base maior + base menor) * altura) /2;*/
  float basem, baseM, altura, area;

  printf("Digite o valor da base menor, base maior e altura do trapezio: ");
  scanf("%f %f %f", &basem, &baseM, &altura);

  area = ((baseM + basem) * altura) / 2;

  printf("A area do trapezio e %.2f m²", area);
}

void ex34() {
  /*34. Faça um algoritmo que calcule e mostre a área de um
quadrado. Sabe-se que: A = lado * lado;*/
  float lado, area;

  printf("Valor do lado: ");
  scanf("%f", &lado);

  area = lado * lado;

  printf("Area do triangulo: %.2f m²", area);
}

void ex35() {
  /*35. Faça um algoritmo que calcule e mostre a área de um losango. Sabe-se
que: A = (diagonal_maior * diagonal_menor)/2;*/
  float dM, dm, area;

  printf("diagonal maior e diagonal menor: ");
  scanf("%f %f", &dM, &dm);

  area = (dM * dm) / 2;

  printf("area do losango: %.2f m²", area);
}

void ex36() {
  /*36. Faça um algoritmo que receba o valor do salário mínimo e o valor do
salário de um
funcionário, calcule e mostre a quantidade de salários mínimos que ganha esse
funcionário.*/
  float salarioMin, salario, i;

  printf("salario minimo e seu salario:");
  scanf("%f %f", &salarioMin, &salario);

  do {
    salario -= salarioMin;
    i++;
  } while (salario > 0);

  printf("Voce recebe %.1f salario(s) minimo(s)", i);
}

void ex37() {
  /*37. Faça um algoritmo que calcule e mostre a tabuada de um número digitado
   * pelo usuário.*/
  int num, tab;

  printf("Numero para tabuada: ");
  scanf("%d", &num);

  for (int i = 0; i <= 10; i++) {
    tab = num * i;
    printf("%d X %d = %d\n", num, i, tab);
  }
}

void ex38() {
  /*38. Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano
atual, calcule e mostre: a) a idade dessa pessoa em anos; b) a idade dessa
pessoa em meses; c) a idade dessa pessoa em dias; d) a idade dessa pessoa em
semanas.*/
  int anoNascimento, anoAtual, idade, meses, semanas, dias;

  printf("Digite seu ano de nascimento, ano atual: ");
  scanf("%d %d", &anoNascimento, &anoAtual);

  idade = anoAtual - anoNascimento;

  meses = idade * 12;
  semanas = idade * 48;
  dias = idade * 365;

  printf("Voce tem %d meses\n%d semanas\n%d dias", meses, semanas, dias);
}

void ex39() {
  /*39. João recebeu seu salário de R$ 1200,00 e precisa pagar duas contas
(C1=R$ 200,00 e C2=R$120,00) que estão atrasadas. Como as contas estão
atrasadas, João terá de pagar multa de 2% sobre cada conta. Faça um algoritmo
que calcule e mostre quanto restará do salário do João;*/
  float c1 = 200.00, c2 = 120.00, resto, salario = 1200.00;

  c1 = 200.00 + (c1 * 0.02);
  c2 = 120.00 + (c2 * 0.02);

  resto = salario - (c1 + c2);

  printf("Restara %.2f R$", resto);
}

void ex40() {
  /*40. Faça um algoritmo que receba o valor dos catetos de um triângulo,
calcule e mostre o valor da hipotenusa.*/
  float c1, c2, h;

  printf("Valor do cateto 1 e 2: ");
  scanf("%f %f", &c1, &c2);

  h = sqrt(pow(c1, 2) + pow(c2, 2));
  h = sqrt(pow(h, 2));

  printf("Valor da hipotenusa: %.2f", h);
}

int main(void) {

  ex13();

  return 0;
}
