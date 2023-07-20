#include <iostream>


int main() {
    /*
    int random_num=std::rand();

    std::cout<<"random nomber:"<<random_num<<std::endl;

    random_num=std::rand();

    std::cout<<"random nomber:"<<random_num<<std::endl;    
    */
   int random_num;
    for(size_t i{0};i<20 ;++i){
        random_num=std::rand();

        std::cout<<"random nomber"<< i <<": "<<random_num<<std::endl; 
    }

    return 0;
}