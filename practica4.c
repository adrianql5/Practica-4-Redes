#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>
#include <errno.h>

void transFormarIp(){

}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Uso: %s <archivo_tabla_reenvio> <direccion_IP>\n", argv[0]);
        return EXIT_FAILURE;
    }

    uint8_t sufijo;
    struct in_addr mired ;

    char * IPEntrante;
    IPEntrante=(char*) malloc(sizeof(strlen(argv[2])));


    mired.s_addr = 0;
    if((sufijo = inet_net_pton ( AF_INET , "193.20.102.40/14" , ( void * ) &mired , sizeof ( struct in_addr ) ) ) < 0) {
        fprintf ( stderr , "Formato de direccion incorrecto " ) ;
        exit( EXIT_FAILURE ) ;
    }
    printf ( " %X %u \n" , mired.s_addr , sufijo) ;

    return EXIT_SUCCESS;
}

