#define ex1

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#ifdef ex1

/*OBS.: Fa�a um loop infinito e defina uma saida em todos os exerc�cios.

1 - Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario
pensou. Digite via teclado os simbolos =, > ou < a cada pergunta. Utilize o
comando if-else.
*/

int main()
{
    setlocale(LC_ALL,"");

    int numero,contC=1,contF=99;
    char opcao,sair;
do{
    printf("Pense em um numero entre 1 e 99.\n");
    printf("Escolha a op��o de acordo com o n�mero pensado\n");
    printf("Digite '=' para n�mero certo.\n");
    printf("Digite '<' para n�mero menor.\n");
    printf("Digite '>' para n�mero maior\n\n");


    while(opcao!='=')
    {
        printf("O numero que voce pensou foi: %d?",numero=(contF+contC)/2); // divide o atribui a variavel "numero"
        scanf("%c",&opcao);

        if (opcao == '>')
        {
            contC=numero;
            numero=(contF + contC)/2; //Exemplo:Se o numero for > 50, soma 50 + 99 e divide. Sempre ira dividir at� achar o numero
            getchar();
        }
        else if (opcao == '<')
        {
            contF=numero;
            numero=(contF - contC)/2;//Exemplo:Se o numero for < 50, subtrai 1 + 50 e divide. Sempre ira dividir at� achar o numero
            getchar();
        }
    }

    printf("\n\nN�mero pensado foi: %d\n",numero);

    printf("Deseja continuar? (s/n): ");
    scanf("%s",&sair);
    getchar();
}while((sair == 's') || (sair == 'S'));

    printf("\n\n\t\tFIM DO PROGRAMA");

}


#endif // ex1

#ifdef ex2

/*2 - Resecreva o programa do execicio anterior agora utilizando o comando switch.
Conte o n. de tentativas e imprima o resultado no video.
*/

int main()
{
    setlocale(LC_ALL,"");

    int numero,contC=1,contF=99;
    char opcao,sair;

do{
    printf("Pense em um numero entre 1 e 99.\n");
    printf("Escolha a op��o de acordo com o n�mero pensado\n");
    printf("Digite '=' para n�mero certo.\n");
    printf("Digite '<' para n�mero menor.\n");
    printf("Digite '>' para n�mero maior\n\n");


    do
    {
        printf("O numero que voce pensou foi: %d?",numero=(contF+contC)/2);
        scanf("%c",&opcao);
volta:
        switch(opcao)
        {
        case '=':
        {
            {
                printf("\n\nO N�mero pensado �: %d",numero);
            }
            break;
        }

        case '>':
        {
            contC=numero;
            numero=(contF + contC)/2;
            getchar();
        }
        break;
        goto volta;


        case '<':
        {
            contF=numero;
            numero=(contF - contC)/2;
            getchar();
        }
        break;
        goto volta;
        default:
        {
            printf("Tecla errada, digite novamente");
        }
        }

    }
    while(opcao!='=');

    printf("\nDeseja contiuar? (s/n): ");
    scanf("%s",&sair);
    getchar();
}while((sair == 's') || (sair == 'S'));

    printf("\nFIM DO PROGRAMA\n\n");

}



#endif // ex2

#ifdef ex3

/*3 - Escreva um programa que receba via teclado numeros inteiros positivos.
Quando o numero digitado for negativo o programa deve parar e calcula a
media dos valores positivos digitados.
*/

main()
{
    setlocale(LC_ALL,"");

    int num;
    double soma,sair;

    printf("Digite um n�mero positivo e mostraremos a media entre eles.\n");
    printf("Digite um n�mero negativo para sair!!\n\n");

volta:// volta aqui
    printf("Digite um numero positivo: ");
    scanf("%d",&num);
    while(num>0)
    {
        if(num>0);
        {
            soma+=num/2.0;
            goto volta;// volta at� ser digitado um numero negativo e encerrar o programa
        }
    }

    printf("A m�dia dos n�meros positivos �: %.2f",soma);


    printf("\n\n\t\tFIM DO PROGRAMA\n\n");

}

#endif // ex3

#ifdef ex4

/*4 - As ligacoes telefonicas s�o cobradas pela sua duracao. O sistema registra os
instantes em que a ligacao foi iniciada e concluida.
Escreva um programa que recebe via teclado dois instantes dados em
horas, minutos e segundo e determina o intervalo de tempo
(em horas, minutos e segundos) decorrido entre eles.
*/


