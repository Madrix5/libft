PROYECTO LIBFT

·Debe estar escrito en C.

·Debe estar escrito siguiendo la norma. Si hay errores de norma la nota será un 0.

·Las funciones no deben terminar de forma inesperada (segfault, bus error, double free, etc) o tener 
comportamientos indefinidos. Si pasa la nota será un 0.

·Toda la memoria asignada en el heap deberá liberarse adecuadamente cuando sea necesario. No se permiten
leaks de memoria.

·Si el enunciado lo requiere, deberás entregar un Makefile que compilará tus archivos fuente al output
requerido con las flags -Wall, -Werror y -Wextra y el Makefile no deberá hacer relink.

·Tu Makefile debe contener al menos las normas $(NAME), all, clean, fclean y re.

·Para entregar el bonus deberás incluir una regla bonus en tu Makefile, en la que añadirás todos los
headers, librerías o funciones que estén prohibidas en la parte principal del proyecto. Los bonus deben
estar en archivos distintos _bonus.{c/h}. La parte obligatoria y los bonus se evalúan por separado.

·Si tu proyecto permite el uso de la libft, deberás copiar su fuente y sus Makefile asociados en un
directorio libft con su correspondiente Makefile. El Makefile de tu proyecto debe compilar primero la
librería utilizando su Makefile, y después compilar el proyecto.

·Te recomendamos crear programas de prueba para tu proyecto, aunque este trabajo no será entregado ni
evaluado. Te dará la oportunidad de verificar que tu programa funciona correctamente durante tu
evaluación y la de otros compañeros. Y sí, tienes permitido utilizar estas pruebas durante tu
evaluación o la de otros compañeros.

·Entrega tu trabajo en tu repositorio Git asignado. Solo el trabajo de tu repositorio Git será evaluad.
Si Deepthought evalúa tu trabajo, lo hará después de tus compañeros. Si se encuentra un error durante
la evaluación de Deepthought, esta habrá terminado.

---------------------------------------------------------------------------------------------------------------------------------

PARTE obligatoria

Nombre del programa: libft.a
Archivos a entregar: Makefile, libft.h, ft_*.c
Makefile: NAME, all, clean, fclean, re
Funciones autorizadas: Detalles debajo
Se permite usar libft: Todavía no la tienes.
Descripción: Escribe tu propia librería, un conjunto de funciones que será muy útil a lo largo del cursus.

Consideraciones técnicas:

    ·Declarar variables globales está prohibido.

    ·Si necesitas separar una función compleja en varias, asegúrate de utilizar la palabra static para ello.
    De esta forma, las funciones se quedarán en el archivo apropiado.

    ·Pon todos tus archivos en la raíz de tu repositorio.

    ·Se prohíbe entregar archivos no utilizados.

    ·Todos los archivos .c deben compilarse con las flags -Wall -Werror -Wextra.

    ·Debes utilizar el comando ar para generar la librería. El uso de libtool queda prohibido.

    ·Tu libft.a tiene que ser creado en la raíz del repositorio.

---------------------------------------------------------------------------------------------------------------------------------

Parte 1 - Funciones de libc.

    Para empezar, deberás rehacer algunas funciones de la libc. Tus funciones tendrán los mismos prototipos
e implementarán los mismos comportamientos que las funciones originales. Deberán ser tal y las describe
el man. La única diferencia será la nomenclatura. Empezarán con el prefijo "ft_". Por ejemplo, strlen se
convertirá en ft_strlen.

    Algunas funciones tienen en sus prototipos la palabra "restrict". Esta palabra forma parte del estándar c99.
Por lo tanto, está prohibido incluirla en tus propios prototipos, así como compilar tu código con la flag
-std=99.

    Deberás escribir tus propias funciones implementando las siguientes funciones originales. No requieren de
funciones autorizadas.

·isalpha    ·isdigit    ·isalnum    ·isascii    ·isprint    ·strlen    ·memset  ·bzero  ·memcpy     ·memmove
·strlcpy    ·strlcat    ·toupper    ·tolower    ·strchr     ·strrchr   ·strncmp ·memchr ·memcmp     ·strnstr
·atoi

    Para implementar estas otras dos funciones, tendrás que utilizar malloc():

·calloc     ·strdup

---------------------------------------------------------------------------------------------------------------------------------

Parte 2 - Funciones adicionales.

Nombre de la función: ft_substr
Prototipo: char *ft_substr(char const *s, unsigned int start, size_t len)
Archivos a entregar: -
Parámetros:
    -s: La string desde la que crear la substring.
    -start: El índice del carácter en 's' desde el que empezar la substring.
    -len: La longitud máxima de la substring.
Valor devuelto:
    -La substring resultante.
    -NULL si falla la reserva de memoria.
Funciones autorizadas: malloc
Descripción: 
    Reserva (con malloc(3)) y devuelve una substring de la string 's'.
    La substring empieza desde el índice 'start' y tiene una longitud máxima 'len'.

*********************************************************************************************************************************

Nombre de la función:ft_strjoin
Prototipo: char *ft_strjoin(char const *s1, char const *s2)
Archivos a entregar: -
Parámetros:
    -s1: La primera string.
    -s2: La string a añadir 's1'.
