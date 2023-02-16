#include <iostream>



void const_vs_constexpr(){
    int sc;
    std::cout<<"Enter value of int: ";
    std::cin>>sc;
   // constexpr int score_1=100;
    const int score_2=sc;

   // std::cout<<"The value of constexpr::score_1 is "<<score_1<<std::endl;
    std::cout<<"The value of const::score_2 is "<<score_2<<std::endl;
}