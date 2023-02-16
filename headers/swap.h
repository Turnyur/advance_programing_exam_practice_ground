

template<typename T>
void swapByValue(T a, T b){
    T temp =a;
    a=b;
    b=temp;
}
template<typename T>
void swapByReference(T& a, T& b){
    T temp =a;
    a=b;
    b=temp;
}