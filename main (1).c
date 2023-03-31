#include <stdio.h>

int main() {
  int a,b;
  printf("digite 2 numeros inteiros\n");
  scanf("%d", &a);
  scanf("%d", &b);
   (a>b)? printf("o maior numero eh %d",a)
        : printf("o maior numero eh %d",b);

    return 0;
}

#include <stdio.h> 
#include <math.h>

int main() {
  float a;
  printf("digite um numero\n");
  scanf("%f", &a);
   (a>=0)? printf("numero positivo, raiz quadrada eh %.2f",sqrt (a))
         : printf ("numero invalido");

    return 0;
}

#include <stdio.h> 
#include <math.h>

int main() {
  float a;
  printf("digite um numero\n");
  scanf("%f", &a);
   (a>=0)? printf("numero positivo, raiz quadrada eh %.2f",sqrt (a))
         : printf ("numero ao quadrado eh %.2f", a*a);

    return 0;
}

#include <stdio.h> 
#include <math.h>

int main() {
  float a;
  printf("digite um numero\n");
  scanf("%f", &a);
   (a>=0)? printf("numero positivo, raiz quadrada eh %.2f e numero ao quadrado eh %.2f",sqrt (a), a*a)
         : printf ("");
     return 0;
}

#include <stdio.h> 
#include <math.h>

int main() {
  int a,rest;
  printf("digite um numero\n");
  scanf("%d", &a);
  rest= a%2;
   (rest==0)? printf("numero %d eh par",a)
            : printf ("numero %d eh impar",a);
     return 0;
}

#include <stdio.h> 
#include <math.h>

int main() {
  int a,b,d,d2;
  printf("digite dois numeros\n");
  scanf("%d\n%d", &a, &b);
  d= a-b;
  d2= b-a;
   (a>b) ? printf("numero maior é %d e a diferenca eh %d",a,d)
         : printf("numero maior é %d e a diferenca eh %d",b,d2);
          
     return 0;
}

#include <stdio.h> 
#include <math.h>

int main() {
  int a,b;
  printf("digite dois numeros\n");
  scanf("%d\n%d", &a, &b);
  if (a!=b){
(a>b) ? printf("numero maior é %d",a) : printf("numero maior é %d",b);
  }
  else {(b=a); printf("numeros iguais");}
  
          
     return 0;
}

#include <stdio.h> 
#include <math.h>

int main() {
  float a,b,c;
  int not_min=0.0,not_mat=10.0;
  printf ("digite duas notas\n");
  scanf("%f\n%f", &a, &b);
  c= (a+b)/2;
  (a>=not_min && a<=not_mat && b>=not_min &&b<=not_mat)? 
    printf("a media das notas eh %.2f", c): printf("nota invalida");
          
     return 0;
}

#include <stdio.h> 
#include <math.h>

int main() {
  float a,b,c,d;
  printf ("salario de um trabalhador e o valor da prestacao de um emprestimo\n");
  scanf("%f\n%f", &a, &b);
  c= (a/100)*20;
  (b>c)? 
    printf("Empréstimo não concedido"): printf("Empréstimo concedido");
          
     return 0;
}


#include <stdio.h>
#include <string.h>

int main(void)
{
    float h; char s[1];
    printf("Entre com o sexo(f ou m)");
    scanf("%s", s);
    printf("Entre com a altura");
    scanf("%f", &h);

    (strcmp(s, "f") == 0) ? printf("Peso ideal %.2f\n", (62.1*h)-44.7)
                          : printf("Peso ideal %.2f\n", (72.7*h)-58);

    return 0;


#include <stdio.h>

int main(void)
{
    int n, sum;
    printf("Entre com n maior que 0 ");
    scanf("%d", &n);

    if(n != 0)
    {
        while(n != 0)
        {        
            sum += n%10;
            n /= 10;
        }

        printf("Soma -> %d\n", sum);
    }
    else printf("Numero invalido\n");

    return 0;
} 


#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    printf("um numero");
    scanf("%d", &n);

    (n > 0) ? printf("Logaritomo eh %.2f\n", log(n)) 
            : printf("Numero invalido\n");

    return 0;
} 

