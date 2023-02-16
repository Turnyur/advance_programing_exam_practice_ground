#include <iostream>
#include <array>
#include <vector>
#define cimg_display 0
#define cimg_use_jpeg
#include "CImg.h"

using namespace cimg_library;

template <typename T, size_t channel, size_t row, size_t col>
class Tensor{
    //std::array<std::array<int, 3>, 3> arr = {{{5, 8, 2}, {8, 3, 1}, {5, 3, 9}}};
    CImg<T> image_t;
    //CImg<T> image_t1;
    std::array<std::array<std::array<T, channel>, row>, col> data;
    std::vector<std::vector<std::vector<T > > > image_tensor;
    public: 
        void randfill(){
            for (size_t i = 0; i < channel; i++)
            {
                for (size_t j = 0; j < row; j++)
                {
                    for (size_t k = 0; k < col; k++)
                    {
                        data[i][j][k]= (rand()%6)+1;
                    }
                    
                }
            }
        }
        void showData(){
            for (size_t i = 0; i < channel; i++)
            {
                for (size_t j = 0; j < row; j++)
                {
                    for (size_t k = 0; k < col; k++)
                    {
                        std::cout<<data[i][j][k]<<"  ";
                    }
                    std::cout<<"\n";
                }
                std::cout<<"\n";
            }
            
        }


        // void loadImage(std::string path){
        //     //temp_image.load(path.c_str());
        //     int im_width = temp_image.width();
        //     int im_height = temp_image.height();
        //     int im_channel =temp_image.spectrum();
        //     CImg<T> temp_image(im_width, im_height, im_channel);
        //      image_t =temp_image;
        // }

        CImg<T> copyToTensor(CImg<T> image){
            size_t d =image.spectrum();
            size_t r =image.spectrum();
            size_t c =image.spectrum();
            for (size_t i = 0; i < d; i++)
            {
                for (size_t j = 0; j < r; j++)
                {
                    for (size_t k = 0; k < c; k++)
                    {
                        image_tensor[i][j][k]= image_t[i][j][k];
                    }
                    
                }
            }
        }

        

};


CImg<> makeImage(std::string path){
            CImg<> temp_image(path.c_str());
            return temp_image;
}
/*template <typename T>
std::ostream &operator<<(std::ostream &out, const T &obj)
{
    out << obj.staticMember; // for example
    return out;
}
*/