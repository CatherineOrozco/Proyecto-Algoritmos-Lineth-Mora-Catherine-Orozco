/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: catherine
 *
 * Created on 2 de junio de 2017, 09:51 AM
 */

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    ListaCircular lista;
    lista.insertIntoHead('a');
    lista.insertIntoHead('b');
    lista.insertIntoHead('c');
    lista.printList();
    

    return 0;
}