#include <stdio.h>
#define NOTA_APROVACAO 60
#define PESO_NOTA_1 1
#define PESO_NOTA_2 1
#define PESO_NOTA_3 2

int main(void)
{
    float n1, n2, n3;
    printf("Entre com a nota de 3 provas -> ");
    scanf("%f%f%f", &n1, &n2, &n3);
    
    float media = (n1*PESO_NOTA_1)+(n2*PESO_NOTA_2)+(n3*PESO_NOTA_3)/PESO_NOTA_1+PESO_NOTA_2+PESO_NOTA_3;
    printf("[+] Media  %.2f\n", media);
    
    (media >= NOTA_APROVACAO) ? printf("Aprovado!\n") 
                              : printf("Reprovado!\n");
    
    return 0;
}

#include <stdio.h>
#define VALOR_MIN_NOTA 0
#define VALOR_MAX_NOTA 10
#define VALOR_APROVACAO 2.9
#define VALOR_RECUPERACAO 4.9

int main(void)
{
    double n1, n2, n3;
    printf("Entre com 3 notas -> ");
    scanf("%la%la%la", &n1, &n2, &n3);
    
    if((n1 > VALOR_MIN_NOTA && n1 <= VALOR_MAX_NOTA) && (n2 <= VALOR_MAX_NOTA && n2 > VALOR_MIN_NOTA) && (n3 <= VALOR_MAX_NOTA && n3 > VALOR_MIN_NOTA))
    {
        double media = n1*2+n2*3+n3*5/10;

        if(media <= VALOR_APROVACAO) printf("Reprovado\n");
        else if(media <= VALOR_RECUPERACAO) printf("Recuperacao\n");
        else printf("Aprovado\n");
    }
    else printf("As notas devem ser entre 0 e 10\n");
    
    return 0;
}


#include <stdio.h>

int main(void)
{
    unsigned int n;
    printf("Entre com numero entre 1 e 7 λ> ");
    scanf("%d", &n);
    
    switch(n)
    {
        case 1: printf("Domingo\n"); break;
        case 2: printf("Segunda-Feira\n"); break;
        case 3: printf("Terca-Feira\n"); break;
        case 4: printf("Quarta-Feira\n"); break;
        case 5: printf("Quinta-Feira\n"); break;
        case 6: printf("Sexta-Feira\n"); break;
        case 7: printf("Sabado\n"); break;
    }
    
    return 0;
}


#include <stdio.h>

int main(void)
{
    float baseMenor, baseMaior, altura;
    printf("Entre com a baseMenor, baseMenor e a altura -> ");
    scanf("%f%f%f", &baseMaior, &baseMenor, &altura);
    
    (baseMaior > 0 && baseMenor > 0) ? printf("[+] Area do trapézio -> %.2f\n", (baseMaior + baseMenor) * altura / 2)
                                     : printf("As bases devem ser maiores que zero\n");
    
    return 0;
}


#include <stdio.h>

int main(void)
{
    unsigned int op;
    int x, y;
    printf("Vamos brincar de matematica!\n\n");
    printf("[1] Somar [2] Subtrair [3] Multiplicar [4] Dividir\n");
    printf("Entre com a opcao desejada -> ");
    scanf("%d", &op);
    
    printf("Entre com 2 inteiros x, y -> ");
    scanf("%d%d", &x, &y);
 
    if(op == 1) printf("\n[+] %d + %d = %d\n", x, y, x+y);
    else if(op == 2) printf("\n[-] %d - %d = %d\n", x, y, x-y);
    else if(op == 3) printf("\n[*] %d * %d = %d\n", x, y, x*y);
    else if(op == 4) printf("\n[/] %d / %d = %d\n", x, y, x/y);
    else printf("\nOpcao Invalida!\n");
    
    return 0;
}


int main(void)
{
    int n;
    printf("Entre com um numero λ> ");
    scanf("%d", &n);

    if(n % 3 == 0) printf("[λ] %d eh divisivel por 3\n", n);
    else if(n % 5 == 0) printf("[λ] %d eh divisivel por 5\n", n);
    else printf("[λ] %d nao eh divisivel por 3 nem 5\n", n);

    return 0;
}


