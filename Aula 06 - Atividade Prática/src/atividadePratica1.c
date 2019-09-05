#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void gerarVetor(float *vetorSensores);
void calcularVetorMedias(float *vetorSensores, float *vetorMedias, int tamanhoJanela);
int compararNivel(float *vetorMedias, int nivelAlerta);
void printarResultado(float *vetorSensores, float *vetorMedias, int QtdeAlertas);

int main(){

    float *vetorSensores = (float *) calloc(300, sizeof(float));
    float *vetorMedias = (float *) calloc(300, sizeof(float));
    int tamanhoJanela;
    int nivelAlerta;
    int QtdeAlertas;

    printf("Insira o Tamanho da Janela: ");
    scanf("%d", &tamanhoJanela);
    printf("Insira o Nível de Alerta: ");
    scanf("%d", &nivelAlerta);

    gerarVetor(vetorSensores);
    calcularVetorMedias(vetorSensores, vetorMedias, tamanhoJanela);
    QtdeAlertas = compararNivel(vetorSensores, nivelAlerta);

    printarResultado(vetorSensores, vetorMedias, QtdeAlertas);

    return 0;    
}

void gerarVetor(float *vetorSensores){

    srand(time(NULL));

    for(int i = 0; i < 300; i++){
    
        vetorSensores[i]=(rand()) % 1000;
    }
}

void calcularVetorMedias(float *vetorSensores, float *vetorMedias, int tamanhoJanela){

    int auxLadoJanela = tamanhoJanela/2;

    for(int i = 0; i < 300; i++){
        
        float auxSoma = 0;

        if((i - auxLadoJanela) >= 0 && (i + auxLadoJanela) <= 299){
           
            for(int j = (i-auxLadoJanela); j <= (i+auxLadoJanela); j++){
                
                auxSoma += vetorSensores[j];
            }

            vetorMedias[i] = auxSoma/tamanhoJanela;
        }
        else{
            if((i - auxLadoJanela) < 0){

                int aux = auxLadoJanela - i;
                int auxNumVizinhos = 0;

                for(int j = 0; j <= i + auxLadoJanela; j++){
                    
                    auxSoma += vetorSensores[j];
                    
                    auxNumVizinhos++;
                }

                vetorMedias[i] = auxSoma/auxNumVizinhos;
            }
            
            else if((i + auxLadoJanela) > 299){

                int aux = (i + auxLadoJanela) - 299;
                int auxNumVizinhos = 0;

                for(int j = (i - auxLadoJanela); j <= 299; j++){
                    
                    auxSoma += vetorSensores[j];

                    auxNumVizinhos++;
                }

                vetorMedias[i] = auxSoma/auxNumVizinhos;
            }
        }
    }
}

int compararNivel(float *vetorMedias, int nivelAlerta){

    int QtdeAlerta = 0;

    for(int i = 0; i <= 300; i++){
        
        if(vetorMedias[i] > nivelAlerta){
            
            QtdeAlerta++;
        }
    }

    return QtdeAlerta;
}

void printarResultado(float *vetorSensores, float *vetorMedias, int QtdeAlertas){

    printf("Quatidades de Alertas: %d\n", QtdeAlertas);

    for(int i = 0; i < 300; i++){

        printf("[Sensor(%.1f) Media(%.1f)]\n", vetorSensores[i], vetorMedias[i]);
    }
}