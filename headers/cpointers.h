#include <iostream>
#include <ctime>
#include <cstdlib> 



template<typename T>
T* show_var_address(T*  m_var){
    return m_var;
}

int global = 100;

int* setGlobal()
{
    return &global;    
}

/* int* setGlobal(int c)
{
    return &c;    
}*/

void matrix(){
    int MAT[5][5][3];

    srand((unsigned)time(0)); 
    std::cout<<"Random int: "<<rand()<<std::endl;
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            for (size_t k = 0; k < 3; k++)
            {
                MAT[i][j][k]= (rand()%6)+1;
            }
            
        }
        
    }
    

    //Print Tensor values
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            for (size_t k = 0; k < 3; k++)
            {
                std::cout<<MAT[i][j][k]<<" ";
            }
            std::cout<<"\n-";
        }
         std::cout<<"\nThree\n";
    }

   std::cout<<"Value of Matrix at:  MAT[0]: "<<MAT[0][0]<<std::endl;
    
}