#include <stdio.h>

int main(void)
{
    float a, b, c;
    printf("Entre com os lados a, b e c -> ");
    scanf("%f%f%f", &a, &b, &c);
    
    if((a+b > c && a+c > b && b+c > a))
    {
        if(a == b && b == c) printf("[+] Equilatero\n");
        else if(a != b && b != c) printf("[+] Escaleno\n");
        else printf("[+] Isoceles\n");
    }
    else printf("As medidas nao formam um triangulo\n");
    
    return 0;
}


#include <stdio.h>

int main(void)
{
    unsigned int op;
    printf("Escolha a opcao:\n");
    printf("1- Soma de 2 números.\n");
    printf("2- Diferença entre 2 números (maior pelo menor).\n");
    printf("3- Produto entre 2 números.\n");
    printf("4- Divisão entre 2 números (o denominador não pode ser zero).\n");
    printf("Opção -> ");
    scanf("%d", &op);
    
    int x, y;
    printf("Entre com x e y -> ");
    scanf("%d%d", &x, &y);
    
    switch(op)
    {
        case 1:
            printf("[+] Soma -> %d\n", x+y);
            break;
        case 2:
            (x > y) ? printf("[-] Diferenca -> %d\n", x-y) : printf("[-] Diferenca -> %d\n", y-x);
            break;
        case 3:
            printf("[*] Produto -> %d\n", x*y);
            break;
        case 4:
            (y != 0) ? printf("[/] Divisao -> %.2f\n", (float)x/y) : printf("O denominador nao pode ser 0\n");
            break;
        default:
            printf("Opção invalida\n");
    }
    
    return 0;
}


#include <stdio.h>

int main(void)
{
    int i, ts;
    printf("Entre com a idade e o tempo de servico -> ");
    scanf("%d%d", &i, &ts);
    
    (i >= 65 || ts >= 30 || (i >= 60 && ts >= 25))
        ? printf("Pode se aposentar\n")
        : printf("Nao pode se aposentar\n");
    
    return 0;
}


#include <stdio.h>

int main(void)
{
    int a;
    printf("Entre com um ano qualquer -> ");
    scanf("%d", &a);
    
    (a % 400 == 0 || (a % 4 == 0 && a % 100 != 0))
        ? printf("Ano bixesto\n")
        : printf("Nao eh bixesto\n");
    
    return 0;
}


#include <stdio.h>
#include <string.h>
#define IMP_MG 0.07
#define IMP_SP 0.12
#define IMP_RJ 0.15
#define IMP_MS 0.08

int main(void)
{
    float preco;
    char estado[2];
    printf("Entre com o preco do produto -> ");
    scanf("%f", &preco);

    printf("Entre com o estado -> ");
    scanf("%s", estado);

    if(strcmp(estado, "MG") == 0) printf("[λ] Total %.2f\n", preco * IMP_MG + preco);
    else if(strcmp(estado, "SP") == 0) printf("[λ] Total %.2f\n", preco * IMP_SP + preco);
    else if(strcmp(estado, "RJ") == 0) printf("[λ] Total %.2f\n", preco * IMP_RJ + preco);
    else if(strcmp(estado, "MS") == 0) printf("[λ] Total %.2f\n", preco * IMP_MS + preco);
    else printf("[λ] Somente os estados MG, SP, RJ, MS sao validos\n");

    return 0;
}


#include <stdio.h>
#include <math.h>
int main(void)
{
    int a, b, c, delta;
    printf("Entre com os coeficientes -> ");
    scanf("%d%d%d", &a, &b, &c);

    if(a != 0)
    {
        delta = (b * b) - (4 * a * c);
        if (delta < 0 ) printf("Nao existe raiz real\n");
        else if(delta == 0)
        {
            printf("Existe uma raiz real\n");
            printf("[+] %.2f\n", (float) (-b) / (2 * a));
        }
        else
        {
            printf("Existem duas raizes reais\n");
            printf("[+] %.2f\n", (float) (-b + sqrt(delta)) / (2 * a));
            printf("[+] %.2f\n", (float) (-b - sqrt(delta)) / (2 * a));
        }
    }
    else printf("Estes valores nao formam uma equacao do 2 grau\n");

    return 0;
}


