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
