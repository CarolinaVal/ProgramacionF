
#include <iostream>
#include <unistd.h>
int main()
{
std::cout << "Hola! Tratare de adivinar un numero. Piensa en un numero entre 1 y 10\n";
sleep(5);
std::cout << "Ahora multiplicalo por 9.\n";
sleep(5);
std::cout << "Si el numero tiene 2 digitos, sumalos entre si: Ej. 36 -> 3+6=9. Si tu numero tiene un solo digito, sumale 0.\n";
sleep(5);
std::cout << "Al numero resultante sumale 4.\n";
sleep(10);
std::cout << "Muy bien. El resultado es 13 :3\n";
return(0);
}
