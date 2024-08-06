#include <iostream>
#include "animal.h"
#include "feline.h"
#include "dog.h"
#include "cat.h"
#include "bird.h"
#include "pigeon.h"
#include "crow.h"
using namespace std;

int main(){

    Dog dog1("dark gray","dog1");
    Cat cat1("black stripes","cat1");
    Pigeon pigeon1("white","pigeon1");
    Crow crow1("black","crow1");

    cout << "Animal polymorphism: **************" << endl;
    //animal polymorhphism

    Animal* an[] {&dog1, &cat1, &pigeon1, &crow1};  //array of animals
    
    for(Animal* i : an){
        i->breathe();
    }

    cout << "Feline polymorphism: **************" << endl;
    //feline polymorhphism

    Feline* fel[] {&dog1, &cat1};

    for(Feline* j: fel){
        j->breathe();
        j->run();
    }

    cout << "Bird polymorphism: **************" << endl;

    //bird polymorhphism

    Bird* br[] {&crow1, &pigeon1};

    for(Bird* k: br){
        k->fly();
    }








return 0;

}