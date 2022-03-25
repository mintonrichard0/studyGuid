#include <iostream>
using namespace std;

    class test{
        public:
            int x=2;
            void  testF(int xx){
            x=xx;

            cout << x << endl;
            cout << "test base"<< endl;

            }

    };


    class test2:  public test{
            public:
              void  testF2(){

                    cout << "test 2" << endl;
                    cout << x << endl;

                }
    };

    class test3: public test {
        public:
            void testF3(int x){
            cout << x << endl; //inherited base class

           }




    };


int main()
{

    test t1;
    test2 t2;
    test3 t3;

    t1.testF(3);
    t2.testF2();
    t3.testF3(6);
}
