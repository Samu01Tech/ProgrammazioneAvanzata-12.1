#ifndef __ARRAYTEMPLATE_H__
#define __ARRAYTEMPLATE_H__

template <class T> class MyArrayTemp{
    int dim;
    T* m;
public:
    MyArrayTemp(){
        dim = 10;
        m = new T[dim];
    }
    
    MyArrayTemp(int _dim){
        dim = _dim;
        m = new T[_dim];
    }
    ~MyArrayTemp(){
        delete [] m;
    }
    
    T& operator [] (const int pos) const{
        if (pos < 0) return m[0];
        if (pos > dim-1) return m[dim-1];
        return m[pos];
    }

};

// per qualche compilatore template <class T> MyArrayTemp<T>::MyArrayTemp(int _dim){};

#endif