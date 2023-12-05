/*Exercício 4.2. Defina as macros descritas a seguir: 
a) eh_minuscula(c): informa se o caracter c é uma letra minúscula. 
b) eh_maiuscula(c): informa se o caracter c é uma letra maiúscula. 
c) minuscula(c): converte a letra c para minúscula. 
d) maiuscula(c): converte a letra c para maiúscula.*/

#include <ctype.h>
#define eh_minuscula(c) (islower(c) != 0)
#define eh_maiuscula(c) (isupper(c) != 0)
#define minuscula(c) ((eh_maiuscula(c)) ? (c + 32) : (c))
#define maiuscula(c) ((eh_minuscula(c)) ? (c - 32) : (c))