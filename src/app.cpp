#include <iostream>
#include <ctime>


/**
 * @brief print_time
 * @details Функция печатает текущую дату и время
 */
void print_time()	
{
	time_t 	rawtime = time(NULL);		
	tm* 	time 	= localtime(&rawtime);

	std::cout << asctime(time) <<std::endl;
}

int main(int argc, char **argv)
{
    print_time();	
    return 0;
}