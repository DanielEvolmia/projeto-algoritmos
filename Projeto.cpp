#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	int opcao, opcao2, opcao3, opcao4;
	while(opcao != 4){
	system("cls");
	system("color 70");
	printf("\t\t\t\t\t Santhier Servi?os LTDA\n");
	printf("\t\t\t\t      _____________________________\n");
	printf("\t\t\t\t     |Escolha o servi?o que deseja.|\n");
	printf("\t\t\t\t     ??????????????????????????????\n\n");
	printf("\t\t\t\t     1- Cria??o de instrumento");
	printf("\n\n");
	printf("\t\t\t\t     2- Manuten??o de instrumento\n\n\t\t\t\t\t");
	scanf("%i", &opcao);
	switch (opcao){
		case 1:
			system("cls");
			printf("\t\t\t\t\t Santhier Servi?os LTDA\n");
            printf("\t\t\t\t   ___________________________________\n");
            printf("\t\t\t\t  |Escolha o instrumento a ser criado.|\n");
            printf("\t\t\t\t  ?????????????????????????????????????\n\n");
			printf("\t\t\t\t     1- Guitarra");
			printf("\n\n");
			printf("\t\t\t\t     2- Contrabaixo\n\n\t\t\t\t\t");
			scanf("%i", &opcao2);
            switch (opcao2){
                case 1:
                    system("cls");
                    printf("\t\t\t\t\t Santhier Servi?os LTDA\n");
                    printf("\t\t\t\t\t   _________________\n");
                    printf("\t\t\t\t\t  |Escolha o modelo.|\n");
                    printf("\t\t\t\t\t  ???????????????????\n\n");
                    printf("\t\t\t\t\t  1- Jaguar\n\n");
                    printf("\t\t\t\t\t  2- JazzMaster\n\n");
                    printf("\t\t\t\t\t  3- Les Paul\n\n");
                    printf("\t\t\t\t\t  4- SG\n\n");
                    printf("\t\t\t\t\t  5- Stratocaster\n\n");
                    printf("\t\t\t\t\t  6- SuperStrato\n\n");
                    printf("\t\t\t\t\t  7- SuperStrato 7 Cordas\n\n");
                    printf("\t\t\t\t\t  8- Telecaster\n\n\t\t\t\t\t");
                    scanf("%i", &opcao3);
                    switch (opcao3){
                        case 1:
                            system("cls");
                            printf("\t\t\t\t\t Santhier Servi?os LTDA\n");
                            printf("\t\t\t\t\t   _________________\n");
                            printf("\t\t\t\t\t  |Guitarra Jaguar. |\n");
                            printf("\t\t\t\t\t  ???????????????????\n\n");
                            printf("\t A guitarra Fender Jaguar ? um modelo cl?ssico que se destaca por seu design diferenciado e caracter?sticas\n");
                            printf("  ?nicas. Lan?ada em 1962, foi originalmente voltada ao p?blico surf rock, mas acabou sendo adotada por\n");
                            printf("  m?sicos de g?neros variados, especialmente no punk e no indie rock. Entre suas principais caracter?sticas\n");
                            printf("  est?o o corpo offset, que oferece maior conforto ao tocar sentado, e a escala curta de 24 polegadas, que\n");
                            printf("  facilita bends e acordes mais complexos. A Jaguar possui dois captadores single-coil com blindagem contra\n");
                            printf("  ru?do e um sistema de circuitos duplos: o circuito lead e o rhythm, que permitem alternar entre\n");
                            printf("  configura??es sonoras distintas. Outro destaque ? a ponte flutuante com tremolo, que possibilita efeitos\n");
                            printf("  sutis de vibrato, embora exija ajustes cuidadosos para manter a afina??o. Seu timbre ? brilhante e cortante,\n");
                            printf("  com bastante defini??o, ideal para sons limpos ou com leve distor??o. A Jaguar ? valorizada tanto por sua\n");
                            printf("  est?tica vintage quanto por sua versatilidade tonal.\n\n");
                            printf("  Enviar pedido?\n  1-Sim\n  1-N?o\n");
                            scanf("%i", &opcao4);
                            break;
                            case 2:
                            system("cls");
                            printf("\t\t\t\t\t Santhier Servi?os LTDA\n");
                            printf("\t\t\t\t\t ____________________\n");
                            printf("\t\t\t\t\t|Guitarra Jazzmaster.|\n");
                            printf("\t\t\t\t\t?????????????????????\n\n");
                            printf("\tA guitarra Fender Jazzmaster foi lan?ada em 1958 como uma op??o de ponta voltada originalmente para\n");
                            printf("  m?sicos de jazz, mas acabou se tornando popular entre surfistas na d?cada de 60 e, mais tarde, entre\n");
                            printf("  artistas do rock alternativo e indie. Uma de suas caracter?sticas mais marcantes ? o corpo offset, projetado\n");
                            printf("  para maior conforto ao tocar sentado. Diferente de outras Fender da ?poca, a Jazzmaster possui captadores\n");
                            printf("  single-coil de formato largo e som mais encorpado e suave, com ?nfase nos m?dios e graves ? ideal para\n");
                            printf("  timbres limpos e atmosf?ricos. Assim como a Jaguar, ela conta com dois circuitos independentes (lead e\n");
                            printf("  rhythm), que permitem alternar entre diferentes configura??es de volume e tom com facilidade. A ponte\n");
                            printf("  com tremolo flutuante contribui para efeitos expressivos, mas exige cuidados para garantir estabilidade na\n");
                            printf("  afina??o. A Jazzmaster ? conhecida por seu sustain rico, resposta din?mica e est?tica cl?ssica, tornando-se\n");
                            printf("  uma escolha cultuada por m?sicos que buscam versatilidade e personalidade sonora.\n\n");
                            printf("  Enviar pedido?\n  1-Sim\n  1-N?o\n");
                            scanf("%i", &opcao4);
                            break;
                            case 3:
                            system("cls");
                            printf("\t\t\t\t\t Santhier Servi?os LTDA\n");
                            printf("\t\t\t\t\t   __________________\n");
                            printf("\t\t\t\t\t  |Guitarra Les Paul.|\n");
                            printf("\t\t\t\t\t  ???????????????????\n\n");
                            printf("\tA guitarra Gibson Les Paul ? um dos modelos mais ic?nicos e influentes da hist?ria da m?sica, lan?ada em\n");
                            printf("  1952 em parceria com o guitarrista e inventor Les Paul. Sua constru??o s?lida, com corpo inteiri?o em\n");
                            printf("  mogno e tampo em maple, proporciona um som encorpado, sustain prolongado e excelente proje??o. A Les\n");
                            printf("  Paul se destaca pelos seus captadores humbucker (a partir do final da d?cada de 1950), que oferecem um\n");
                            printf("  timbre quente, cheio e com menor ru?do, ideal para estilos como blues, hard rock e heavy metal. Sua escala\n");
                            printf("  de 24,75 polegadas facilita a execu??o de bends, enquanto o bra?o grosso favorece acordes firmes e notas\n");
                            printf("  com peso. O modelo tradicional inclui controles independentes de volume e tom para cada captador, al?m\n");
                            printf("  de uma chave seletora de tr?s posi??es. Com visual cl?ssico, acabamento luxuoso e timbre poderoso, a Les\n");
                            printf("  Paul ? uma escolha preferida por guitarristas que buscam presen?a sonora e estilo marcante.\n\n");
                            printf("  Enviar pedido?\n  1-Sim\n  1-N?o\n");
                            scanf("%i", &opcao4);
                            break;
                            case 4:
                            system("cls");
                            printf("\t\t\t\t\t Santhier Servi?os LTDA\n");
                            printf("\t\t\t\t\t   ____________\n");
                            printf("\t\t\t\t\t  |Guitarra SG.|\n");
                            printf("\t\t\t\t\t  ??????????????\n\n");
                            printf("\tA guitarra Gibson SG (Solid Guitar) foi lan?ada em 1961 como uma reformula??o da Les Paul, mas acabou se\n");
                            printf("  tornando um modelo pr?prio devido ao seu sucesso. Seu design fino e leve, com duplo cutaway assim?trico\n");
                            printf("  e acesso facilitado ?s casas mais agudas, a torna especialmente confort?vel para solos e performances ao\n");
                            printf("  vivo. Feita geralmente em mogno, a SG mant?m o timbre encorpado caracter?stico da Gibson, mas com um\n");
                            printf("  som um pouco mais agressivo e aberto em compara??o ? Les Paul, devido ao corpo mais fino e leve. Ela\n");
                            printf("  tamb?m utiliza captadores humbucker, que oferecem alta sa?da, sustain e pouca interfer?ncia, sendo ideal\n");
                            printf("  para rock cl?ssico, hard rock e heavy metal. Seu visual arrojado, com os famosos ?chifres? pontudos, e sua\n");
                            printf("  pegada r?pida e direta a tornaram favorita de guitarristas como Angus Young (AC/DC) e Tony Iommi (Black\n");
                            printf("  Sabbath). A SG ? uma guitarra vers?til, poderosa e com forte presen?a tanto est?tica quanto sonora.\n\n");
                            printf("  Enviar pedido?\n  1-Sim\n  1-N?o\n");
                            scanf("%i", &opcao4);
                            break;
                            case 5:
                            system("cls");
                            printf("\t\t\t\t\t Santhier Servi?os LTDA\n");
                            printf("\t\t\t\t\t ______________________\n");
                            printf("\t\t\t\t\t|Guitarra Stratocaster.|\n");
                            printf("\t\t\t\t\t????????????????????????\n\n");
                            printf("\tA Fender Stratocaster, lan?ada em 1954, ? uma das guitarras mais reconhec?veis e vers?teis de todos os\n");
                            printf("  tempos. Seu design ergon?mico com contornos no corpo e corte duplo (double cutaway) oferece conforto\n");
                            printf("  tanto em p? quanto sentado, al?m de facilitar o acesso ?s casas superiores. Equipada normalmente com tr?s\n");
                            printf("  captadores single-coil, a Stratocaster proporciona uma ampla gama de timbres ? do brilho cristalino e  \n");
                            printf("  estalado ao som mais suave e arredondado ? ideal para blues, rock, funk, pop e at? jazz. A chave seletora\n");
                            printf("  de cinco posi??es permite combinar os captadores em diferentes configura??es, ampliando ainda mais sua\n");
                            printf("  versatilidade sonora. O sistema de tremolo (alavanca) permite efeitos de vibrato sutis ou expressivos,    \n");
                            printf("  embora possa afetar a estabilidade da afina??o se n?o for bem ajustado. Seu timbre limpo e articulado,\n");
                            printf("  combinado com um visual cl?ssico e tocabilidade excelente, faz da Stratocaster uma escolha consagrada por\n");
                            printf("  m?sicos de todos os estilos, incluindo lendas como Jimi Hendrix, Eric Clapton e John Frusciante.\n \n");
                            printf("  Enviar pedido?\n  1-Sim\n  1-N?o\n\n");
                            scanf("%i", &opcao4);
                            break;
                            case 6:
                            system("cls");
                            printf("\t\t\t\t\t Santhier Servi?os LTDA\n");
                            printf("\t\t\t\t\t  ____________________\n");
                            printf("\t\t\t\t\t |Guitarra Superstrato|\n");
                            printf("\t\t\t\t\t ??????????????????????\n\n");
                            printf("\tAs guitarras do tipo superstrato (ou superstrat) surgiram nos anos 1980 como uma evolu??o das\n");
                            printf("  Stratocasters, adaptadas para atender ?s demandas de guitarristas de rock pesado e metal. Elas mant?m o\n");
                            printf("  contorno ergon?mico e o formato geral da Stratocaster, mas com modifica??es voltadas para performance e\n");
                            printf("  versatilidade sonora. As principais caracter?sticas incluem captadores de alta sa?da, geralmente com\n");
                            printf("  configura??o HSS (humbucker-single-single) ou HH (dois humbuckers), que oferecem sons mais potentes e\n");
                            printf("  encorpados, ideais para distor??es pesadas e solos r?pidos. Outro diferencial marcante ? a presen?a de\n");
                            printf("  sistemas de ponte flutuante, como o Floyd Rose, que permitem alavancadas extremas sem perder a afina??o\n");
                            printf("  (quando bem regulados). O bra?o costuma ser mais fino e r?pido, com escala de raio mais plano, trastes\n");
                            printf("  jumbo e acesso facilitado ?s ?ltimas casas ? tudo pensado para facilitar t?cnicas como shredding, tapping e\n");
                            printf("  legato. Superstratos s?o preferidas por guitarristas virtuosos e de estilos t?cnicos, como Steve Vai, Joe\n");
                            printf("  legato. Superstratos s?o preferidas por guitarristas virtuosos e de estilos t?cnicos, como Steve Vai, Joe\n");
                            printf("  Enviar pedido?\n  1-Sim\n  1-N?o");
                            scanf("%i", &opcao4);
                            break;
                            case 7:
                            system("cls");
                            printf("\t\t\t\t\t Santhier Servi?os LTDA\n");
                            printf("\t\t\t\t\t   _________________\n");
                            printf("\t\t\t\t\t  |Guitarra Jaguar. |\n");
                            printf("\t\t\t\t\t  ???????????????????\n\n");
                            printf("\t\n");
                            printf("  \n");
                            printf("  \n");
                            printf("  \n");
                            printf("  \n");
                            printf("  \n");
                            printf("  \n");
                            printf("  \n");
                            printf("  \n");
                            printf("  \n");
                            printf("  Enviar pedido?\n  1-Sim\n  1-N?o");
                            scanf("%i", &opcao4);
                            break;
                            case 8:
                            system("cls");
                            printf("\t\t\t\t\t Santhier Servi?os LTDA\n");
                            printf("\t\t\t\t\t   _________________\n");
                            printf("\t\t\t\t\t  |Guitarra Jaguar. |\n");
                            printf("\t\t\t\t\t  ???????????????????\n\n");
                           printf("\t\n");
                            printf("  \n");
                            printf("  \n");
                            printf("  \n");
                            printf("  \n");
                            printf("  \n");
                            printf("  \n");
                            printf("  \n");
                            printf("  \n");
                            printf("  \n");
                            printf("  Enviar pedido?\n  1-Sim\n  1-N?o");
                            scanf("%i", &opcao4);
                            break;

                    }
                    break;
                }
			break;
		}
	}
}
