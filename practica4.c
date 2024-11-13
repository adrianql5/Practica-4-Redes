#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>
#include <errno.h>

void transFormarIp(char *str){
    int contador=0;
    for(int i=0; i<strlen(str); i++){
        if(str[i]=='.'){
            contador++;
        }
    }

    if(contador==0){
        strcat(str,".0.0.0");
    }
    else if(contador==1){
        strcat(str,".0.0");
    }
    else if(contador==2){
        strcat(str,".0");
    }
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Uso: %s <archivo_tabla_reenvio> <direccion_IP>\n", argv[0]);
        return EXIT_FAILURE;
    }


    char IPEntrante[50];
    strcpy(IPEntrante,argv[2]);

    printf("%s\n", IPEntrante);

    transFormarIp(IPEntrante);


    printf("%s", IPEntrante);


    return EXIT_SUCCESS;
}

