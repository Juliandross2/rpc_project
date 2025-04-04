/*
* This is sample code generated by rpcgen.
* These are only templates and you can use them
* as a guideline for developing your own functions.
*/

#include "InterfaceClienteServidorPedidos.h"

void autorizar_usuarios_1(char *host)
{
	CLIENT *clnt;
	int *result_1;
	nodo_hamburguesa objHamburguesa;

#ifndef DEBUG
	clnt = clnt_create(host, autorizar_usuarios, autorizar_usuarios_version, "udp");
	if (clnt == NULL)
	{
		clnt_pcreateerror(host);
		exit(1);
	}
#endif /* DEBUG */

	int opcion;
	do
	{
		printf("\n======= Menu ========");
		printf("\n1. Enviar pedido");
		printf("\n0. Salir");
		printf("\n======= =============");
		printf("\nDigite opcion: ");
		scanf("%d", &opcion);
		getchar();
		if (opcion == 0)
		{	
			printf("\nSaliendo del sistema...\n");
			break;
		}
		if(opcion ==1){
			printf("\nDigite el nombre de la hamburguesa: ");
			scanf("%s", objHamburguesa.nombreHamburguesa);
			printf("\nDigite el tipo de hamburguesa 1. Pequena, 2. Mediana, 3. Grande: ");
			scanf("%d", &objHamburguesa.tipoHamburguesa);
			printf("\nDigite la cantidad de ingredientes extra: ");
			scanf("%d", &objHamburguesa.cantidadIngredientesExtra);
			result_1 = generarturno_1(&objHamburguesa, clnt);
			if (result_1 == (int *)NULL)
			{
				clnt_perror(clnt, "call failed");
			}
			else
			{
				printf("\n Cantidad de usuarios en la fila virtual %d ", (*result_1));
			}
		}
	}while (opcion!=0);
	

#ifndef DEBUG
	clnt_destroy(clnt);
#endif /* DEBUG */
}

int main(int argc, char *argv[])
{
	char *host;

	if (argc < 2)
	{
		printf("usage: %s server_host\n", argv[0]);
		exit(1);
	}
	host = argv[1];
	autorizar_usuarios_1(host);

	exit(0);
}