#include <stdio.h>

int main(void)
{
    int ql; float dkm, c;
    printf("Entre com a distancia em km -> ");
    scanf("%F", &dkm);
    printf("Entre com a quantidade de litros de gasolina consumida -> ");
    scanf("%d", &ql);
    
    c = dkm / ql;   // calcula o consumo em Km/l
    
    if(c < 8) printf("Venda o carro!\n");
    else if(c <= 14) printf("Economico\n");
    else printf("Super Economico\n");
    
    return 0;
}


#include <stdio.h>

int main(void)
{
    int idade;
    printf("Entre com a idade λ> ");
    scanf("%d", &idade);

    if(idade >= 5 && idade <= 7) printf("[λ] Nadador Infantil A\n");
    else if(idade <= 10) printf("[λ] Nadador Infantil B\n");
    else if(idade <= 13) printf("[λ] Nadador Juvenil A\n");
    else if(idade <= 17) printf("[λ] Nadador Juvenil B\n");
    else if(idade > 18) printf("[λ] Nadador Senior\n");
    else printf("O nadador deve ter mais que 5 anos\n");

    return 0;
}


#include <stdio.h>
int main(void)
{
    float x, y, z; unsigned int op;
    printf("Entre com x, y, z λ> ");
    scanf("%f%f%f", &x, &y, &z);

    printf("Qual media deseja calcular?\n");
    printf("Opções: [1] Geometrica [2] Ponderada [3] Harmonica [4] Aritmetica λ> ");
    scanf("%d", &op);

    switch(op)
    {
        case 1: printf("[1] media geometrica %.2f\n", x*y*z); break;
        case 2: printf("[2] media ponderada %.2f\n", (x+2*y+3*z)/6); break;
        case 3: printf("[3] media harmonica %.2f\n", 3/(1/x+1/y+1/z)); break;
        case 4: printf("[4] media aritmetica %.2f\n", (x+y+z)/3); break;
    }

}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_RAND 100    // CONSTANTE que guarda o valor maximo que o numero aleatorio pode ter

int main(void)
{
    int x, y;   // Armazena os dois numeros aleatorios
    int r;      // Armezena a resposta
    int s = 0;  // Incremeto da pontuacao(caso acerte)
    
    // A função void srand (unsigned int seed) permite variar 
    // o primeiro elemento, que serve como semente da sequência.
    // Caso contrário, os numeros gerados sempre vao ser iguais
    srand((unsigned) time(NULL));
        
    // PRIMEIRA PERGUNTA
    x = rand() % MAX_RAND, y = rand() % MAX_RAND;     // gera e armazena x e y aleatorios temporariamente
    printf("Quanto é %d + %d? -> ", x, y);
    scanf("%d", &r);
    if(r == x+y)
    {
        printf("\n+--------+\n");
        printf("| Certo! |\n");
        printf("+--------+\n\n");
        s++;
    }
    else
    {
        printf("\n+---------+\n");
        printf("| Errado! |\n");
        printf("+---------+\n\n");
    }
    // SEGUNDA PERGUNTA
    x = rand() % MAX_RAND, y = rand() % MAX_RAND;
    printf("Quanto é %d + %d? -> ", x, y);
    scanf("%d", &r);
    if(r == x+y)
    {
        printf("\n+--------+\n");
        printf("| Certo! |\n");
        printf("+--------+\n\n");
        s++;
    }
    else
    {
        printf("\n+---------+\n");
        printf("| Errado! |\n");
        printf("+---------+\n\n");
    }
    // TERCEIRA PERGUNTA
    x = rand() % MAX_RAND, y = rand() % MAX_RAND;
    printf("Quanto é %d + %d? -> ", x, y);
    scanf("%d", &r);
    if(r == x+y)
    {
        printf("\n+--------+\n");
        printf("| Certo! |\n");
        printf("+--------+\n\n");
        s++;
    }
    else
    {
        printf("\n+---------+\n");
        printf("| Errado! |\n");
        printf("+---------+\n\n");
    }
    // QUARTA PERGUNTA
    x = rand() % MAX_RAND, y = rand() % MAX_RAND;
    printf("Quanto é %d + %d? -> ", x, y);
    scanf("%d", &r);
    if(r == x+y)
    {
        printf("\n+--------+\n");
        printf("| Certo! |\n");
        printf("+--------+\n\n");
        s++;
    }
    else
    {
        printf("\n+---------+\n");
        printf("| Errado! |\n");
        printf("+---------+\n\n");
    }
    // QUINTA PERGUNTA
    x = rand() % MAX_RAND, y = rand() % MAX_RAND;
    printf("Quanto é %d + %d? -> ", x, y);
    scanf("%d", &r);
    if(r == x+y)
    {
        printf("\n+--------+\n");
        printf("| Certo! |\n");
        printf("+--------+\n\n");
        s++;
    }
    else
    {
        printf("\n+---------+\n");
        printf("| Errado! |\n");
        printf("+---------+\n\n");
    }
    
    printf("+---------------------------+\n");
    printf("| Você acertou %d questoes!  |\n", s);
    printf("+---------------------------+\n\n");
    
    return 0;
}


