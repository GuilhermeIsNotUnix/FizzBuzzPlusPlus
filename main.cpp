#include <iostream>

#ifdef linux
    #include <unistd.h>
#elif defined(_WIN32) || defined(_WIN64)
    #include <windows.h>
#endif

int main(void)
{
    int i = 1;

    while(true)
    {
        if(i % 3 != 0 && i % 5 != 0)
            std::cout << i << std::endl;
        else
            if(i % 3 == 0 && i % 5 == 0)
                std::cout << "FizzBuzz" << std::endl;
            else
            {
                if(i % 3 == 0)
                    std::cout << "Fizz" << std::endl;
                if(i % 5 == 0)
                    std::cout << "Buzz" << std::endl;
            }

        #ifdef linux
            sleep(1);
        #elif defined(_WIN32) || defined(_WIN64)
            Sleep(1000);
        #endif

        i++;
    }
    return 0;
}