Valor devuelto:
    -La nueva string.
    -NULL si falla la reserva de memoria.
Funciones autorizadas: malloc
Descripción: Reserva con (malloc(3)) y devuelve una nueva string, formada por la concatenación de 's1' y 's2'.

*********************************************************************************************************************************

Nombre de la función: ft_strtrim
Prototipo: char **ft_split(char const *s, char c)
Archivos a entregar: -
Parámetros:
    -s1: La string que debe ser recortada.
    -set: Los caracteres a eliminar de la string.
Valor devuelto:
    -La string recortada.
    -NULL si falla la reserva de memoria.
Funciones autorizadas: malloc
Descripción: Elimina todos los caracteres de la string 'set' desde el principio y desde el final de 's1', hasta encontrar
            un carácter no perteneciente a 'set'. La string resultante se devuelve con una reserva de malloc(3).

*********************************************************************************************************************************

Nombre de la función: ft_split
Prototipo: char **ft_split(char const *s, char c)
Archivos a entregar: -
Parámetros:
    -s: Ls string a separar.
    -c: El carácter delimitador.
Valor devuelto:
    -El array de nuevas strings resultante de la separación.
    -NULL si falla la reserva de memoria.
Funciones autorizadas: malloc, free
Descripción: Reserva (utilizando malloc(3)) un array de strings resultante de separar la string 's' en substrings utilizando
            el carácter 'c' como delimitador. El array debe terminar con un puntero NULL.

*********************************************************************************************************************************

Nombre de la función: ft_itoa
Prototipo: char *ft_itoa(int n)
Archivos a entregar: -
Parámetros: 
    -n: El entero a convertir.
Valor devuelto:
    -La string que represente el número.
    -NULL si falla la reserva de memoria.
Funciones autorizadas: malloc
Descripción: Utilizando malloc(3), genera una string que represente el valor entero recibido como argumento.
            Los números negativos tienen que gestionarse.

*********************************************************************************************************************************

Nombre de la función: ft_strmapi
Prototipo: char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
Archivos a entregar: -
Parámetros:
    -s: La string que iterar.
    -f: La función a aplicar sobre cada carácter.
Valor devuelto:
    -La string creada tras el correcto uso de 'f' sobre cada carácter.
    -NULL si falla la reserva de memoria.
Funciones autorizadas: malloc
Descripción: A cada carácter de la string 's', aplica la función 'f' dando como parámetros el índice de cada carácter dentro de
            's' y el propio carácter. Genera una nueva string con el resultado del uso sucesivo de 'f'.

*********************************************************************************************************************************

Nombre de la función: ft_striteri
Prototipo: void ft_striteri(char *s, void (*f)(unsigned int, char*))
Archivos a entregar: -
Parámetros:
    -s: La string que iterar.
    -f: La función a aplicar sobre cada carácter.
Valor devuelto: Nada
Funciones autorizadas: Ninguna
Descripción: A cada carácter de la string 's', aplica la función 'f' dando como parámetros el índice de cada carácter dentro de
            's' y la dirección del propio carácter, que podrá modificarse si es necesario.

*********************************************************************************************************************************

Nombre de la función: ft_putchar_fd
Prototipo: void ft_putchar_fd(char c, int fd)
Archivos a entregar: -
Parámetros:
    -c: El carácter a enviar.
    -fd: El file descriptor sobre el que escribir.
Valor devuelto: Nada
Funciones autorizadas: write
Descripción: Envía el carácter 'c' al file descriptor especificado.

*********************************************************************************************************************************

Nombre de la función: ft_putstr_fd
Prototipo: void ft_putstr(char *s, int fd)
Archivos a entregar: -
Parámetros:
    -s: La string a enviar.
    -fd: El file descriptor sobre el que escribir.
Valor devuelto: Nada
Funciones autorizadas: write
Descripción: Envia el carácter 'c' al file descriptor especificado.

*********************************************************************************************************************************

Nombre de la función: ft_putendl_fd
Prototipo: void ft_putendl_fd(char *s, int fd)
Archivos a entregar: -
Parámetros:
    -s: La string a enviar.
    -fd: El file descriptor sobre el que escribir.
Valor devuelto: Nada
Funciones autorizadas: write
Descripción: Envia la string 's' al file descriptor especificado.

*********************************************************************************************************************************

Nombre de la función: ft_putnbr_fd
Prototipo: void ft_putnbr_fd(int n, int fd)
Archivos a entregar: -
Parámetros:
    -n: El número a enviar.
    -fd: El file descriptor sobre el que escribir.
Valor devuelto: Nada
Funciones autorizadas: write
Descripción: Envia el número 'n' al file descriptor dado.

---------------------------------------------------------------------------------------------------------------------------------

PARTE BONUS

    Si completas la parte obligatoria, no dudes en llevarla más lejos haciendo esta parte extra. Te dará puntos adicionales si la
completas correctamente.

    Las funciones para manipular memoria y strings son muy útiles... Pero pronto descubrirás que la manipulación de listas lo es
