#include <iostream>

class Shallow
{
    private:
        int* data;
        int size;
    public:
        //constructor
        Shallow(int sz)
        {
            size = sz;
            data = new int[size];
            for (int i = 0; i < size; i++)
                data[i] = i;
        }
        //Default copy constructor(shallow)
        Shallow(const Shallow& other) : data(other.data), size(other.size)
        {

        }

        void setter(int idx, int val)
        {
            data[idx] = val;
        }
        void print() const
        {
            for (int i = 0; i < size; i++)
                std::cout << data[i] << std::endl;
            std::cout << std::endl;
        }

        ~Shallow()
        {
            delete [] data; //double deletion problem
        }
};


class Deep
{
    private:
        int* data;
        int size;
    public:
        //constructor
        Deep(int sz)
        {
            size = sz;
            data = new int[size];
            for(int i = 0; i < size; i++)
                data[i] = i;
        }

        //Copy constructor
        Deep(Deep const& other)
        {
            size = other.size;
            data = new int[size]; //ALLOCATE NEW MEMRORY
            for(int i = 0; i < size; i++)
                data[i] = other.data[i];//copy values
        }
        //Assignement op
        Deep& operator=(Deep const& other)
        {
            if(this != &other)
            {
                delete [] data; //free existing memory
                
                size = other.size;
                data = new int[size];
                for(int i = 0; i < size; i++)
                    data[i] = other.data[i];
            }
            return *this;
        }

        void print()
        {
            for (int i = 0; i < size; i++)
                std::cout << data[i] << std::endl;
            std::cout << "-----------------------------" << std::endl;
        }

        void setter(int idx, int val)
        {
            data[idx] = val;
        }

        ~Deep()
        {
            delete [] data; //safe - each object has its own memory
        }
};


int main(void)
{
    // Shallow obj1(5);
    // Shallow obj2 = obj1;

    // obj1.setter(1, 200);
    
    // std::cout << "Obj1's Data: ";
    // obj1.print();

    
    // std::cout << "Obj2's Data: ";
    // obj2.print();

    Deep obj3(10);
    Deep obj5(5);
    Deep obj4 = obj3;
    obj5 = obj3;

    obj3.print();
    obj3.setter(0, 1000);
    obj3.print();

    obj4.print();
    obj5.print();

    return 0;
}