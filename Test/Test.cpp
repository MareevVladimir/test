// Test.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "versioninfo.h"

int main()
{
    std::cout << "Version: " << build_info::version::product_version << std::endl 
        << "Build: " << build_info::version::build;
}