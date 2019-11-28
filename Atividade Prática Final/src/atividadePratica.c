#include "atividadePratica.h"
#define arquivoDeLeitura "../data/Videos.txt"


int main(){

    structArvore *raiz;

    FILE * file = acharArquivoData();
    
    raiz = lerArquivoCriaArvore(file);
    
    iniciarBusca(raiz);

    //exibirEmOrdem(raiz);
    
    return 0;
}


FILE *acharArquivoData(){

    FILE *ponteiroArquivo;

    ponteiroArquivo = fopen(arquivoDeLeitura, "r");

    if(ponteiroArquivo == NULL){
        printf("\nArquivo não encontrado!\n\n");
        exit(0);
    }

    return ponteiroArquivo;
}

structArvore *lerArquivoCriaArvore(FILE *file){
        
    char *codico = (char *) malloc(7 * sizeof(char));
    char titulo[68];
    char midia[5];
    char preco[5];
    char genero[12];

    int numeroDaLinha = 1;


    FILE *auxPonteiro;
    auxPonteiro = fopen(arquivoDeLeitura, "r");

    structArvore *raiz = (structArvore *) malloc(sizeof(structArvore));
    raiz = NULL;
    
    //Ler número de linhas do arquivo
    char caractere;
    while((caractere = fgetc(auxPonteiro)) != EOF){ 
        
        if(caractere=='\n'){ 
            //printf("linha: %d\n", numeroDaLinha);		
		    numeroDaLinha++;
        }
	} 
    fclose(auxPonteiro);


    //Ler dados dos produtos do arquivo
    char dados[101] = {};

    int auxNumeroDaLinha = 2;

    while((fgets(dados, 101, file) != NULL) && auxNumeroDaLinha != numeroDaLinha){

        //printf("###################\n");
        fscanf( file, "%s", codico);
        //printf( "\ncodicoFILE: %s\n", codico);
        fscanf( file, "%s", titulo);
        //printf( "tituloFILE: %s\n", titulo);
        fscanf( file, "%s", midia);
        //printf( "midiaFILE: %s\n", midia);
        fscanf( file, "%s", preco);
        //printf( "precoFILE: %s\n", preco);
        fscanf( file, "%s", genero);
        //printf( "generoFILE: %s\n\n", genero);

        //raiz = inserirNaArvore(raiz , codico, auxNumeroDaLinha);
        inserirNaArvore(&raiz , codico, auxNumeroDaLinha);

        /* printf("saiu\n");
        printf("                codico: %s\n", raiz->codicoDoProduto);
        printf("                linha: %d\n\n", raiz->linhaDoArquivo); */

        auxNumeroDaLinha++;
    }
    fclose(file);
    
    printf("Arvore Gerada com Sucesso!\n");

    //exibirEmOrdem(raiz);
    return raiz;
}

void **inserirNaArvore(structArvore **Raiz, char *codico,  int linha){

    /* printf("codico: %s\n", codico);
    printf("linha: %d\n\n", linha); */

    structArvore *novoNo = (structArvore *) malloc(sizeof(structArvore));

    if(novoNo == NULL){
        printf("Alocacao nao feita\n");
        exit(1);
    }

    strcpy(novoNo->codicoDoProduto, codico);
    novoNo->linhaDoArquivo = linha;
    novoNo->esquerda = NULL;
    novoNo->direita = NULL;

    if(*Raiz == NULL){
        *Raiz = novoNo;
    }
    else{

        structArvore *atual = *Raiz;
        structArvore *anterior = NULL;
    
        while(atual != NULL){

            anterior = atual;
            
            if(strcmp(codico, atual->codicoDoProduto) < 0){

                atual = atual->esquerda;
            }
            else{
                
                atual = atual->direita;
            }
        }

        if(strcmp(codico, anterior->codicoDoProduto) < 0){

            anterior->esquerda = novoNo;
        }
        else{

            anterior->direita = novoNo;
        }
    }
}

void exibirEmOrdem(structArvore *No){
    
    if(No != NULL){
        exibirEmOrdem(No->esquerda);
        printf("Codico: %s\n", No->codicoDoProduto);
        printf("Linha: %d\n\n", No->linhaDoArquivo);
        exibirEmOrdem(No->direita);
    }
}

void iniciarBusca(structArvore *Raiz){

    char codicoDeBusca[7];
    printf("\n  Digite Codico desejado: ");
    scanf("%s", codicoDeBusca);
    //printf("codico: %s\n", codicoProcura);


    structArvore *noEncontrado = Raiz;

    noEncontrado = buscarProduto(Raiz, codicoDeBusca);
    if(noEncontrado != NULL){

        /* printf("    Codico: %s\n", noEncontrado->codicoDoProduto);
        printf("    Linha: %d\n\n", noEncontrado->linhaDoArquivo); */

        printarDadosProduto(noEncontrado);
    }
    else{

        printf("\n  Filme Não Catalogado!!!\n\n");
    }
}

structArvore *buscarProduto(structArvore *No, char*codicoDeBusca){

    //printf("codico: %s\n", codicoDeBusca);

    if(No != NULL){

        if(strcmp(codicoDeBusca, No->codicoDoProduto) == 0){

            return No;
        }
        else if(strcmp(codicoDeBusca, No->codicoDoProduto) < 0){
            
            buscarProduto(No->esquerda, codicoDeBusca);
        }
        else{
            
            buscarProduto(No->direita, codicoDeBusca);
        }
    }
    else{

        return NULL;
    }
}

void printarDadosProduto(structArvore *No){

    //printf("linha do arquivo: %d\n", No->linhaDoArquivo);

    int auxLinhaNoArquivo = 2;

    FILE *auxPonteiro;
    auxPonteiro = fopen(arquivoDeLeitura, "r");

    char *codico = (char *) malloc(7 * sizeof(char));
    char titulo[68];
    char midia[5];
    char preco[5];
    char genero[12];
    
    char dados[101] = {};
    while((fgets(dados, 101, auxPonteiro) != NULL)){ 

        if(auxLinhaNoArquivo == No->linhaDoArquivo){
        
            printf("\n   LINHA: %d\n", No->linhaDoArquivo);
            fscanf( auxPonteiro, "%s", codico);
            printf("   CODICO: %s\n", codico);
            fscanf( auxPonteiro, "%s", titulo);
            printf("   TITULO: %s\n", titulo);
            fscanf( auxPonteiro, "%s", midia);
            printf("   MIDIA:  %s\n", midia);
            fscanf( auxPonteiro, "%s", preco);
            printf("   PRECO:  %s\n", preco);
            fscanf( auxPonteiro, "%s", genero);
            printf("   GENERO: %s\n\n", genero);

            break;
        }	        
        else{
            fscanf( auxPonteiro, "%s", codico);
            //printf( "\ncodicoFILE: %s\n", codico);
            fscanf( auxPonteiro, "%s", titulo);
            //printf( "tituloFILE: %s\n", titulo);
            fscanf( auxPonteiro, "%s", midia);
            //printf( "midiaFILE: %s\n", midia);
            fscanf( auxPonteiro, "%s", preco);
            //printf( "precoFILE: %s\n", preco);
            fscanf( auxPonteiro, "%s", genero);
            //printf( "generoFILE: %s\n\n", genero);
        }
    
		auxLinhaNoArquivo++;
	} 
}