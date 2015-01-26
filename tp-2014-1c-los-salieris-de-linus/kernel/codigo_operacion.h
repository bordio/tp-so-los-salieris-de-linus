#define HANDSHAKE_PROGRAMA 100 // parametros: NULL; extra: NULL
#define COMIENZO_CODIGO 110 // parametros: NULL; extra: NULL
#define CODIGO 120 // parametros: NULL; extra: "codigo"
#define FIN_CODIGO 130 // parametros: NULL; extra: NULL
#define HANDSHAKE_KERNEL 200 // parametros: NULL; extra: NULL
#define IMPRIMIR 210 // parametros: NULL; extra: "texto"
#define CODIGO_RECIBIDO 220 // parametros: NULL; extra: NULL
#define CREAR_SEGMENTO 230 // parametros: pid,tamanio; extra: NULL
#define DESTRUIR_SEGMENTOS 240 // parametros: pid; extra: NULL
#define EJECUTAR_INSTRUCCION 250 // parametros: pid,segmento_codigo,segmento_stack,stack_pointer,indice_codigo,indice_etiqueta,pc,tam_contexto_actual,tam_indice_etiquetas; extra: NULL
#define HANDSHAKE_CPU 300 // parametros: NULL; extra: NULL
#define HANDSHAKE_CPU_RET 305
#define SYS_IMPR 310 // parametros: numero; extra: NULL
#define SYS_IMPR_TEXTO 320 // parametros: NULL; extra: "texto"
#define SYS_OBTENER_VALOR 330 // parametros: NULL; extra: "nombre_variable"
#define SYS_VALOR_OBTENIDO 460 //parametros: valor; extra: NULL
#define SYS_ASIGNAR_VALOR 340 // parametros: valor; extra: "nombre_variable"
#define SYS_ASIGNAR_OK 345	// parametros: NULL; extra: NULL
#define SYS_SIGNAL 350 // parametros: NULL; extra: "semaforo"
#define SYS_WAIT 360 // parametros: NULL; extra: "semaforo"
#define SYS_IO 370 // parametros: unidades; extra: "dispositivo"
#define FIN_INSTRUCCION 380 // parametros: pid,segmento_codigo,segmento_stack,stack_pointer,indice_codigo,indice_etiqueta,pc,tam_contexto_actual,tam_indice_etiquetas; extra: NULL
#define FIN_PROGRAMA 390 // parametros: pid,segmento_codigo,segmento_stack,stack_pointer,indice_codigo,indice_etiqueta,pc,tam_contexto_actual,tam_indice_etiquetas; extra: "estado variables"
#define CREAR_SEGMENTO_OK 410 // parametros: base; extra: NULL
#define ESCRIBIR_SEGMENTO_OK 420 // parametros: NULL; extra: NULL
#define DATOS_SEGMENTO 430 // parametros: NULL; extra: "texto"
#define DESTRUIR_SEGMENTOS_OK 440 // parametros: NULL; extra: NULL
#define CAMBIO_PROCESO_OK 450 // parametros: NULL; extra: NULL
#define SEGMENTATION_FAULT 500 // parametros: NULL; extra: NULL
#define MEMORY_OVERLOAD 501 // parametros: NULL; extra: NULL
#define STACK_OVERFLOW 502 // parametros: NULL; extra: NULL
#define STACK_UNDERFLOW 503 // parametros: NULL; extra: NULL
#define ERROR_DESTRUCION_SEGMENTOS 504 // parametros: NULL; extra: NULL
#define SEMAFORO_NO_EXISTE 505 // parametros: NULL; extra: NULL
#define DISPOSITIVO_NO_EXISTE 506 // parametros: NULL; extra: NULL
#define ETIQUETA_NO_EXISTE 507 // parametros: NULL; extra: NULL
#define VARIABLE_NO_EXISTE 508 // parametros: NULL; extra: NULL
#define CAMBIO_PROCESO 910 // parametros: pid; extra: NULL
#define ESCRIBIR_SEGMENTO 920 // parametros: base,offset; extra: "datos"
#define LEER_SEGMENTO 930 // parametros: base,offset,cantidad; extra: NULL

/*MENSAJES DE PIPES*/
#define SYS_IMPR_PIPE 2000
#define SYS_IMPR_TEXTO_PIPE 3000
#define COD_EXIT_PIPE 5000				//Texto = "Segmentation Fault" | "Estado de Variables: ..." | "Desconexion de mi CPU"
#define PROG_READY_PIPE 1000
#define IO_TERMINA 4000
#define ELIMINAR_PROGRAMA 6000
#define HANDSHAKE_IO 6500
#define SYS_BLOQ_IO 2500

