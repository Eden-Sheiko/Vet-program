//
// Created by Eden on 01/11/2022.
//
#include "Tests.hpp"
#include "Cat.hpp"
#include "Cow.hpp"

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

}