main()
{
    setlocale(LC_ALL,"");
    int horaIni,minutoIni,segundoIni,horaFim,minutoFim,segundoFim,ligIni,ligFim,lig,horas,minutos,segundos,resto;
    char sair;

    do
    {
        printf("Digite a hora, minutos e segundos que come�ou a liga��o.\n");
        printf("Horas: ");
        scanf("%d",&horaIni);
        if(horaIni<0 || horaIni>24)
        {
            printf("Digite uma hora v�lida: ");
            scanf("%d",&horaIni);
        }

        printf("Minutos: ");
        scanf("%d",&minutoIni);
        if(minutoIni<0 || minutoIni>59)
        {
            printf("Digite um minuto v�lido: ");
            scanf("%d",&minutoIni);
        }

        printf("Segundos: ");
        scanf("%d",&segundoIni);
        if(segundoIni<0 || segundoIni>59)
        {
            printf("Digite um segundo v�lido: ");
            scanf("%d",&segundoIni);
        }

        printf("\n\nDigite a hora, minutos e segundos que terminou a liga��o.\n");
        printf("Horas: ");
        scanf("%d",&horaFim);
        if(horaFim<0 || horaFim>24)
        {
            printf("Digite uma hora v�lida: ");
            scanf("%d",&horaFim);
        }

        printf("Minutos: ");
        scanf("%d",&minutoFim);
        if(minutoFim<0 || minutoFim>59)
        {
            printf("Digite um minuto v�lido: ");
            scanf("%d",&minutoFim);
        }

        printf("Segundos: ");
        scanf("%d",&segundoFim);
        if(segundoFim<0 || segundoFim>59)
        {
            printf("Digite um segundo v�lido: ");
            scanf("%d",&segundoFim);
        }


        horaIni*=3600; //Converte horas inicial para segundos
        minutoIni*=60; //Converte minutos inicial para segundos
        ligIni=horaIni+minutoIni+segundoIni; //Converte tudo para segundos

        horaFim*=3600; //Converte hora final para segundos
        minutoFim*=60; //Converte minutos finais para segundos
        ligFim=horaFim+minutoFim+segundoFim; // Converte tudo para segundos

        lig=ligFim-ligIni; // Subtrai a liga��o final em segundos da liga��o final em segundos

        horas=lig/3600; // Converte a liga��o de segundos para hora
        resto=lig%3600; // Resto para calcular os minutos
        minutos=resto/60;
        segundos=resto%60;

        printf("A liga��o teve uma dura��o total de %dh %dmin %dseg\n\n",horas,minutos,segundos);

        printf("Deseja continuar? (s/n)");
        scanf("%s",&sair);
        getchar();

    }while((sair=='s') ||(sair=='S')) ;  //

    printf("Fim do Programa!!");

}


#endif // ex4

#ifdef ex5

/*5 - Um posto est� vendendo combust�veis com a seguinte tabela de descontos:
     �lcool
         at� 20 litros, desconto de 3% por litro
         acima de 20 litros, desconto de 5% por litro
     Gasolina
          at� 20 litros, desconto de 4% por litro
          acima de 20 litros, desconto de 6% por litro
     Escreva um programa que leia o n�mero de litros vendidos e o tipo de
     combust�vel (codificado da seguinte forma: A-�lcool, G-gasolina). Calcule e
     imprima o valor a ser pago pelo cliente sabendo-se que o pre�o do litro da
     gasolina � R$ 5,88 e o pre�o do litro do �lcool � R$ 4,18.
*/

float CalcAlcool(int litroAlcool)
{
    float alcool=4.18;

    if(litroAlcool<20)
    {
        alcool=alcool*litroAlcool;
        alcool-=alcool*0.03;
    }
    else
    {
        alcool=alcool*litroAlcool;
        alcool-=alcool*0.05;
    }

    return alcool;
}

float CalcGasolina(int litroGasolina)
{
    float gasolina=5.88;

    if(litroGasolina<20)
    {
        gasolina=gasolina*litroGasolina;
        gasolina-=gasolina*0.04;
    }
    else
    {
        gasolina=gasolina*litroGasolina;
        gasolina-=gasolina*0.06;
    }

    return gasolina;
}

main()
{

    setlocale(LC_ALL,"");

    int litros;
    char opcao,sair;
    do
    {
        printf("\nSelecione o tipo de gasolina\n\n");
        printf("\tDigite A - �lcool\n");
        printf("\tDigite G - Gasolina\n");
        printf("\nDigite qual op��o deseja: ");
        scanf("%c",&opcao);
        getchar();

        switch(opcao)
        {
        case 'A':
        {
            printf("Digite a quantidade de �lcool em litros: ");
            scanf("%d",&litros);

            printf("\nO valor de %d litros de �lcool �: R$%.2f",litros,CalcAlcool(litros));

            break;
        }
        case 'a':
            {
            printf("Digite a quantidade de �lcool em litros: ");
            scanf("%d",&litros);

            printf("\nO valor de %d litros de �lcool �: R$%.2f",litros,CalcAlcool(litros));

            break;
        }

        case 'G':
        {
            printf("Digite a quantidade de gasolina em litros: ");
            scanf("%d",&litros);

            printf("O valor de %d litros de �lcool �: R$%.2f",litros,CalcGasolina(litros));

            break;
        }
        case 'g':
        {
            printf("Digite a quantidade de gasolina em litros: ");
            scanf("%d",&litros);

            printf("O valor de %d litros de �lcool �: R$%.2f",litros,CalcGasolina(litros));

            break;
        }

        default:
        {
            printf("Op��o inv�lida");
            printf("Digite uma op��o valida\n");
        }
        }

        printf("\n\nDeseja continuar, (s/n): ");
        scanf("%s",&sair);
        getchar();

    }while ((sair == 's') || (sair == 'S'));

    printf("\n\nVolte sempre!!\n\n");
}

#endif // ex5
