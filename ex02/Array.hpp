#include <iostream>
#include <stdexcept>

template<typename T>
class Array{
    public:

        // Constructors
        Array() : pointer(NULL), _size(0)
        {}

        Array(unsigned int size)
        {
            this->pointer = new T[size]();
            this->_size = size;
        }

        Array(const Array &other) : pointer(NULL), _size(0)
        {
            this->pointer = new T[other._size]();
            this->_size = other._size;

            for(unsigned int i = 0; i < this->_size; ++i)
            {
                this->pointer[i] = other.pointer[i];
            }

        }

        Array &operator=(const Array &other)
        {
            if(this != &other)
            {
                delete []this->pointer;
                this->pointer = new T[other._size]();
                this->_size = other._size;

                for(unsigned int i = 0; i < this->_size; ++i)
                {
                    this->pointer[i] = other.pointer[i];
                }
            }

            return *this;
        }

        // []

        T &operator[](unsigned int index)
        {
            if(index >= this->_size)
                throw std::out_of_range("Index out of bounds");

            return this->pointer[index];
        }

        const T &operator[](unsigned int index) const
        {
            if(index >= this->_size)
                throw std::out_of_range("Index out of bounds");

            return this->pointer[index];
        }

        // Getter
        unsigned int size() const
        {
            return _size;
        }

        ~Array()
        {
            delete[] pointer;
        }

    private:
        T *pointer;
        unsigned int _size;
};