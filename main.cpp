#include <iostream>
#include <unistd.h>

int main(int argc, char const *argv[])
{
	int i = 0;

	//Loop infinito
	while(1)
	{
		i++; //i = i + 1;
		sleep(1); //Dorme por 1 segundo

		//Se não for multiplo de 3 e ao mesmo tempo não for multiplo de 5 imprime o valor de i
		if(i % 3 != 0 && i % 5 != 0)
		{
			std::cout << i << std::endl;
		}

		else
		{
			//Se for multiplo de 3 e ao mesmo tempo for multiplo de 5 imprime FizzBuzz
			if(i % 3 == 0 && i % 5 == 0)
			{
				std::cout << "FizzBuzz" << std::endl;
			}

			else
			{
				//Se for multiplo de 3 imprime Fizz
				if(i % 3 == 0)
				{
					std::cout << "Fizz" << std::endl;
				}

				//Se for multiplo de 5 imprime Buzz
				if(i % 5 == 0)
				{
					std::cout << "Buzz" << std::endl;
				}
			}	
		}
	}

	return 0;
}