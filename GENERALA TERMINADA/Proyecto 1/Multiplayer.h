#ifndef MULTIPLAYER_H_INCLUDED
#define MULTIPLAYER_H_INCLUDED
#include "Funciones.h"
#include <string.h>
#define waitkey rlutil::anykey("\n")

void GAME1 (int v[], int vAux[], int vAux2[], char player1[], char player2[], char ganador[], int* mejor_puntaje){
    int rondas, tiradasTotales1=0, tiradasTotales2=0, vPunt[10], vPunt2[10], winner;
    bool generalaServida=false;
    int puntuacionTotal=0, puntuacionTotal2=0;
    puntuacionCero(vPunt);
    puntuacionCero2(vPunt2);
    cout<<"\t\t\t\t----------------------------------------"<<endl;
    cout<<"\t\t\t\tSeleccione cantidad de rondas a jugar:"<<endl;
    cout<<"\t\t\t\t";
    cin>>rondas;
    system("cls");
    int p=1;
//////////////////////////////////////////////For para turnos//////////////////////////////////////////////////////////////////////
        while(p<=rondas && !generalaServida)
        {
            int tiradasp1=0, tam=5,select, tam2,opaux, aux=0,vAux[5]; ///Variables del jugador 1
            bool seguir1=true;
            int tiradasp2=0, tamp2=5, tam2p2, opaux2, aux2=0,vAux2[5];///Variables del jugador 2
            bool seguir2=true;
            vectorAuxEnCero(vAux);
            vectorAux2EnCero(vAux2);
/////////////////////////////////////////////WHILE TIRADAS P1/////////////////////////////////////////////////////////////////////
                        while(tiradasp1<3&&seguir1==true)
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
                    tiradasTotales1++;
                    if (tiradasp1<3)
                    {
                    rlutil::locate(42, 27);
                    cin>>seguir1;
                    rlutil::locate(42, 23);
                    }
                    system("cls");
                    }

///////////////////////////////////////////FIN DEL TURNO DEL JUGADOR 1///////////////////////////////////////////////////////////////////////
                system("cls");
                verify(vAux, vPunt);
                anotacion(vAux, vPunt);         ///VERIFICACION Y ANOTACIONES
                puntuacionTotal=puntuacion(vPunt);
                system("cls");
                proxTurno(player1, player2, p, tiradasTotales1, puntuacionTotal);
                waitkey;
                system("cls");

//////////////////////////////////////////////TURNO DEL JUGADOR 2//////////////////////////////////////////////////////////////////
        while(tiradasp2<3&&seguir2==true){
            rlutil::setBackgroundColor(BLACK);
                        cout<<"\t\t\t\t---------------------------------------------"<<endl;
                        cout<<"\t\t\t\t| Turno "<<p<<"|| Jugador: "<<player2<<"|| Puntuacion: "<<puntuacionTotal2<<"|"<<endl;
                        cout<<"\t\t\t\t---------------------------------------------"<<endl;
                        rlutil::setBackgroundColor(GREEN);
                            cargarCubilete(v, tamp2, 6);
                            msg();
                            rlutil::locate(33, 6);
                            mostrarCubileteNormal(v, tamp2);
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
                                    cin>>tam2p2;
                                    rlutil::locate(42, 15);
                                    cout<<"Que dados desea guardar?"<<endl;
                                        for(int q=1;q<=tam2p2;q++)
                                        {
                                            int eje=15;
                                            rlutil::locate(42, eje+q);
                                            cout<<"DADO:";
                                            rlutil::locate(48, eje+q);
                                            cin>>opaux2;
                                            vAux2[aux2]=v[opaux2-1];
                                            aux2++;
                                        }
                                    tamp2=abs(tam2p2-tamp2);
                                }
                    mostrarCubileteAux2(vAux2, aux2);
                    continuar(tiradasp2);
                    tiradasp2++;
                    tiradasTotales2++;
                    if (tiradasp2<3)
                    {
                    rlutil::locate(42, 27);
                    cin>>seguir2;
                    rlutil::locate(42, 23);
                    }
                    system("cls");
            }
///////////////////////////////////////////FIN DEL TURNO DEL JUGADOR 2///////////////////////////////////////////////////////////////////////
                    system("cls");
                    verify2(vAux2, vPunt2);
                    anotacion2(vAux2, vPunt2);         ///VERIFICACION Y ANOTACIONES
                    puntuacionTotal2=puntuacion2(vPunt2);
                    system("cls");
                    proxTurno2(player1, player2, p, tiradasTotales2, puntuacionTotal2);
                    waitkey;
                    system("cls");
                    if(tiradasp1==1 && generala(vAux) && (tiradasp2!=1 || !generala2(vAux2)) || tiradasp2==1 && generala2(vAux2) && (tiradasp1!=1 || !generala(vAux)))
                    {
                      generalaServida=true;
                    }
                    p++;

        }

            system("cls");
            int puntuacionFinal=puntuacion(vPunt);
            int puntuacionFinal2=puntuacion2(vPunt2);
            if(puntuacionFinal>puntuacionFinal2 && !generalaServida  || generalaServida && generala(vAux))
            {
                *mejor_puntaje=puntuacionFinal;
                strcpy(ganador, player1);
            }
            else
            {
                *mejor_puntaje=puntuacionFinal2;
                strcpy(ganador, player2);
            }
            endgameMultiplayer(player1, player2, tiradasTotales1, tiradasTotales2, puntuacionFinal, puntuacionFinal2);
            waitkey;
    }

int multiPlayer(char ganador[], int* mejor_puntaje){
            {
	SetConsoleTitleA("Modo multiplayer");
        }
    char player1[15], player2[15];
    cout<<"\t\t\t\tNOMBRE JUGADOR 1:"<<endl;
    cout<<"\t\t\t\t";
    cin>>player1;
    cout<< "\t\t\t\t------------------------------------------"<<endl;
    cout<<"\t\t\t\tNOMBRE JUGADOR 2:"<<endl;
    cout<<"\t\t\t\t";
    cin>>player2;
    int v[5];
    int vAux[5];
    int vAux2[5];
    GAME1(v, vAux, vAux2, player1, player2, ganador, mejor_puntaje);
    return 0;
}


#endif // MULTIPLAYER_H_INCLUDED
