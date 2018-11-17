**Proyecto de Programacion de Sistemas | Primer parcial**

	
**Integrantes** Ronny Martinez & Rommel Saquicela.



Este proyecto se basa en la implementación de una aplicacion similar a la del comando wc del bash de Linux, 
pero un tanto más simplificada.

A continuación se presentará una breve instrucción de lo que consiste el programa en sí: 


---

## Comando de conteo de palabras "wc"

Para llamar el programa de manera correcta se tiene que tomar en cuenta lo siguiente:


./wc [opciones] archivo
wc, o "word count," muestra en consola el número total de saltos de línea, palabras, 
y caracteres del archivo de entrada.
-h: ayuda, muestra este mensaje
-l: muestra el total de saltos de línea
-w: muestra el total de palabras
-c: muestra el total de caracteres

---

**Ejemplo de uso, asumiendo que el archivo miarchivo.txt 
existe en el sistema:**

$ ./wc miarchivo.txt
5 13 57 miarchivo.txt

Donde **5** es el número de saltos de línea en el archivo, 
**13** el número de palabras y **57** el número de caracteres.

---

**Ejemplo del uso de opciones:**

$ wc -w miarchivo.txt
13


**Instrucciones del programa:**

El argumento entre paréntesis que se escribe en el comando es el nombre del
archivo de texto que queremos analizar.



El programa mostrará el mensaje de ayuda arriba mostrado en los siguientes casos:

    Se usa la opción –h
    El número de argumentos proporcionados es erróneo.
    Se especifica una opción no existente.
    






