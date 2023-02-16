#include <iostream>
#include <limits>
#include <climits>
#include "./headers/swap.h"
#include "./headers/tensor.h"
#include "./headers/inheritance.h"
#include "./headers/playground.h"
#include "./headers/complex_number.h"
#include "./headers/cpointers.h"





int main(int argC, char* arg[]){
    typedef unsigned int turnyur;
   /* char a='a', b='b';
    std::cout<<"Values: BEFORE computation: a:"<<a<<" b:"<<b<<std::endl;
    swapByValue(a,b);
    std::cout<<"Values: AFTER computation: a:"<<a<<" b:"<<b<<std::endl;
   
    std::cout<<"Reference: BEFORE computation: a:"<<a<<" b:"<<b<<std::endl;
    swapByReference(a,b);
    std::cout<<"Reference: AFTER computation: a:"<<a<<" b:"<<b<<std::endl;
   */

    //Templated class
    //Tensor<int, 2, 2> tensor;
    //tensor.fill(0);
    //tensor.printAll();

    //Templated Class
    //Tensor<std::string, 2, 2> stencil;
    //stencil.fill("Chisom");
    //stencil.printAll();
    //tensor.set(3, 3,0);
    //std::cout<<tensor;
    //std::cout<<stencil;
    //std::cout<<Tensor<int, 8, 5>::printStaticMember();

    //Rectangle rec(7,2);
    //std::cout<<rec.getArea()<<std::endl;
    //rec.describe();

    //Rectangle stadium(rec);
    //std::cout<<stadium.getArea()<<std::endl;
    //stadium.describe();
    //std::cout<<"int limit: "<<std::numeric_limits<int>::max()<<std::endl;
    //std::cout<<"INT_MAX limit: "<<INT_MAX<<std::endl;
  

    /*char hello_str[] = "\n\n\nHello world Test!";
    for(turnyur i=0; i<strlen(hello_str); i++){
        std::cout<<hello_str[i];
    }*/
    
    //const_vs_constexpr();

    //execute_complex_num();

    Benz* k= new Benz(4, "red", 900);
    //car.forward();
    //int m=78;
    //int &fau =m;
    //int score = 56;
    //int* p_score_1 =&score;
    //int* p_score_2 =&score+89;
    //std::cout<<"1. Returned Address: "<<(show_var_address(k))<<std::endl;
    //std::cout<<"init value of score: "<<score<<std::endl;
    //std::cout<<"3. Returned Address: "<<(show_var_address(p_score_1))<<std::endl;
    //std::cout<<"4. Returned Address: "<<(show_var_address(p_score_2))<<std::endl;

    //*p_score_1=67;
    //std::cout<<"After value of score: "<<score<<std::endl;
    //std::cout<<"Address variable: : "<<fau<<std::endl;
    //std::cout<<"1. Set Global value: "<<*setGlobal();
    //*setGlobal()=450;
    //setGlobal(score);
    //std::cout<<"\n2. Set Global value: "<<*setGlobal();
    //std::cout<<"\n3. Set Global value: "<<score;

    //matrix();

    //int score[5] = {3,4,5,6,60};
    //int position=8;
    //std::cout<<"Value at position ["<<position+1<<"] is "<<score[position];

    //Tensor<int, 3, 12, 12> tensor;
    //int valU= 78;
    //tensor.randfill();
    //tensor.showData();

    makeImage("insta.png");

    return 0;
}

