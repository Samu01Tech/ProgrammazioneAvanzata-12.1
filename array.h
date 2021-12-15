#ifndef __ARRAY_H__
#define __ARRAY_H__

class MyArray{
    private:
        int dim;
        int* m;
    public:
        MyArray(){
            dim = 10;
            m = new int[dim];
        }
        MyArray(int _dim){
            dim = _dim;
            m = new int[dim];
        }
        ~MyArray(){
            if(m != null) delete [] m;
            //oppure nullptr
        }
        void init(){
            
        }
};

#endif