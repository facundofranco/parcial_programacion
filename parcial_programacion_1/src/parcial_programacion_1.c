/*
 ============================================================================
 Name        : parcial_programacion_1.c
 Author      : Facundo Franco
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
/*
 *  Realizar una función que  reciba como parámetro el importe de un producto y un porcentaje de descuento.
 *   La función retornará el  importe con el descuento aplicado.
 *    Probar en el main.
 */

int aplicarDescuento(int importe, float descuento);

int main(void)
{
	setbuf(stdout,NULL);
	int importe;
	float descuento;
	float respuesta;

	printf("Ingrese el importe del producto: \n");
	scanf("%d", &importe);
	printf("ingrese el descuento a aplicar: \n");
	scanf("%f",&descuento);

	respuesta=aplicarDescuento(importe, descuento);
	printf("El importe con el descuento es :%.2f", respuesta);
	return EXIT_SUCCESS;
}

int aplicarDescuento(int importe, float descuento)
{
	int retorno;
	float descuentoAplicado;
	float resultadoFinal;

	descuentoAplicado = (importe*descuento)/100;

	resultadoFinal = importe-descuentoAplicado;
	retorno = resultadoFinal;

	return retorno;
}



/*
 * ¿Qué relaciones existen entre los conceptos de función, pasaje por valor, pasaje por referencia y tipos de variables?. Desarrolle.
 *
 * Una funcion lo que hace es poder modularizar acciones y de esta manera evitar repetir codigo. Hay varias formas de plantear una funcion dependiendo
 * que tanta independencia necesitamos y en caso de querer retornar algo simplemente ponemos lo que queremos,
 * un ejemplo es si queremos retornar un entero necesitamos que la funcion sea de la siguiente manera "int nombreDeFuncion()", en caso de no retornar nada usamos "void".
 * Dentro de los parametros podemos recibir tanto los valores por pasaje que son aquellos que se guardan en una direccion de memoria distinta a la de la funcion
 * o los valores por referencia los cuales una vez definidos no se pueden cambiar.
 * el prototipo de la funcion se hace en los .h y el cuerpo de dicha funcion en el .c.
 */

