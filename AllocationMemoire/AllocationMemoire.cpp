// AllocationMemoire.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

//void StackOverFlow(int a)
//{
//    a++;
//    std::cout << a;
//    StackOverFlow(a);
//}





int main()
{

// stack
    //int a = 2; 
    //int* b = new int; // heap
    //delete b;

 /*   StackOverFlow(a);*/


// heap
    int** ptr;
    {
        int* ptr1 = new int(4);
        ptr = &ptr1;
        delete ptr1;
    }
    std::cout << **ptr << std::endl;




    return 0;
}

/*
Pile (stack) :
- contigue en mémoire
- plus rapide
- mémoire limité
- détruite sortit de scope

tas (heap) :
- éparpillé
- moins rapide
- plus de mémoire
- ne se détruit pas tant que l'on ne delete pas

*/