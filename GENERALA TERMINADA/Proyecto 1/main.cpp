
#include<iostream>
#include<cstdlib>
#include<cstdio>
#include <stdio.h>
#include<ctime>
#include <algorithm>
#include <conio.h>
#include <rlutil.h>
#include <Windows.h>
#include <numeric>
#include <string.h>
using namespace std;
#include "Multiplayer.h"
#include "Single Player.h"
#include "Funciones.h"


///FALTA: ANULAR JUGADA-
///VER FULL HOUSE, POKER, GENERALA EN MULTIPLAYER (PLAYER 2)

int main(){
	SetConsoleTitleA("GENERALA");
	rlutil::setBackgroundColor(GREEN);
    int opc, cantJugadores;
    int score=0;
    char mejor_jugador[30], jugador[30];
    int mejor_puntaje=-1, puntaje=0;
    while(true){
        SetConsoleTitleA("GENERALA");
        system("cls");
        opc=menuPrincipal2();
        system("cls");
        switch(opc){
            case 1: cout<< "\t\t\t\t------------------------------------------"<<endl;
                    cout<< "\t\t\t\tSELECCIONE CANTIDAD DE JUGADORES (1 o 2): "<<endl;
                    cout<< "\t\t\t\t";
                    cin>>cantJugadores;
                    cout<< "\t\t\t\t------------------------------------------"<<endl;
                        if(cantJugadores==2)
                        {
                        multiPlayer(jugador, &puntaje);
                        }
                        else if(cantJugadores==1)
                        {
                        singlePlayer(jugador, &puntaje);
                        }
                        else
                        {
                            cout<<"Seleccione una opcion valida."<<endl;
                        }
                    break;
            case 2: SetConsoleTitleA("Salon de la fama");
                    int column, row;
                    for (column = 0; column < 80; ++column)
                    {
                        cout << "*";
                    }
                    cout << "\n";
                    for (row = 0; row < 4; ++row)
                    {
                        cout << "*";
                        for (column = 0; column < 78; ++column)
                        {
                            cout << " ";
                        }
                        cout << "*\n";

                    }
                    for (int column = 0; column < 80; ++column)
                    {
                        cout << "*";
                    }

                    cout << "\n";
                    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                    COORD c;
                    c.X = 35;
                    c.Y = 2;

                    SetConsoleCursorPosition(
                    GetStdHandle(STD_OUTPUT_HANDLE), c);

                    printf("JUGADOR CON PUNTAJE MAXIMO:");
                    cout<<mejor_jugador;
                    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                    COORD d;
                    d.X = 35;
                    d.Y = 3;

                    SetConsoleCursorPosition(
                    GetStdHandle(STD_OUTPUT_HANDLE), d);

                    printf("PUNTAJE:");
                    cout<<mejor_puntaje;
                    waitkey;
                    break;
            case 0: cout<<"PROGRAMA FINALIZADO"<<endl;
                    return 0;
                    break;
            default:cout<<"OPCION INCORRECTA"<<endl;
        }
        if(puntaje>mejor_puntaje)
        {
            mejor_puntaje=puntaje;
            strcpy(mejor_jugador, jugador);
        }
        system("pause");
    }
    return 0;
}


/*
                    cout<<"Mejor jugador: "<<mejor_jugador<<endl;
                    cout<<"Puntaje :"<<mejor_puntaje<<endl;
*/
