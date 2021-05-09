#include <stdio.h>
#include <stdlib.h>

typedef struct produto{
    int id, tipo, num_sub, *ids_sub;
    float preçof, imposto;
}produto;

int calcula_preçof(produto *p , produto l, int u){
    
}

int main(){
    int n = 0;
    scanf("%i", &n);
    produto lista[n];
    
    for (int i = 0; i < n; i++){
        
        scanf("i", lista[i].id);
        scanf("%i", lista[i].num_sub);
        
        if (lista[i].num_sub =! 0){
            lista[i].ids_sub = malloc(lista[i].num_sub * sizeof(int));
            
            for (int j = 0; j < lista[i].num_sub; j++){
                scanf("%i", lista[i].ids_sub[j]);
            }
            lista[i].tipo = 1;
        }
        
        else{
            lista[i].tipo = 0;
        }    
        scanf("%f", lista[i].imposto);
    }
    produto **ptr[n];
    for (int k = 0; k < n; k++){
        ptr[k] = &lista[k];
    }

    int y = 0;
    scanf("%i", y);
}
