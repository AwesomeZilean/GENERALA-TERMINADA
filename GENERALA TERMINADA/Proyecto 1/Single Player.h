#ifndef SINGLE_PLAYER_H_INCLUDED
#define SINGLE_PLAYER_H_INCLUDED
#include "Funciones.h"
#include <string.h>
#define waitkey rlutil::anykey("\n")
#include "rlutil.h"
#include "numeric"

void GAME2 (int v[],int vAux[], char player1[], int* puntaje){
    int rondas, tiradasTotales=0,vPunt[10];
    puntuacionCero(vPunt);
    int puntuacionTotal=0;
    cout<<"\t\t\t\t----------------------------------------"<<endl;
    cout<<"\t\t\t\tSeleccione cantidad de rondas a jugar:"<<endl;
    cout<<"\t\t\t\t";
    cin>>rondas;
    system("cls");
        for(int p=1;p<=rondas;p++)///For para turnos
        {
            int tiradasp1=0, tam=5,select, tam2,opaux, aux=0,vAux[5];
            bool seguir=true;
            vectorAuxEnCero(vAux);
                        while(tiradasp1<3&&seguir==true)///While de tiradas
                        {

                        rlutil::setBackgroundColor(BLACK);
                        cout<<"\t\t\t\t---------------------------------------------"<<endl;
                        cout<<"\t\t\t\t| Turno "<<p<<"|| Jugador: "<<player1<<"|| Puntuacion: "<<puntuacionTotal<<"|"<<endl;
                        cout<<"\t\t\t\t---------------------------------------------"<<endl;
                        rlutil::setBackgroundColor(GREEN);
                            cargarCubilete(v, tam, 6);
                            msg();
                            rlutil::locate(33, 6);
                            mostrarCubileteNormal(v, tam);
                            std::cin.get();
                            waitkey;
                            guardarDados();
                            rlutil::locate(75, 11);
                            cin>>select;
                                if(select==1)
                                {
                                    rlutil::locate(42, 13);
                                    cout<<"Cuantos dados desea guardar?"<<endl;
                                    rlutil::locate(42, 14);
                                    cin>>tam2;
                                    rlutil::locate(42, 15);
                                    cout<<"Que dados desea guardar?"<<endl;
                                        for(int q=1;q<=tam2;q++)
                                        {
                                            int eje=15;
                                            rlutil::locate(42, eje+q);
                                            cout<<"DADO:";
                                            rlutil::locate(48, eje+q);
                                            cin>>opaux;
                                            vAux[aux]=v[opaux-1];
                                            aux++;
                                        }
                                    tam=abs(tam2-tam);
                                }
                    mostrarCubileteAux(vAux, aux);
                    continuar(tiradasp1);
                    tiradasp1++;
                    tiradasTotales++;
                    if (tiradasp1<3)
                    {
                    rlutil::locate(42, 27);
                    cin>>seguir;
                    rlutil::locate(42, 23);
                    }
                    system("cls");
                    }

                ///FIN DEL TURNO
                system("cls");
                verify(vAux, vPunt);
                anotacion(vAux, vPunt);
                puntuacionTotal=puntuacion(vPunt);
                system("cls");
                proxTurnoSP(player1, p, tiradasTotales, puntuacionTotal);
                waitkey;
                system("cls");
            }
            int puntuacionFinal=puntuacion(vPunt);
            *puntaje=puntuacionFinal;
            endGame(player1, tiradasTotales, puntuacionFinal);
            waitkey;
}

int singlePlayer(char jugador[], int* puntaje){
    {
    SetConsoleTitleA("MODO 1 JUGADOR");
    }
    char player1[15];
    cout<<"\t\t\t\tNOMBRE JUGADOR 1:"<<endl;
    cout<<"\t\t\t\t";
    cin>>player1;
    int v[5];
    int vAux[5];
    GAME2(v, vAux, player1, puntaje);
    strcpy(jugador, player1);
    return 0;
}

void highScore(int score){
    int vPunt[10];
    int aux=puntuacion(vPunt);
    int maxScore;
    if(aux>score)
    {
        maxScore=aux;
    }
    cout<<"PUNTAJE MAS ALTO: "<<maxScore<<endl;
    }


#endif // SINGLE_PLAYER_H_INCLUDED
