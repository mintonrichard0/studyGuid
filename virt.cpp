#include <iostream>
using namespace std;

        class baseVirt {
        public:

        virtual void pRint(){
            cout << "print virtual Function" << endl;
        }

        void show(){
            cout << "base class" << endl;

        }

};

    class virt1: public baseVirt{
        public:
            void pRint(){
           cout << "print derived class " << endl;
         }

            void show(){

            cout << "show derived class "<< endl;
           }

    };
int main()
{
    baseVirt *pbase;
    virt1 v;
    pbase = &v;

    pbase->pRint();
    pbase->show();


    return 0;
}

