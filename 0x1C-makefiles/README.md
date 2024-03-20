# C - Makefiles

This project focuses on practicing writing Makefiles to automate the compilation process of C programs.

## Tests :heavy_check_mark:

* [tests](./tests): Folder containing test files.

## Helper Files :raised_hands:

* [school.c](./school.c): C function that displays a seahorse in text, utilized for Makefile practice.
* [main.c](./main.c): Main C function that runs the function defined in [school.c](./school.c).

## Header File :file_folder:

* [m.h](./m.h): Header file defining the function prototype used in `school.c`.

## Tasks :page_with_curl:

* **0. make -f 0-Makefile**
  * [0-Makefile](./0-Makefile): Makefile creating an executable `school` based on [school.c](./school.c) and [main.c](./main.c). It includes a rule `all` that builds the executable.

* **1. make -f 1-Makefile**
  * [1-Makefile](./1-Makefile): Makefile building an executable `school` based on [school.c](./school.c) and [main.c](./main.c). It introduces variables `CC` and `SRC`, and the `all` rule only recompiles updated source files.

* **2. make -f 2-Makefile**
  * [2-Makefile](./2-Makefile): Makefile creating an executable `school` based on [school.c](./school.c) and [main.c](./main.c). It defines variables `OBJ` and `NAME`.

* **3. make -f 3-Makefile**
  * [3-Makefile](./3-Makefile): Makefile generating an executable `school` based on [school.c](./school.c) and [main.c](./main.c). It includes rules for cleaning up temporary files, objects, and executables, along with a rule for forced recompilation. Variable `RM` is defined.

* **4. A complete Makefile**
  * [4-Makefile](./4-Makefile): Makefile creating an executable `school` based on [school.c](./school.c) and [main.c](./main.c). It introduces compiler flags `CFLAGS`.

* **5. Island Perimeter**
  * [5-island_perimeter.py](./5-island_perimeter.py): Python function returning the perimeter of an island defined in a grid.

* **6. make -f 100-Makefile**
  * [100-Makefile](./100-Makefile): Makefile creating an executable `school` based on [school.c](./school.c) and [main.c](./main.c). It builds on [4-Makefile](./4-Makefile), omitting the `RM` variable and not using `$(CFLAGS)`. It ensures proper dependency checking and header file inclusion.