incluso más.

    Deberás utilizar la siguiente estructura para representar un nodo de tu lista. Añade la declaración a tu archivo libft.h.

""""
typedef struct  s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;
""""

    Los miembros de la estructura t_list son:
    -content: la información contenida por el nodo.
    -void *: permite guardar cualquier tipo de información.

    En tu Makefile, añade una regla make bonus que incorpore las funciones bonus a tu libft.a.

    Implementa las siguientes funciones para utilizar fácilmente tus listas.

*********************************************************************************************************************************

Nombre de la función: ft_lstnew
Prototipo:t_list *ft_lstnew(void *content)
Archivos a entregar: -
Parámetros:
    -content: El contenido con el que cread el nodo.
Valor devuelto: El nuevo nodo.
Funciones autorizadas: malloc
Descripción: Crea un nuevo nodo utilizando malloc(3). La variable miembro 'content' se inicializa con el contenido del parámetro
            'content'. La variable 'next', con NULL.

*********************************************************************************************************************************

Nombre de la función: ft_lstadd_front
Prototipo: void ft_lstadd_front(t_list **lst, t_list *new)
Archivos a entregar: -
Parámetros:
    -lst: La dirección de un puntero al primer nodo de una lista.
    -new: Un puntero al nodo que añadir al principio de la lista
Valor devuelto: Nada
Funciones autorizadas: Ninguna
Descripción: Añade el nodo 'new' al principio de la lista 'lst'. 

*********************************************************************************************************************************

Nombre de la función: ft_lstsize
Prototipo: void ft_lstsize(t_list **lst)
Archivos a entregar: -
Parámetros:
    -lst: La dirección de un puntero al primer nodo de una lista.
Valor devuelto: La longitud de la lista.
Funciones autorizadas: Ninguna
Descripción: Cuenta el número de nodos de una lista.

*********************************************************************************************************************************

Nombre de la función: ft_lstlast
Prototipo: t_list *ft_lstlast(t_list *lst)
Archivos a entregar: -
Parámetros:
    -lst: El principio de la lista.
Valor devuelto: Último nodo de la lista.
Funciones autorizadas: Ninguna
Descripción: Devuelve el último nodo de la lista.

*********************************************************************************************************************************

Nombre de la función: ft_lstadd_back
Prototipo: void ft_lstadd_back(t_list **lst, t_list *new)
Archivos a entregar: -
Parámetros:
    -lst: El puntero al primer nodo de una lista.
    -new: El puntero a un nodo que añadir a la lista.
Valor devuelto: Nada
Funciones autorizadas: Ninguna
Descripción: Añade el nodo 'new' al final de la lista 'lst'.

*********************************************************************************************************************************

Nombre de la función: ft_lstdelone
Prototipo: void ft_lstdelone(t_list *lst, void (*del)(void *))
Archivos a entregar: -
Parámetros:
    -lst: El nodo a liberar.
    -del: Un puntero a la función utilizada para liberar el contenido del nodo.
Valor devuelto: Nada
Funciones autorizadas: free
Descripción: Toma como parámetro un nodo 'lst' y libera la memoria del contenido utilizando la función 'del' dada como parámetro,
            además de liberar el nodo. La memoria de 'next' no debe liberarse.

*********************************************************************************************************************************

Nombre de la función: ft_lstclear
Prototipo: void ft_lstclear(t_list **lst, void (*del)(void *))
Archivos a entregar: -
Parámetros:
    -lst: La dirección de un puntero a un nodo.
    -del: Un puntero a función utilizado para eliminar el contenido de un nodo.
Valor devuelto: Nada
Funciones autorizadas: free
Descripción: Elimina y libera el nodo 'lst' dado y todos los consecutivos de ese nodo, utilizando la función 'del y free(3).
            Al final, el puntero a la lista debe ser NULL.

*********************************************************************************************************************************

Nombre de la función: ft_lstiter
Prototipo: void ft_lstiter(t_list *lst, void (*f)(void *))
Archivos a entregar: -
Parámetros:
    -lst: Un puntero al primer nodo.
    -f: Un puntero a la función que utilizará cada nodo.
Valor devuelto: Nada
Funciones autorizadas: Ninguna
Descripción: Itera la lista 'lst' y aplica la función 'f' en el contenido de cada nodo.

*********************************************************************************************************************************

Nombre de la función: ft_lstmap
Prototipo: t_list *ft_lstmap(t_list *lst, void (*f)(void *), void (*del)(void *))
Archivos a entregar: -
Parámetros:
    -lst: Un puntero a un nodo.
    -f: La dirección de un puntero a una función usada en la iteración de cada elemento de la lista.
    -del: Un puntero a función utilizado para eliminar el contenido de un nodo, si es necesario.
Valor devuelto:
    -La nueva lista.
    -NULL si falla la reserva memoria.
Funciones autorizadas: malloc, free
Descripción: Itera la lista 'lst' y aplica la función 'f' al contenido de cada nodo. Crea una lista resultante de la aplicación
            correcta y sucesiva de la función 'f' sobre cada nodo. La función 'del' se utiliza para eliminar el contenido de un
            nodo, si hace falta.

---------------------------------------------------------------------------------------------------------------------------------