#include <stdio.h>

int main(void)
{
    int x, y, z;
    printf("Entre com tres numeros -> ");
    scanf("%d%d%d", &x, &y, &z);
    
    if(x < y && x < z)  
        (z < y) ? printf("%d %d %d\n", x, z, y) : printf("%d %d %d\n", x, y, z);
    else if(y < x && y < z)
        (x < z) ? printf("%d %d %d\n", y, x, z) : printf("%d %d %d\n", y, z, x);
    else
        (y < x) ? printf("%d %d %d\n", z, y, x) : printf("%d %d %d\n", z, x, y);
    
    return 0;
}


#include <stdio.h>

int main(void)
{
    float altura, peso;
    printf("Entre com a altura λ> ");
    scanf("%f", &altura);
    
    printf("Entr com o peso λ> ");
    scanf("%f", &peso);

    if(altura < 1.20)
    {
        if(peso <= 60) printf("[λ] Classificacao A\n");
        else (peso <= 90) ? printf("[λ] Classificacao D\n") : printf("[λ] Classificacao G\n");
    }
    else if(altura < 1.70)
    {
        if(peso <= 60) printf("[λ] Classificacao B\n");
        else (peso <= 90) ? printf("[λ] Classificacao E\n") : printf("[λ] Classificacao H\n");
    }
    else
    {
        if(peso <= 60) printf("[λ] Classificacao C\n");
        else (peso <= 90) ? printf("[λ] Classificacao F\n") : printf("[λ] Classificacao I\n");
    }

    return 0;
}


#include <stdio.h>
#define PROD_100 1.20
#define PROD_101 1.30
#define PROD_102 1.50
#define PROD_103 1.20
#define PROD_104 1.70
#define PROD_105 2.20
#define PROD_106 1.00

int main(void)
{
    int cod_prod, qtd;
    
    printf("\n |  Especificação  | Código | Preço |\n");
    printf(" |-----------------|--------|-------|\n");
    printf(" | Cachorro Quente |    100 |  1,20 |\n");
    printf(" | Bauru Simples   |    101 |  1,30 |\n");
    printf(" | Bauru com Ovo   |    102 |  1,50 |\n");
    printf(" | Hamburguer      |    103 |  1,20 |\n");
    printf(" | Cheeseburguer   |    104 |  1,70 |\n");
    printf(" | Suco            |    105 |  2,20 |\n");
    printf(" | Refrigerante    |    106 |  1,00 |\n\n");
    
    printf("Entre com codigo do produto -> ");
    scanf("%d", &cod_prod);
    
    printf("Entre com a quantidade -> ");
    scanf("%d", &qtd);
    
    switch(cod_prod)
    {
        case 100: printf("Valor a ser pago: %.2f\n", qtd * PROD_100); break;
        case 101: printf("Valor a ser pago: %.2f\n", qtd * PROD_101); break;
        case 102: printf("Valor a ser pago: %.2f\n", qtd * PROD_102); break;
        case 103: printf("Valor a ser pago: %.2f\n", qtd * PROD_103); break;
        case 104: printf("Valor a ser pago: %.2f\n", qtd * PROD_104); break;
        case 105: printf("Valor a ser pago: %.2f\n", qtd * PROD_105); break;
        case 106: printf("Valor a ser pago: %.2f\n", qtd * PROD_106); break;
        default: printf("Codigo invalido\n");
    }
    
    return 0;
}


