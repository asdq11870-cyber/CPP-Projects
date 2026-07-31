#include <iostream>
#include <iomanip>

int main(){
    double rand{2'828'102};
    double pi{3.141'592'653'5};
    std::cout << std::scientific << std::uppercase << pi << std::endl;
    std::cout << std::nouppercase;
    std::cout << std::scientific << pi << std::endl;

    double c{299'792'458};
    double e{1.602e-19};
    std::cout << std::fixed << c << std::endl;
    std::cout << std::fixed << e << std::endl;

    int precision{3};
    int default_precision{6};
    std::cout << "Pi to " <<  precision << " significant figures is " << std::setprecision(precision) << pi << std::endl;
    std::cout << "Pi to " << default_precision << " significant figures is " << std::setprecision(default_precision) << pi << std::endl;
    return 0;
}