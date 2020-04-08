# Word count command **wc** implemented in C

This repository contains the code to generate a word counting program, inspired by the **wc** command of the Linux bash.

**Usage**

```bash
	./wc	[-l] file
				[-w] file
				[-c] file
```

**Options**
```bash
	-h: Show this message
	-l: shows the total of line breaks
	-w: show total words
	-c: show total characters
```

---

**Example of use, assuming that "file.txt" exists in the system:**

```bash
$ ./wc file.txt
5 13 57 file.txt
```

Where:
**5** line breaks(\n),
**13** the number of words
**57** the number of characters.

---

**Example of using options:**
```bash
$ ./wc -w file.txt
13
```

**Instrucciones del programa:**

El numero de argumentos maximo que aceptara el programa es de 2. Cuando exista un error en la llamada del programa, se mostrara un mensaje de error apropiado.



El programa mostrará el mensaje de ayuda arriba mostrado en los siguientes casos:

  * Se usa la opción –h

  * El número de argumentos proporcionados es erróneo.

  * Se especifica una opción no existente.

  * El archivo no existe.