#include <stdio.h>
#define PERC_ABAIXO_50 0.05
#define PERC_ENTRE_50_100 0.10
#define PERC_ACIMA_100 0.15

int main(void)
{
    float prec_ant, prec_novo = 0;
    printf("Entre com o preco antigo -> ");
    scanf("%F", &prec_ant);

    if(prec_ant < 50)
    {
        prec_novo = prec_ant + (prec_ant * PERC_ABAIXO_50);
        printf("Novo preco %.2f\n", prec_novo);
    }
    else if(prec_novo < 100)
    {
        prec_novo = prec_ant + (prec_ant * PERC_ENTRE_50_100);
        printf("Novo preco %.2f\n", prec_novo);
    }
    else
    {
        prec_novo = prec_ant + (prec_ant * PERC_ACIMA_100);
        printf("Novo preco %.2f\n", prec_novo);
    }

    if(prec_novo < 80) printf("Barato\n");
    else if(prec_novo <= 120) printf("Normal\n");
    else if(prec_novo <= 200) printf("Caro\n");
    else printf("Muito Caro\n");

    return 0;
}


#include <stdio.h>

int main(void)
{
    float nota;
    int nro_faltas;
    printf("Entre com a nota -> ");
    scanf("%f", &nota);
    printf("Entre com o numero de faltas -> ");
    scanf("%d", &nro_faltas);
    
    if(nota > 10 || nota < 0)
        printf("Nota deve estar entre 0 e 10\n");
    else if(nota > 9.0 && nota <= 10.0)
        (nro_faltas <= 20) ? printf("Conceito A\n") : printf("Conceito B\n");
    else if(nota >= 7.5)
        (nro_faltas <= 20) ? printf("Conceito B\n") : printf("Conceito C\n");
    else if(nota >= 5.0)
        (nro_faltas <= 20) ? printf("Conceito C\n") : printf("Conceito D\n");
    else if(nota >= 4.0)
        (nro_faltas <= 20) ? printf("Conceito D\n") : printf("Conceito E\n");
    else
        (nro_faltas <= 20) ? printf("Conceito E\n") : printf("Conceito E\n");
    
    return 0;    
}


#include <stdio.h>

int main(void)
{
    int d, m, a;
    printf("Entre com uma data(dd/mm/aaaa) -> ");
    scanf("%d/%d/%d", &d, &m, &a);

    if((a % 400 == 0 || (a % 4 == 0 && a % 100 != 0)))
    {
        if((d > 31) && (m > 12)) printf("Data Invalida\n");
        else if((m == 4 || m == 6 || m == 9 || m == 11) && (d < 0 || d > 30)) printf("Data Invalida\n");
        else (m == 2 && d > 29) ? printf("Data Invalida\n") : printf("Data Valida\n");
    }
    else
    {
        if((d > 31) && (m > 12)) printf("Data Invalida\n");
        else if((m == 4 || m == 6 || m == 9 || m == 11) && (d < 0 || d > 30)) printf("Data Invalida\n");
        else (m == 2 && d > 28) ? printf("Data Invalida\n") : printf("Data Valida\n");
    }

    return 0;
}


#include <stdio.h>

