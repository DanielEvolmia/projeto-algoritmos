#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL, "Portuguese"); //Comando para disponibilizar caracteres da lingua portuguesa
	int opcao1, opcao2, opcao3, opcao4, opcaosair;//declaracao de variaveis de selacao
	char nome[30], sobrenome[30], telefone[14], instrumentoCriacao[25];//strings de armazenamento
	system("color 70");
	printf("+_____________________________________________________________________________________________________________________+\n\n\n\n\n");
	printf("\t\t\t\t                           ____         ___\n");
	printf("\t\t\t\t                         ,' __ ``.._..''   `.\n");
	printf("\t\t\t\t                         `.`. ``-.___..-.    :\n");
	printf("\t\t\t\t ,---..____________________>/          _,'_  |\n");
	printf("\t\t\t\t `-:._,:_|_|_|_|_|_|_|_|_|_|_|.:SSt:.:|-|(/  |\n");
	printf("\t\t\t\t                        _.' )   ____  '-'    ;\n");
	printf("\t\t\t\t                       (    `-''  __``-'    /\n");
	printf("\t\t\t\t                       ``-....-''  ``-..-''\n");
    printf("\t\t\t\x1b[37;40m      ___                                                          \n");
    printf("\t\t\t\x1b[37;40m    //   ) )                                                       \n");
    printf("\t\t\t\x1b[37;40m   ((         ___       __    __  ___ / __     ( )  ___      __    \n");
    printf("\t\t\t\x1b[37;40m    \\       //   ) ) //   ) )  / /   //   ) ) / / //___) ) //  ) ) \n");
    printf("\t\t\t\x1b[37;40m      ) )  //   / / //   / /  / /   //   / / / / //       //       \n");
    printf("\t\t\t\x1b[37;40m((___ / / ((___( ( //   / /  / /   //   / / / / ((____   //        \n");
    printf("\t\t\t\x1b[37;40m                                                                   \n\x1b[30;47m");
	printf("\x1b[29;1f+_____________________________________________________________________________________________________________________+");
    printf("\x1b[37;40m\r\t\t\t\t\t\t Carregando.  \x1b[0m");
    _sleep(700);
    printf("\x1b[37;40m\r\t\t\t\t\t\t Carregando.. \x1b[0m");
    _sleep(700);
    printf("\x1b[37;40m\r\t\t\t\t\t\t Carregando...\x1b[0m");
	_sleep(700);
	while(opcao1 != 4){                         //O código principal começa aqui
    system("cls");
    system("color 70");
    printf("+_____________________________________________________________________________________________________________________+\n");
    printf("\t\t\t\x1b[37;40m      ___                                                          \n");
	printf("\t\t\t\x1b[37;40m    //   ) )                                                       \n");
	printf("\t\t\t\x1b[37;40m   ((         ___       __    __  ___ / __     ( )  ___      __    \n");
	printf("\t\t\t\x1b[37;40m    \\       //   ) ) //   ) )  / /   //   ) ) / / //___) ) //  ) ) \n");
	printf("\t\t\t\x1b[37;40m      ) )  //   / / //   / /  / /   //   / / / / //       //       \n");
    printf("\t\t\t\x1b[37;40m((___ / / ((___( ( //   / /  / /   //   / / / / ((____   //        \n");
    printf("\t\t\t\x1b[37;40m                                                                   \n\x1b[30;47m");
	printf("\t\t\t\t        _____________________________\n");
	printf("\t\t\t\t       |Escolha o serviço que deseja.|\n");
	printf("\t\t\t\t       ´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´\n\n");
	printf("\t\t\t\t       1- Criação de instrumento\n\n");
    printf("\t\t\t\t       2- Cadastro\n\n");
    printf("\t\t\t\t       3- Relatório\n\n");
    printf("\t\t\t\t       4- Sair\n\n\t\t\t\t\t");
	printf("\x1b[29;1f+_____________________________________________________________________________________________________________________+");
	printf("\x1b[29;55f\x1b[37;40m");
	scanf("%i", &opcao1); //leitura opcao 1
    printf("\x1b[30;47m");
	switch (opcao1){
		case 1:
			system("cls");
            printf("+_____________________________________________________________________________________________________________________+\n");
            printf("\t\t\t\x1b[37;40m      ___                                                          \n");
            printf("\t\t\t\x1b[37;40m    //   ) )                                                       \n");
            printf("\t\t\t\x1b[37;40m   ((         ___       __    __  ___ / __     ( )  ___      __    \n");
            printf("\t\t\t\x1b[37;40m    \\       //   ) ) //   ) )  / /   //   ) ) / / //___) ) //  ) ) \n");
            printf("\t\t\t\x1b[37;40m      ) )  //   / / //   / /  / /   //   / / / / //       //       \n");
            printf("\t\t\t\x1b[37;40m((___ / / ((___( ( //   / /  / /   //   / / / / ((____   //        \n");
            printf("\t\t\t\x1b[37;40m                                                                   \n\x1b[30;47m");
            printf("\t\t\t\t   ___________________________________\n");
            printf("\t\t\t\t  |Escolha o instrumento a ser criado.|\n");
            printf("\t\t\t\t  ´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´\n\n");
			printf("\t\t\t\t     1- Guitarra");
			printf("\n\n");
			printf("\t\t\t\t     2- Contrabaixo\n\n\t\t\t\t\t");
            printf("\x1b[29;1f+_____________________________________________________________________________________________________________________+");
            printf("\x1b[29;55f\x1b[37;40m");
            scanf("%i", &opcao2);
            printf("\x1b[30;47m");
            switch (opcao2){
                case 1:
                    system("cls");
                    printf("+_____________________________________________________________________________________________________________________+\n");
                    printf("\t\t\t\x1b[37;40m      ___                                                          \n");
                    printf("\t\t\t\x1b[37;40m    //   ) )                                                       \n");
                    printf("\t\t\t\x1b[37;40m   ((         ___       __    __  ___ / __     ( )  ___      __    \n");
                    printf("\t\t\t\x1b[37;40m    \\       //   ) ) //   ) )  / /   //   ) ) / / //___) ) //  ) ) \n");
                    printf("\t\t\t\x1b[37;40m      ) )  //   / / //   / /  / /   //   / / / / //       //       \n");
                    printf("\t\t\t\x1b[37;40m((___ / / ((___( ( //   / /  / /   //   / / / / ((____   //        \n");
                    printf("\t\t\t\x1b[37;40m                                                                   \n\x1b[30;47m");
                    printf("\t\t\t\t\t   _________________\n");
                    printf("\t\t\t\t\t  |Escolha o modelo.|\n");
                    printf("\t\t\t\t\t  ´´´´´´´´´´´´´´´´´´´\n\n");
                    printf("\t\t\t\t\t  1- Jaguar\n\n");
                    printf("\t\t\t\t\t  2- JazzMaster\n\n");
                    printf("\t\t\t\t\t  3- Les Paul\n\n");
                    printf("\t\t\t\t\t  4- SG\n\n");
                    printf("\t\t\t\t\t  5- Stratocaster\n\n");
                    printf("\t\t\t\t\t  6- SuperStrato\n\n");
                    printf("\t\t\t\t\t  7- SuperStrato 7 Cordas\n\n");
                    printf("\t\t\t\t\t  8- Telecaster\n\n\t\t\t\t\t");
                    printf("\x1b[29;1f+_____________________________________________________________________________________________________________________+");
                    printf("\x1b[29;55f\x1b[37;40m");
                    scanf("%i", &opcao3);
                    printf("\x1b[30;47m");
                    switch (opcao3){
                        case 1:
                            system("cls");
                            printf("+_____________________________________________________________________________________________________________________+\n");
                            printf("\t\t\t\x1b[37;40m      ___                                                          \n");
                            printf("\t\t\t\x1b[37;40m    //   ) )                                                       \n");
                            printf("\t\t\t\x1b[37;40m   ((         ___       __    __  ___ / __     ( )  ___      __    \n");
                            printf("\t\t\t\x1b[37;40m    \\       //   ) ) //   ) )  / /   //   ) ) / / //___) ) //  ) ) \n");
                            printf("\t\t\t\x1b[37;40m      ) )  //   / / //   / /  / /   //   / / / / //       //       \n");
                            printf("\t\t\t\x1b[37;40m((___ / / ((___( ( //   / /  / /   //   / / / / ((____   //        \n");
                            printf("\t\t\t\x1b[37;40m                                                                   \n\x1b[30;47m");
                            printf("\t\t\t\t\t   _______________\n");
                            printf("\t\t\t\t\t  |Guitarra Jaguar|\n");
                            printf("\t\t\t\t\t  ´´´´´´´´´´´´´´´´´\n\n");
                            printf("\t A guitarra Fender Jaguar é um modelo clássico que se destaca por seu design diferenciado e características\n");
                            printf("  únicas. Lançada em 1962, foi originalmente voltada ao público surf rock, mas acabou sendo adotada por\n");
                            printf("  músicos de gêneros variados, especialmente no punk e no indie rock. Entre suas principais características\n");
                            printf("  estão o corpo offset, que oferece maior conforto ao tocar sentado, e a escala curta de 24 polegadas, que\n");
                            printf("  facilita bends e acordes mais complexos. A Jaguar possui dois captadores single-coil com blindagem contra\n");
                            printf("  ruído e um sistema de circuitos duplos: o circuito lead e o rhythm, que permitem alternar entre\n");
                            printf("  configurações sonoras distintas. Outro destaque é a ponte flutuante com tremolo, que possibilita efeitos\n");
                            printf("  sutis de vibrato, embora exija ajustes cuidadosos para manter a afinaçao. Seu timbre é brilhante e cortante,\n");
                            printf("  com bastante definição, ideal para sons limpos ou com leve distorção. A Jaguar é valorizada tanto por sua\n");
                            printf("  estética vintage quanto por sua versatilidade tonal.\n\n");
                            printf("  Enviar pedido?\n  1-Sim\n  1-Não\n");
                            printf("\x1b[29;1f+_____________________________________________________________________________________________________________________+");
                            printf("\x1b[29;55f\x1b[37;40m");
                            scanf("%i", &opcao4);
                            printf("\x1b[30;47m");
                                switch(opcao4){
                                case 1:
                                system("cls");
                                printf("\t\t\t\t\tRegistrando seu pedido");
                                int i=0;
                                strcpy(instrumentoCriacao, "GuitJaguar");
                                while (i<5){
                                    printf(".");
                                    _sleep(500);
                                    i++;
                                }
                                system("cls");
                                printf("\n\n\t\t\t\t\t\x1b[37;40mSeu pedido foi registrado com SUCESSO!");
                                printf("\n\n\n\t\t\t\t\t%s\n\t\t\t\t\t%s\n\t\t\t\t\t%s\n\t\t\t\t\t%s",nome, sobrenome, telefone, instrumentoCriacao);
                                _sleep(5000);
                                }

                            break;
                            case 2:
                            system("cls");
                            printf("+_____________________________________________________________________________________________________________________+\n");
                            printf("\t\t\t\x1b[37;40m      ___                                                          \n");
                            printf("\t\t\t\x1b[37;40m    //   ) )                                                       \n");
                            printf("\t\t\t\x1b[37;40m   ((         ___       __    __  ___ / __     ( )  ___      __    \n");
                            printf("\t\t\t\x1b[37;40m    \\       //   ) ) //   ) )  / /   //   ) ) / / //___) ) //  ) ) \n");
                            printf("\t\t\t\x1b[37;40m      ) )  //   / / //   / /  / /   //   / / / / //       //       \n");
                            printf("\t\t\t\x1b[37;40m((___ / / ((___( ( //   / /  / /   //   / / / / ((____   //        \n");
                            printf("\t\t\t\x1b[37;40m                                                                   \n\x1b[30;47m");
                            printf("\t\t\t\t\t ___________________\n");
                            printf("\t\t\t\t\t|Guitarra Jazzmaster|\n");
                            printf("\t\t\t\t\t´´´´´´´´´´´´´´´´´´´´´\n\n");
                            printf("\tA guitarra Fender Jazzmaster foi lançada em 1958 como uma opção de ponta voltada originalmente para\n");
                            printf("  músicos de jazz, mas acabou se tornando popular entre surfistas na década de 60 e, mais tarde, entre\n");
                            printf("  artistas do rock alternativo e indie. Uma de suas características mais marcantes é o corpo offset, projetado\n");
                            printf("  para maior conforto ao tocar sentado. Diferente de outras Fender da época, a Jazzmaster possui captadores\n");
                            printf("  single-coil de formato largo e som mais encorpado e suave, com ênfase nos médios e graves é ideal para\n");
                            printf("  timbres limpos e atmosféricos. Assim como a Jaguar, ela conta com dois circuitos independentes (lead e\n");
                            printf("  rhythm), que permitem alternar entre diferentes configurações de volume e tom com facilidade. A ponte\n");
                            printf("  com tremolo flutuante contribui para efeitos expressivos, mas exige cuidados para garantir estabilidade na\n");
                            printf("  afinação. A Jazzmaster é conhecida por seu sustain rico, resposta dinâmica e estética clássica, tornando-se\n");
                            printf("  uma escolha cultuada por músicos que buscam versatilidade e personalidade sonora.\n\n");
                            printf("  Enviar pedido?\n  1-Sim\n  1-Não\n");
                            printf("\x1b[29;1f+_____________________________________________________________________________________________________________________+");
                            printf("\x1b[29;55f\x1b[37;40m");
                            scanf("%i", &opcao4);
                            printf("\x1b[30;47m");
                             switch(opcao4){
                                case 1:
                                system("cls");
                                printf("\t\t\t\t\tRegistrando seu pedido");
                                int i=0;
                                strcpy(instrumentoCriacao, "GuitJazzMaster");
                                while (i<5){
                                    printf(".");
                                    _sleep(500);
                                    i++;
                                }
                                system("cls");
                                printf("\n\n\t\t\t\t\t\x1b[37;40mSeu pedido foi registrado com SUCESSO!");
                                printf("\n\n\n\t\t\t\t\t%s\n\t\t\t\t\t%s\n\t\t\t\t\t%s\n\t\t\t\t\t%s",nome, sobrenome, telefone, instrumentoCriacao);
                                _sleep(5000);
                                }
                            break;
                            case 3:
                            system("cls");
                            printf("+_____________________________________________________________________________________________________________________+\n");
                            printf("\t\t\t\x1b[37;40m      ___                                                          \n");
                            printf("\t\t\t\x1b[37;40m    //   ) )                                                       \n");
                            printf("\t\t\t\x1b[37;40m   ((         ___       __    __  ___ / __     ( )  ___      __    \n");
                            printf("\t\t\t\x1b[37;40m    \\       //   ) ) //   ) )  / /   //   ) ) / / //___) ) //  ) ) \n");
                            printf("\t\t\t\x1b[37;40m      ) )  //   / / //   / /  / /   //   / / / / //       //       \n");
                            printf("\t\t\t\x1b[37;40m((___ / / ((___( ( //   / /  / /   //   / / / / ((____   //        \n");
                            printf("\t\t\t\x1b[37;40m                                                                   \n\x1b[30;47m");
                            printf("\t\t\t\t\t   _________________\n");
                            printf("\t\t\t\t\t  |Guitarra Les Paul|\n");
                            printf("\t\t\t\t\t  ´´´´´´´´´´´´´´´´´´´\n\n");
                            printf("\tA guitarra Gibson Les Paul é um dos modelos mais icônicos e influentes da história da música, lançada em\n");
                            printf("  1952 em parceria com o guitarrista e inventor Les Paul. Sua construção sólida, com corpo inteiriço em\n");
                            printf("  mogno e tampo em maple, proporciona um som encorpado, sustain prolongado e excelente projeção. A Les\n");
                            printf("  Paul se destaca pelos seus captadores humbucker (a partir do final da década de 1950), que oferecem um\n");
                            printf("  timbre quente, cheio e com menor ruído, ideal para estilos como blues, hard rock e heavy metal. Sua escala\n");
                            printf("  de 24,75 polegadas facilita a execução de bends, enquanto o braço grosso favorece acordes firmes e notas\n");
                            printf("  com peso. O modelo tradicional inclui controles independentes de volume e tom para cada captador, além\n");
                            printf("  de uma chave seletora de três posições. Com visual clássico, acabamento luxuoso e timbre poderoso, a Les\n");
                            printf("  Paul é uma escolha preferida por guitarristas que buscam presença sonora e estilo marcante.\n\n");
                            printf("  Enviar pedido?\n  1-Sim\n  1-Não\n");
                            printf("\x1b[29;1f+_____________________________________________________________________________________________________________________+");
                            printf("\x1b[29;55f\x1b[37;40m");
                            scanf("%i", &opcao4);
                            printf("\x1b[30;47m");
                             switch(opcao4){
                                case 1:
                                system("cls");
                                printf("\t\t\t\t\tRegistrando seu pedido");
                                int i=0;
                                strcpy(instrumentoCriacao, "GuitLesPaul");
                                while (i<5){
                                    printf(".");
                                    _sleep(500);
                                    i++;
                                }
                                system("cls");
                                printf("\n\n\t\t\t\t\t\x1b[37;40mSeu pedido foi registrado com SUCESSO!");
                                printf("\n\n\n\t\t\t\t\t%s\n\t\t\t\t\t%s\n\t\t\t\t\t%s\n\t\t\t\t\t%s",nome, sobrenome, telefone, instrumentoCriacao);
                                _sleep(5000);
                                }
                            break;
                            case 4:
                            system("cls");
                            printf("+_____________________________________________________________________________________________________________________+\n");
                            printf("\t\t\t\x1b[37;40m      ___                                                          \n");
                            printf("\t\t\t\x1b[37;40m    //   ) )                                                       \n");
                            printf("\t\t\t\x1b[37;40m   ((         ___       __    __  ___ / __     ( )  ___      __    \n");
                            printf("\t\t\t\x1b[37;40m    \\       //   ) ) //   ) )  / /   //   ) ) / / //___) ) //  ) ) \n");
                            printf("\t\t\t\x1b[37;40m      ) )  //   / / //   / /  / /   //   / / / / //       //       \n");
                            printf("\t\t\t\x1b[37;40m((___ / / ((___( ( //   / /  / /   //   / / / / ((____   //        \n");
                            printf("\t\t\t\x1b[37;40m                                                                   \n\x1b[30;47m");
                            printf("\t\t\t\t\t   ___________\n");
                            printf("\t\t\t\t\t  |Guitarra SG|\n");
                            printf("\t\t\t\t\t  ´´´´´´´´´´´´´\n\n");
                            printf("\tA guitarra Gibson SG (Solid Guitar) foi lançada em 1961 como uma reformulação da Les Paul, mas acabou se\n");
                            printf("  tornando um modelo próprio devido ao seu sucesso. Seu design fino e leve, com duplo cutaway assimétrico\n");
                            printf("  e acesso facilitado as casas mais agudas, a torna especialmente confortável para solos e performances ao\n");
                            printf("  vivo. Feita geralmente em mogno, a SG mantém o timbre encorpado característico da Gibson, mas com um\n");
                            printf("  som um pouco mais agressivo e aberto em comparação à Les Paul, devido ao corpo mais fino e leve. Ela\n");
                            printf("  também utiliza captadores humbucker, que oferecem alta saída, sustain e pouca interferência, sendo ideal\n");
                            printf("  para rock clássico, hard rock e heavy metal. Seu visual arrojado, com os famosos 'chifres' pontudos, e sua\n");
                            printf("  pegada rápida e direta a tornaram favorita de guitarristas como Angus Young (AC/DC) e Tony Iommi (Black\n");
                            printf("  Sabbath). A SG é uma guitarra versátil, poderosa e com forte presença tanto estética quanto sonora.\n\n");
                            printf("  Enviar pedido?\n  1-Sim\n  1-Não\n");
                            printf("\x1b[29;1f+_____________________________________________________________________________________________________________________+");
                            printf("\x1b[29;55f\x1b[37;40m");
                            scanf("%i", &opcao4);
                            printf("\x1b[30;47m");
                             switch(opcao4){
                                case 1:
                                system("cls");
                                printf("\t\t\t\t\tRegistrando seu pedido");
                                int i=0;
                                strcpy(instrumentoCriacao, "GuitSG");
                                while (i<5){
                                    printf(".");
                                    _sleep(500);
                                    i++;
                                }
                                system("cls");
                                printf("\n\n\t\t\t\t\t\x1b[37;40mSeu pedido foi registrado com SUCESSO!");
                                printf("\n\n\n\t\t\t\t\t%s\n\t\t\t\t\t%s\n\t\t\t\t\t%s\n\t\t\t\t\t%s",nome, sobrenome, telefone, instrumentoCriacao);
                                _sleep(5000);
                                }
                            break;
                            case 5:
                            system("cls");
                            printf("+_____________________________________________________________________________________________________________________+\n");
                            printf("\t\t\t\x1b[37;40m      ___                                                          \n");
                            printf("\t\t\t\x1b[37;40m    //   ) )                                                       \n");
                            printf("\t\t\t\x1b[37;40m   ((         ___       __    __  ___ / __     ( )  ___      __    \n");
                            printf("\t\t\t\x1b[37;40m    \\       //   ) ) //   ) )  / /   //   ) ) / / //___) ) //  ) ) \n");
                            printf("\t\t\t\x1b[37;40m      ) )  //   / / //   / /  / /   //   / / / / //       //       \n");
                            printf("\t\t\t\x1b[37;40m((___ / / ((___( ( //   / /  / /   //   / / / / ((____   //        \n");
                            printf("\t\t\t\x1b[37;40m                                                                   \n\x1b[30;47m");
                            printf("\t\t\t\t\t _____________________\n");
                            printf("\t\t\t\t\t|Guitarra Stratocaster|\n");
                            printf("\t\t\t\t\t´´´´´´´´´´´´´´´´´´´´´´´\n\n");
                            printf("\tA Fender Stratocaster, lançada em 1954, é uma das guitarras mais reconhecíveis e versáteis de todos os\n");
                            printf("  tempos. Seu design ergonômico com contornos no corpo e corte duplo (double cutaway) oferece conforto\n");
                            printf("  tanto em pé quanto sentado, além de facilitar o acesso às casas superiores. Equipada normalmente com três\n");
                            printf("  captadores single-coil, a Stratocaster proporciona uma ampla gama de timbres álem do brilho cristalino e  \n");
                            printf("  estalado ao som mais suave e arredondado ideal para blues, rock, funk, pop e até jazz. A chave seletora\n");
                            printf("  de cinco posições permite combinar os captadores em diferentes configurações, ampliando ainda mais sua\n");
                            printf("  versatilidade sonora. O sistema de tremolo (alavanca) permite efeitos de vibrato sutis ou expressivos,    \n");
                            printf("  embora possa afetar a estabilidade da afinação se não for bem ajustado. Seu timbre limpo e articulado,\n");
                            printf("  combinado com um visual clássico e tocabilidade excelente, faz da Stratocaster uma escolha consagrada por\n");
                            printf("  músicos de todos os estilos, incluindo lendas como Jimi Hendrix, Eric Clapton e John Frusciante.\n \n");
                            printf("  Enviar pedido?\n  1-Sim\n  1-Não\n\n");
                            printf("\x1b[29;1f+_____________________________________________________________________________________________________________________+");
                            printf("\x1b[29;55f\x1b[37;40m");
                            scanf("%i", &opcao4);
                            printf("\x1b[30;47m");
                             switch(opcao4){
                                case 1:
                                system("cls");
                                printf("\t\t\t\t\tRegistrando seu pedido");
                                int i=0;
                                strcpy(instrumentoCriacao, "GuitStratocaster");
                                while (i<5){
                                    printf(".");
                                    _sleep(500);
                                    i++;
                                }
                                system("cls");
                                printf("\n\n\t\t\t\t\t\x1b[37;40mSeu pedido foi registrado com SUCESSO!");
                                printf("\n\n\n\t\t\t\t\t%s\n\t\t\t\t\t%s\n\t\t\t\t\t%s\n\t\t\t\t\t%s",nome, sobrenome, telefone, instrumentoCriacao);
                                _sleep(5000);
                                }
                            break;
                            case 6:
                            system("cls");
                            printf("+_____________________________________________________________________________________________________________________+\n");
                            printf("\t\t\t\x1b[37;40m      ___                                                          \n");
                            printf("\t\t\t\x1b[37;40m    //   ) )                                                       \n");
                            printf("\t\t\t\x1b[37;40m   ((         ___       __    __  ___ / __     ( )  ___      __    \n");
                            printf("\t\t\t\x1b[37;40m    \\       //   ) ) //   ) )  / /   //   ) ) / / //___) ) //  ) ) \n");
                            printf("\t\t\t\x1b[37;40m      ) )  //   / / //   / /  / /   //   / / / / //       //       \n");
                            printf("\t\t\t\x1b[37;40m((___ / / ((___( ( //   / /  / /   //   / / / / ((____   //        \n");
                            printf("\t\t\t\x1b[37;40m                                                                   \n\x1b[30;47m");
                            printf("\t\t\t\t\t  ____________________\n");
                            printf("\t\t\t\t\t |Guitarra Superstrato|\n");
                            printf("\t\t\t\t\t ´´´´´´´´´´´´´´´´´´´´´´\n\n");
                            printf("\tAs guitarras do tipo superstrato (ou superstrat) surgiram nos anos 1980 como uma evolução das\n");
                            printf("  Stratocasters, adaptadas para atender às demandas de guitarristas de rock pesado e metal. Elas mantém o\n");
                            printf("  contorno ergonômico e o formato geral da Stratocaster, mas com modificações voltadas para performance e\n");
                            printf("  versatilidade sonora. As principais características incluem captadores de alta saída, geralmente com\n");
                            printf("  configuração HSS (humbucker-single-single) ou HH (dois humbuckers), que oferecem sons mais potentes e\n");
                            printf("  encorpados, ideais para distorções pesadas e solos rápidos. Outro diferencial marcante é a presença de\n");
                            printf("  sistemas de ponte flutuante, como o Floyd Rose, que permitem alavancadas extremas sem perder a afina??o\n");
                            printf("  (quando bem regulados). O braço costuma ser mais fino e rápido, com escala de raio mais plano, trastes\n");
                            printf("  jumbo e acesso facilitado às últimas casas - tudo pensado para facilitar técnicas como shredding, tapping e\n");
                            printf("  legato. Superstratos são preferidas por guitarristas virtuosos e de estilos t?cnicos, como Steve Vai, Joe\n");
                            printf("  Satriani e muitos músicos do metal moderno.\n\n");
                            printf("  Enviar pedido?\n  1-Sim\n  1-Não");
                            printf("\x1b[29;1f+_____________________________________________________________________________________________________________________+");
                            printf("\x1b[29;55f\x1b[37;40m");
                            scanf("%i", &opcao4);
                            printf("\x1b[30;47m");
                             switch(opcao4){
                                case 1:
                                system("cls");
                                printf("\t\t\t\t\tRegistrando seu pedido");
                                int i=0;
                                strcpy(instrumentoCriacao, "GuitSuperStrato");
                                while (i<5){
                                    printf(".");
                                    _sleep(500);
                                    i++;
                                }
                                system("cls");
                                printf("\n\n\t\t\t\t\t\x1b[37;40mSeu pedido foi registrado com SUCESSO!");
                                printf("\n\n\n\t\t\t\t\t%s\n\t\t\t\t\t%s\n\t\t\t\t\t%s\n\t\t\t\t\t%s",nome, sobrenome, telefone, instrumentoCriacao);
                                _sleep(5000);
                                }
                            break;
                            case 7:
                            system("cls");
                            printf("+_____________________________________________________________________________________________________________________+\n");
                            printf("\t\t\t\x1b[37;40m      ___                                                          \n");
                            printf("\t\t\t\x1b[37;40m    //   ) )                                                       \n");
                            printf("\t\t\t\x1b[37;40m   ((         ___       __    __  ___ / __     ( )  ___      __    \n");
                            printf("\t\t\t\x1b[37;40m    \\       //   ) ) //   ) )  / /   //   ) ) / / //___) ) //  ) ) \n");
                            printf("\t\t\t\x1b[37;40m      ) )  //   / / //   / /  / /   //   / / / / //       //       \n");
                            printf("\t\t\t\x1b[37;40m((___ / / ((___( ( //   / /  / /   //   / / / / ((____   //        \n");
                            printf("\t\t\t\x1b[37;40m                                                                   \n\x1b[30;47m");
                            printf("\t\t\t\t     _____________________________\n");
                            printf("\t\t\t\t    |Guitarra Superstrato 7 Cordas|\n");
                            printf("\t\t\t\t    ´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´\n\n");
                            printf("\tAs guitarras superstrato de 7 cordas são uma evolução das superstratos tradicionais, projetadas para\n");
                            printf("  atender às necessidades de guitarristas que buscam maior alcance tonal, especialmente nas regiões graves.\n");
                            printf("  A principal diferença é a adição de uma sétima corda, normalmente afinada em si (B), abaixo da sexta corda\n");
                            printf("  tradicional, o que permite riffs mais pesados, graves profundos e maior versatilidade para solos e harmonias\n");
                            printf("  complexas. Assim como as superstratos de 6 cordas, essas guitarras mantêm características como\n");
                            printf("  captadores de alta saída (geralmente humbuckers ativos ou passivos), braço fino e rápido, trastes jumbo,\n");
                            printf("  raio de escala mais plano e acesso facilitado às casas superiores. Muitas incluem pontes flutuantes (como\n");
                            printf("  Floyd Rose) ou pontes fixas robustas, dependendo da preferência do músico. O timbre é encorpado,\n");
                            printf("  definido e com forte presença nos graves, sendo muito utilizado em estilos como metal progressivo, djent,\n");
                            printf("  death metal e outros gêneros pesados. Bandas e músicos como Korn, Meshuggah e John Petrucci\n");
                            printf("  popularizaram o uso da superstrato de 7 cordas no cenário mundial.\n\n");
                            printf("  Enviar pedido?\n  1-Sim\n  1-Não");
                            printf("\x1b[29;1f+_____________________________________________________________________________________________________________________+");
                            printf("\x1b[29;55f\x1b[37;40m");
                            scanf("%i", &opcao4);
                            printf("\x1b[30;47m");
                             switch(opcao4){
                                case 1:
                                system("cls");
                                printf("\t\t\t\t\tRegistrando seu pedido");
                                int i=0;
                                strcpy(instrumentoCriacao, "GuitSuperstrato7C");
                                while (i<5){
                                    printf(".");
                                    _sleep(500);
                                    i++;
                                }
                                system("cls");
                                printf("\n\n\t\t\t\t\t\x1b[37;40mSeu pedido foi registrado com SUCESSO!");
                                printf("\n\n\n\t\t\t\t\t%s\n\t\t\t\t\t%s\n\t\t\t\t\t%s\n\t\t\t\t\t%s",nome, sobrenome, telefone, instrumentoCriacao);
                                _sleep(5000);
                                }
                            break;
                            case 8:
                            system("cls");
                            printf("+_____________________________________________________________________________________________________________________+\n");
                            printf("\t\t\t\x1b[37;40m      ___                                                          \n");
                            printf("\t\t\t\x1b[37;40m    //   ) )                                                       \n");
                            printf("\t\t\t\x1b[37;40m   ((         ___       __    __  ___ / __     ( )  ___      __    \n");
                            printf("\t\t\t\x1b[37;40m    \\       //   ) ) //   ) )  / /   //   ) ) / / //___) ) //  ) ) \n");
                            printf("\t\t\t\x1b[37;40m      ) )  //   / / //   / /  / /   //   / / / / //       //       \n");
                            printf("\t\t\t\x1b[37;40m((___ / / ((___( ( //   / /  / /   //   / / / / ((____   //        \n");
                            printf("\t\t\t\x1b[37;40m                                                                   \n\x1b[30;47m");
                            printf("\t\t\t\t\t   ___________________\n");
                            printf("\t\t\t\t\t  |Guitarra Telecaster|\n");
                            printf("\t\t\t\t\t  ´´´´´´´´´´´´´´´´´´´´´\n\n");
                            printf("\tA Fender Telecaster, lançada em 1950, é considerada a primeira guitarra elétrica de corpo sólido produzida\n");
                            printf("  em escala comercial. Seu design simples, robusto e extremamente funcional se mantém praticamente\n");
                            printf("  inalterado até hoje. A Telecaster possui dois captadores single-coil — um na ponte, que oferece um som\n");
                            printf("  brilhante, metálico e estalado, característico, e outro no braço, com timbre mais encorpado e suave. Essa\n");
                            printf("  combinação proporciona uma ampla gama de sons, que vão do country e blues ao rock, pop e até jazz. A\n");
                            printf("  ponte fixa com três ou seis saddles contribui para um sustain forte e excelente estabilidade de afinação. Seu\n");
                            printf("  som é conhecido pelo ataque definido, médios proeminentes e agudos cortantes, o que a torna ideal para\n");
                            printf("  bases rítmicas, riffs secos e solos expressivos. A Telecaster é valorizada por sua simplicidade, confiabilidade e\n");
                            printf("  personalidade sonora, sendo utilizada por músicos de praticamente todos os estilos, incluindo Bruce\n");
                            printf("  Springsteen, Keith Richards e John 5.\n\n");
                            printf("  Enviar pedido?\n  1-Sim\n  2-Não");
                            printf("\x1b[29;1f+_____________________________________________________________________________________________________________________+");
                            printf("\x1b[29;55f\x1b[37;40m");
                            scanf("%i", &opcao4);
                            printf("\x1b[30;47m");
                             switch(opcao4){
                                case 1:
                                system("cls");
                                printf("\t\t\t\t\tRegistrando seu pedido");
                                int i=0;
                                strcpy(instrumentoCriacao, "GuitTelecaster");
                                while (i<5){
                                    printf(".");
                                    _sleep(500);
                                    i++;
                                }
                                system("cls");
                                printf("\n\n\t\t\t\t\t\x1b[37;40mSeu pedido foi registrado com SUCESSO!");
                                printf("\n\n\n\t\t\t\t\t%s\n\t\t\t\t\t%s\n\t\t\t\t\t%s\n\t\t\t\t\t%s",nome, sobrenome, telefone, instrumentoCriacao);
                                _sleep(5000);
                                }
                            break;
                    }
                    break;
                    case 2:
                    system("cls");
                    printf("+_____________________________________________________________________________________________________________________+\n");
                    printf("\t\t\t\x1b[37;40m      ___                                                          \n");
                    printf("\t\t\t\x1b[37;40m    //   ) )                                                       \n");
                    printf("\t\t\t\x1b[37;40m   ((         ___       __    __  ___ / __     ( )  ___      __    \n");
                    printf("\t\t\t\x1b[37;40m    \\       //   ) ) //   ) )  / /   //   ) ) / / //___) ) //  ) ) \n");
                    printf("\t\t\t\x1b[37;40m      ) )  //   / / //   / /  / /   //   / / / / //       //       \n");
                    printf("\t\t\t\x1b[37;40m((___ / / ((___( ( //   / /  / /   //   / / / / ((____   //        \n");
                    printf("\t\t\t\x1b[37;40m                                                                   \n\x1b[30;47m");
                    printf("\t\t\t\t\t   _________________\n");
                    printf("\t\t\t\t\t  |Escolha o modelo.|\n");
                    printf("\t\t\t\t\t  ´´´´´´´´´´´´´´´´´´´\n\n");
                    printf("\t\t\t\t\t  1- Baixo JazzBass\n\n");
                    printf("\t\t\t\t\t  2- Baixo Precision\n\n");
                    printf("\x1b[29;1f+_____________________________________________________________________________________________________________________+");
                    printf("\x1b[29;55f\x1b[37;40m");
                    scanf("%i", &opcao3);
                    printf("\x1b[30;47m");
                    switch(opcao3){
                            case 1:
                            system("cls");
                            printf("+_____________________________________________________________________________________________________________________+\n");
                            printf("\t\t\t\x1b[37;40m      ___                                                          \n");
                            printf("\t\t\t\x1b[37;40m    //   ) )                                                       \n");
                            printf("\t\t\t\x1b[37;40m   ((         ___       __    __  ___ / __     ( )  ___      __    \n");
                            printf("\t\t\t\x1b[37;40m    \\       //   ) ) //   ) )  / /   //   ) ) / / //___) ) //  ) ) \n");
                            printf("\t\t\t\x1b[37;40m      ) )  //   / / //   / /  / /   //   / / / / //       //       \n");
                            printf("\t\t\t\x1b[37;40m((___ / / ((___( ( //   / /  / /   //   / / / / ((____   //        \n");
                            printf("\t\t\t\x1b[37;40m                                                                   \n\x1b[30;47m");
                            printf("\t\t\t\t     ____________________________\n");
                            printf("\t\t\t\t    |    Contrabaixo JazzBass    |\n");
                            printf("\t\t\t\t    ´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´\n\n");
                            printf("\tO Fender Jazz Bass, lançado em 1960, é um dos baixos mais versáteis e populares do mundo. Ele se destaca\n");
                            printf("  pelo som mais definido, com médios menos pronunciados e agudos mais claros em comparação ao\n");
                            printf("  Precision. Possui dois captadores single-coil, que oferecem timbres variados e mais articulação. A chave ou\n");
                            printf("  os dois controles de volume permitem misturar os captadores, criando sons desde suaves até mais\n");
                            printf("  agressivos. Seu corpo é levemente mais estreito e anatômico, proporcionando conforto ao tocar. O braço é\n");
                            printf("  mais fino na região da pestana, favorecendo a velocidade e a técnica. A escala é de 34 polegadas, padrão\n");
                            printf("  Fender. A ponte fixa garante boa estabilidade de afinação e sustain. É muito usado no funk, jazz, soul, rock e\n");
                            printf("  pop. Seu som é conhecido pelo \"growl\" característico, especialmente quando o captador da ponte é\n");
                            printf("  destacado. Lendas como Jaco Pastorius, Geddy Lee e Marcus Miller ajudaram a eternizar o Jazz Bass.\n\n");
                            printf("  Enviar pedido?\n  1-Sim\n  1-Não");
                            printf("\x1b[29;1f+_____________________________________________________________________________________________________________________+");
                            printf("\x1b[29;55f\x1b[37;40m");
                            scanf("%i", &opcao4);
                            printf("\x1b[30;47m");
                             switch(opcao4){
                                case 1:
                                system("cls");
                                printf("\t\t\t\t\tRegistrando seu pedido");
                                int i=0;
                                strcpy(instrumentoCriacao, "JazzBass");
                                while (i<5){
                                    printf(".");
                                    _sleep(500);
                                    i++;
                                }
                                system("cls");
                                printf("\n\n\t\t\t\t\t\x1b[37;40mSeu pedido foi registrado com SUCESSO!");
                                printf("\n\n\n\t\t\t\t\t%s\n\t\t\t\t\t%s\n\t\t\t\t\t%s\n\t\t\t\t\t%s",nome, sobrenome, telefone, instrumentoCriacao);
                                _sleep(5000);
                                }
                                break;
                            case 2:
                            system("cls");
                            printf("+_____________________________________________________________________________________________________________________+\n");
                            printf("\t\t\t\x1b[37;40m      ___                                                          \n");
                            printf("\t\t\t\x1b[37;40m    //   ) )                                                       \n");
                            printf("\t\t\t\x1b[37;40m   ((         ___       __    __  ___ / __     ( )  ___      __    \n");
                            printf("\t\t\t\x1b[37;40m    \\       //   ) ) //   ) )  / /   //   ) ) / / //___) ) //  ) ) \n");
                            printf("\t\t\t\x1b[37;40m      ) )  //   / / //   / /  / /   //   / / / / //       //       \n");
                            printf("\t\t\t\x1b[37;40m((___ / / ((___( ( //   / /  / /   //   / / / / ((____   //        \n");
                            printf("\t\t\t\x1b[37;40m                                                                   \n\x1b[30;47m");
                            printf("\t\t\t\t     ___________________________\n");
                            printf("\t\t\t\t    |   Contrabaixo Precision   |\n");
                            printf("\t\t\t\t    ´´´´´´´´´´´´´´´´´´´´´´´´´´´´´\n\n");
                            printf("\tO Fender Precision Bass, lançado em 1951, é o primeiro baixo elétrico de corpo sólido da história. Seu nome\n");
                            printf("  vem dos trastes no braço, que oferecem mais precisão na execução. O som é encorpado, grave e com\n");
                            printf("  médios bem definidos, perfeito para diversos estilos. Seu captador split-coil, introduzido em 1957, oferece\n");
                            printf("  um timbre potente e com cancelamento de ruído. É conhecido pelo punch forte e presença no mix. Possui\n");
                            printf("  corpo em alder ou ash, braço em maple e escala de 34 polegadas. Os controles são simples, com apenas\n");
                            printf("  volume e tom. A ponte fixa garante estabilidade e sustain. É muito usado em rock, blues, punk, reggae e\n");
                            printf("  soul. Seu visual é clássico e sua construção, extremamente robusta. Ícones como James Jamerson, Steve\n");
                            printf("  Harris e Sting eternizaram o Precision.\n\n");
                            printf("  Enviar pedido?\n  1-Sim\n  1-Não");
                            printf("\x1b[29;1f+_____________________________________________________________________________________________________________________+");
                            printf("\x1b[29;55f\x1b[37;40m");
                            scanf("%i", &opcao4);
                            printf("\x1b[30;47m");
                             switch(opcao4){
                                case 1:
                                system("cls");
                                printf("\t\t\t\t\tRegistrando seu pedido");
                                int i=0;
                                strcpy(instrumentoCriacao, "BaixoPrecision");
                                while (i<5){
                                    printf(".");
                                    _sleep(500);
                                    i++;
                                }
                                system("cls");
                                printf("\n\n\t\t\t\t\t\x1b[37;40mSeu pedido foi registrado com SUCESSO!");
                                printf("\n\n\n\t\t\t\t\t%s\n\t\t\t\t\t%s\n\t\t\t\t\t%s\n\t\t\t\t\t%s",nome, sobrenome, telefone, instrumentoCriacao);
                                _sleep(5000);
                                }
                            break;
                    }
                }
                break;
                case 2:
                system("cls");
                printf("+_____________________________________________________________________________________________________________________+\n");
                printf("\t\t\t\x1b[37;40m      ___                                                          \n");
                printf("\t\t\t\x1b[37;40m    //   ) )                                                       \n");
                printf("\t\t\t\x1b[37;40m   ((         ___       __    __  ___ / __     ( )  ___      __    \n");
                printf("\t\t\t\x1b[37;40m    \\       //   ) ) //   ) )  / /   //   ) ) / / //___) ) //  ) ) \n");
                printf("\t\t\t\x1b[37;40m      ) )  //   / / //   / /  / /   //   / / / / //       //       \n");
                printf("\t\t\t\x1b[37;40m((___ / / ((___( ( //   / /  / /   //   / / / / ((____   //        \n");
                printf("\t\t\t\x1b[37;40m                                                                   \n\x1b[30;47m");
                printf("\t\t\t\t\t        ________\n");
                printf("\t\t\t\t\t       |Cadastro|\n");
                printf("\t\t\t\t\t       ´´´´´´´´´´\n\n");
                printf("\t\t\t\tInsira seu primeiro nome:  \n");
                printf("\t\t\t\tInsira seu sobrenome:  \n");
                printf("\t\t\t\tInsira seu telefone:  \n");
                printf("\t\t\t       (Insira o telefone sem espaços e com DDD)");
                printf("\x1b[13;59f");
                scanf("%s", nome);
                printf("\x1b[14;55f");
                scanf("%s", sobrenome);
                printf("\x1b[15;54f");
                scanf("%s", telefone);
                if(strlen(nome)> 0 && strlen(sobrenome)> 0 && strlen(telefone)> 0){
                printf("\n\n\t\t\t\x1b[37;40mCadastro concluído com sucesso!\x1b[0m");
                _sleep(3000);
                }
                else{
                    printf("Existem informações faltantes");
                _sleep(3000);
                }
                break;
                case 3:
                system("cls");
                printf("+_____________________________________________________________________________________________________________________+\n");
                printf("\t\t\t\x1b[37;40m      ___                                                          \n");
                printf("\t\t\t\x1b[37;40m    //   ) )                                                       \n");
                printf("\t\t\t\x1b[37;40m   ((         ___       __    __  ___ / __     ( )  ___      __    \n");
                printf("\t\t\t\x1b[37;40m    \\       //   ) ) //   ) )  / /   //   ) ) / / //___) ) //  ) ) \n");
                printf("\t\t\t\x1b[37;40m      ) )  //   / / //   / /  / /   //   / / / / //       //       \n");
                printf("\t\t\t\x1b[37;40m((___ / / ((___( ( //   / /  / /   //   / / / / ((____   //        \n");
                printf("\t\t\t\x1b[37;40m                                                                   \n\x1b[30;47m");
                printf("\t\t\t\t\t        ________\n");
                printf("\t\t\t\t\t       |Registro|\n");
                printf("\t\t\t\t\t       ´´´´´´´´´´\n\n");
                printf("\t\t\t\t\tÚltimo pedido:\n\t\t\t\t\t%s %s\n\t\t\t\t\t%s\n\t\t\t\t\t%s", nome, sobrenome, instrumentoCriacao, telefone);
                printf("\n\n\t\t\t\t\t Digite 1 para sair");
                scanf("%i", &opcaosair);
                break;
                }

		}
	}

