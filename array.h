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
            delete [] m;
            //oppure nullptr
        }
        void init(){
            for(int i = 0; i < dim; i++){
                m[i] = i;
            }
        }
        int& operator [] (const int pos) const {
            if (pos < 0) return m[0];
            if (pos > dim-1) return m[dim-1];
            return m[pos];
        }
};

#endif