int main(void)
{
    float venda;    
    printf("Entre com o valor da venda -> ");
    scanf("%f", &venda);
    
    if(venda >= 100.000) printf("Comissao -> %.2f\n", 700 + (venda * 0.16));
    else if(venda >= 80.000) printf("Comissao -> %.2f\n", 650 + (venda * 0.14));
    else if(venda >= 60.000) printf("Comissao %.2f\n", 600 + (venda * 0.14));
    else if(venda >= 40.000) printf("Comissao %.2f\n", 550 + (venda * 0.14));
    else if(venda >= 20.000) printf("Comissao %.2f\n", 500 + (venda * 0.14));
    else printf("Comissao %.2f\n", 400 + (venda * 0.14));
    
    return 0;
}


#include <stdio.h>

int main(void)
{
    unsigned int horaChegada, horaSaida, minutoChegada, minutoSaida, diferenca;
    float preco = 0;

    printf("Entre com a hora de chegada e a hora de saida(**:** **:**) -> ");
    scanf("%d:%d %d:%d", &horaChegada, &minutoChegada, &horaSaida, &minutoSaida);

    int chegadaMinutos = (horaChegada*60) + minutoChegada, saidaMinutos = (horaSaida*60) + minutoSaida;

    diferenca = (horaChegada < horaSaida) ? saidaMinutos - chegadaMinutos : (1440 - chegadaMinutos + saidaMinutos);

    if(diferenca <= 60) preco = 1.0;
    else if(diferenca <= 120) preco = 2.0;
    else if(diferenca <= 180) preco = 3.40;
    else if(diferenca <= 240) preco = 4.80;
    else preco = (diferenca % 60 == 0) ? 4.80 + ((diferenca / 60) - 4) * 2.0 : 6.80 + ((diferenca / 60) - 4) * 2.0;

    printf("\nO carro ficou estacionado durante %d:%d\n", diferenca / 60, diferenca % 60);
    printf("Preco a pagar R$ %.2f\n", preco);
    
    return 0;
}


#include <stdio.h>
#define ANO_ATUAL 2017

int main(void)
{
    int d, m, a;
    printf("Entre com a data de nascimento(dd/mm/aaaa) -> ");
    scanf("%d/%d/%d", &d, &m, &a);
    
    if((d > 31 || d <= 0) || (m > 12 || m <= 0) || (a > ANO_ATUAL)) printf("Data Invalida\n");
    else if((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) printf("Data Invalida\n");
    else if((a % 400 == 0 || (a % 4 == 0 && a % 100 != 0)) && (m == 2 && d <= 29)) printf("Data Valida\n");
    else if(m == 2 && d > 28) printf("Data Invalida\n");
    else printf("Data Valida\n");
    
    return 0;
}


#include <stdio.h>

int main(void)
{
    float vs, ns;
    unsigned int ts;
    printf("Entre com o salario e com o tempo de servico -> ");
    scanf("%f%d", &vs, &ts);
    
    if(vs < 500.00) ns = vs + (vs * 0.25);
    else if(vs < 1000.00) ns = vs + (vs * 0.20);
    else if(vs < 1500.00) ns = vs + (vs * 0.15);
    else if(vs < 2000.00) ns = vs + (vs * 0.10);
    else printf("Sem reajuste\n");
    
    if(ts < 1)
    {        
        printf("Sem bonus\n");
        printf("Salario Reajustado %.2f\n", ns);
    }
    else if(ts <= 3) printf("Salario Reajustado -> %.2f\n", ns += 100);
    else if(ts <= 6) printf("Salario Reajustado -> %.2f\n", ns += 200);
    else if(ts <= 10) printf("Salario Reajustado -> %.2f\n", ns += 300);
    else printf("Salario reajustado -> %.2f\n", ns += 500);
    
    return 0;
}


#include <stdio.h>

int main(void)
{
    float cf;
    printf("Entre com o preco de fabrica -> ");
    scanf("%f", &cf);
    
    if(cf <= 12000) printf("Custo ao consumidor -> %.2f\n", cf + (cf * 0.05));
    else if(cf < 25000) printf("Custo ao consumidor -> %.2f\n", cf + (cf * 0.10) + (cf * 0.15));
    else printf("Custo ao consumidor -> %.2f\n", cf + (cf * 0.15) + (cf * 0.20));
    
    return 0;
}

