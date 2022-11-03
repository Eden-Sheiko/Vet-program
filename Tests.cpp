
#include "Tests.hpp"
#include "Cat.hpp"
#include "Cow.hpp"
#include "Dog.hpp"

void test(int expected, int actual,const std::string &testName){
    if(expected==actual){
        std::cout << testName << " PASSED" << std::endl;
    }
    else{
        std::cout << testName << " FAILED!!!" << std::endl;
        std::cout << " expected " << expected << " but was " << actual << std::endl;
    }
}

void tests(){
    using namespace std;
    cout << "program start" << endl;
    Vet& vet = Vet::get_instance();
    //healthy dog
    vet.add_animal(new Dog("dog1", 38.5, 20, 80, true));
    //not healthy dog (temp too high)
    vet.add_animal(new Dog("dog2", 40.0, 20, 80, true));
    //not healthy dog (heart rate too slow for a small breed)
    vet.add_animal(new Dog("dog3", 38.5, 20, 80, false));
    //healthy cat
    vet.add_animal(new Cat("cat1", 38.7, 30, 130));
    //not healthy cat (breath is too high)
    vet.add_animal(new Cat("cat2", 38.7, 42, 130));
//healthy cow
    vet.add_animal(new Cow("cow1", 39.0, 37, 70, 32));
//not healthy cow (milk production too low)
    vet.add_animal(new Cow("cow2", 39.0, 37, 70, 20));
    vet.show_sick(); //should print: dog2 dog3 cat2 cow2
    vet.show_sick_dogs(); //should print: dog2 dog3
}

void testVetClass(){
    Dog d1("test_dog",30,60,10,1);
    Cat c1("test_cat",30,20,10);
    Cow cow1("test_cow",5,5,5,5);
    std::cout << "----Dog class (ctor) testing----"<<std::endl;
    test(30,d1.m_temp,"testing dog temperature");
    test(60,d1.m_breath,"testing dog breath rate");
    test(10,d1.m_heart,"testing dog heart rate");
    test(true,d1.m_is_large,"testing dog is_large method");
    std::cout << "----Cat class (ctor) testing----"<<std::endl;
    test(30,c1.m_temp,"testing cat temperature");
    test(20,c1.m_breath,"testing cat breath rate");
    test(10,c1.m_heart,"testing cat heart rate");
    std::cout << "----Cow class (ctor) testing----"<<std::endl;
    test(5,cow1.m_temp,"testing cow temperature");
    test(5,cow1.m_breath,"testing cow breath rate");
    test(5,cow1.m_heart,"testing cow heart rate");
    test(5,cow1.m_milk,"testing cow milk rate");
}