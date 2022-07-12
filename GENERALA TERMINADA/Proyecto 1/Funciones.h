#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <string.h>
#define waitkey rlutil::anykey("\n")
#include "rlutil.h"
using namespace std;
using namespace rlutil;
////////////////////////////////////////////////Menu Principal alternativo//////////////////////////////////
int menuPrincipal2(){
    system("cls");
    int choose;
            //POSICION DEL MENU

            rlutil::locate(46,9);
            cout<<"    MENU   PRINCIPAL   "<<endl;
            rlutil::locate(46,10);
            cout<<"_______________________"<<endl;
            cout<<endl;
            rlutil::locate(46,11);
            cout<<"1. JUEGO NUEVO        "<<endl;
            rlutil::locate(46,12);
            cout<<"2. PUNTAJES           "<<endl;
            rlutil::locate(46,13);
            cout<<"\t\t\t\t\t"<<endl;
            rlutil::locate(46,14);
            cout<<"-----------------------"<<endl;
            rlutil::locate(46,15);
            cout<<"0. SALIR              "<<endl;
            rlutil::locate(46,16);
            cout<<"_______________________"<<endl;

            //BORDE DERECHO

            rlutil::locate(69,9);
            cout<<"|";
            rlutil::locate(69,10);
            cout<<"|";
            rlutil::locate(69,11);
            cout<<"|";
            rlutil::locate(69,12);
            cout<<"|";
            rlutil::locate(69,13);
            cout<<"|";
            rlutil::locate(69,14);
            cout<<"|";
            rlutil::locate(69,15);
            cout<<"|";
            rlutil::locate(69,16);
            cout<<"|";
            rlutil::locate(69,17);
            cout<<"|";
            rlutil::locate(69,18);
            cout<<"|";



            //BORDE IZQUIERDO

            rlutil::locate(45,9);
            cout<<"|";
            rlutil::locate(45,10);
            cout<<"|";
            rlutil::locate(45,11);
            cout<<"|";
            rlutil::locate(45,12);
            cout<<"|";
            rlutil::locate(45,13);
            cout<<"|";
            rlutil::locate(45,14);
            cout<<"|";
            rlutil::locate(45,15);
            cout<<"|";
            rlutil::locate(45,16);
            cout<<"|";
            rlutil::locate(45,17);
            cout<<"|";
            rlutil::locate(45,18);
            cout<<"|";


            //TECHITO(46 AL 48)

             rlutil::locate(46,8);
             cout<<"_______________________"<<endl;
             rlutil::locate(47,8);
             cout<<"_______________________"<<endl;
             rlutil::locate(48,8);

             //PISITO

             rlutil::locate(46,18);
             cout<<"_______________________"<<endl;

             //GENERALA

             rlutil::setColor(rlutil::BLACK);
             rlutil::locate(50,6);
             cout<<"G E N E R A L A";
             rlutil::setColor(rlutil::WHITE);
             rlutil::locate(46,17);
             cout<<"SELECCION: ";
             cin>>choose;
             return choose;
            }


///////////////////////////////////////////////Puntuacion cero/////////////////////////////////////////////////////////

void puntuacionCero(int vPunt[]){
    for (int i=0;i<10;i++)
    {
        vPunt[i]=-1;
    }
}
void puntuacionCero2(int vPunt2[]){
    for (int i=0;i<10;i++)
    {
        vPunt2[i]=-1;
    }
}
void vectorAuxEnCero(int vAux[]){
    for (int i=0;i<5;i++)
    {
        vAux[i]=0;
    }
}

void vectorAux2EnCero(int vAux2[]){
    for (int i=0;i<5;i++)
    {
        vAux2[i]=0;
    }
}
///////////////////////////////////////////////Daditos/////////////////////////////////////////////////////////////////
void msg(){
    rlutil::locate(30, 4);
    cout<<"\t---------------------------------------------"<<endl;
    rlutil::locate(33, 5);
    cout<<"DADO 1:"<<endl;
    rlutil::locate(43, 5);
    cout<<"DADO 2:"<<endl;
    rlutil::locate(53, 5);
    cout<<"DADO 3:"<<endl;
    rlutil::locate(63, 5);
    cout<<"DADO 4:"<<endl;
    rlutil::locate(73, 5);
    cout<<"DADO 5:"<<endl;
}
void msg2(){
    rlutil::locate(30, 4);
    cout<<"\t---------------------------------------------"<<endl;
    rlutil::locate(33, 5);
    cout<<"DADO 1:"<<endl;
    rlutil::locate(43, 5);
    cout<<"DADO 2:"<<endl;
    rlutil::locate(53, 5);
    cout<<"DADO 3:"<<endl;
    rlutil::locate(63, 5);
    cout<<"DADO 4:"<<endl;
    rlutil::locate(73, 5);
    cout<<"DADO 5:"<<endl;
}

///////////////////////////////////////////////Carga de numeros/////////////////////////////////////////////////////////

void cargarCubilete(int v[], int tam, int limite){
    int i;
    srand(time(NULL));
        for( i=0; i<tam; i++ )
        {
        v[i]=(rand()%limite)+1;
        }
}

void mostrarCubileteNormal(int v[], int aux){
    for(int i=0;i<aux;i++)
    {
        cout<<"\t"<<v[i];
    }
}


///////////////////////////////////////////////Vector de dados guardados/////////////////////////////////////////////////////////

  void mostrarCubileteAux(int vAux[], int aux){
    rlutil::locate(42, 21);
    cout<<"Dados guardados:"<<endl;
    for(int i=0;i<aux;i++)
    {
    rlutil::locate(42+(i+2), 22);
    cout<<vAux[i]<<"\t";
    }
}
void mostrarCubileteAux2(int vAux2[], int aux2){
    rlutil::locate(42, 21);
    cout<<"Dados guardados:"<<endl;
    for(int i=0;i<aux2;i++)
    {
    rlutil::locate(42+(i+2), 22);
    cout<<vAux2[i]<<"\t";
    }
}

///////////////////////////////////////////////Orden de dados de menor a mayor/////////////////////////////////////////////////////////

void ordenarDados (int vAux[]){
    for(int i=0;i<5;i++)
        {
        int posmin=i;
        for(int j=i+1;j<5;j++)
            {
            if(vAux[j]<vAux[posmin])
                posmin=j;
            }
            int aux=vAux[i];
        vAux[i]=vAux[posmin];
        vAux[posmin]=aux;
        }
}
///////////////////////////////////////////////Submenu auxiliar/////////////////////////////////////////////////////////

void continuar(int tiradasp1){

    if (tiradasp1<3)
            {
            rlutil::locate(42, 24);
            cout<<"-Tirar de nuevo?"<<endl;
             rlutil::locate(42, 25);
            cout<<"1. Si"<<endl;
             rlutil::locate(42, 26);
            cout<<"0. No"<<endl;
            }
}


void continuar2(int tiradasp2){

    if (tiradasp2<3)
            {
            rlutil::locate(42, 24);
            cout<<"-Tirar de nuevo?"<<endl;
             rlutil::locate(42, 25);
            cout<<"1. Si"<<endl;
             rlutil::locate(42, 26);
            cout<<"0. No"<<endl;
            }
}
///////////////////////////////////////////////Impresion de mensaje y opciones/////////////////////////////////////////////////////////

void guardarDados(){
    char vCreate[16]={'G','u','a','r','d','a','r',' ','d','a','d','o','s','?'};
        {
        cout<<"\t\t\t\t---------------------------------------------"<<endl;
        rlutil::locate(42, 8);
        rlutil::CursorHider hider;
            for(int i=0; i<15;i++)
            {
            rlutil::setChar(vCreate[15]);
            std::cout.flush();
            rlutil::msleep(50);
            cout<<vCreate[i];
            }
        cout<<endl;
        cout<<"\t\t\t\t---------------------------------------------"<<endl;
        cout<<"\t\t\t\t|1. Si\t\t\t\t\t|   |"<<endl;
        cout<<"\t\t\t\t|0. No\t\t\t\t\t|   |"<<endl;
        cout<<"\t\t\t\t---------------------------------------------"<<endl;
        rlutil::locate(65, 11);
        cout<<"Opcion:\t\t\t\t\t\ "<<endl;
        }
}

///////////////////////////////////////////FUNCIONES JUGADAS PREMIADAS P1/////////////////////////////////////////////////////////////////////
bool generala(int vAux[]){
    int contador=1, numero;
    bool premio=false;
    for (int i=0;i<5;i++ )
    {
        if(i==0)
        {
            if(vAux[i]>0)
            {
               numero=vAux[i];
            }

        }
        else if(numero==vAux[i] && vAux[i]>0)
        {
            contador++;
        }
    }
    if(contador==5)
    {
       return true;
    }
    else
    {
        return false;
    }
}

bool poker(int vAux[]){
    int contador=0, numero;
    if(vAux[4]>0)
    {
        numero=vAux[4]; /// POSICION 0=3 POSICION 1=0 POSICION 2=0 POSICION 3=0 POSICION 4=0
    }
    for (int i=4;i>=0;i--)
    {
        if (vAux[i]==numero)
        {
          contador++;
        }
    }
    if(contador==4)
    {
     return true;
    }
    else
    {
    return false;
    }
}

bool escalera(int vAux[]){
    ordenarDados(vAux);
    bool premio=true;
    ///ESCALERA 1 2 3 4 5
    if(vAux[0]==1 || vAux[0]==2)
    {

        for (int i=0;i<3;i++)
        {
             if(vAux[i]!=vAux[i+1]-1)
             {
                 premio=false;
             }
        }
    }
    else
    {
        premio=false;
    }
    return premio;
}

bool fullHouse(int vAux[]){
    int val1=-1, val2=-1, count1=0, count2=0;
    for (int x=0;x<5;x++)
    {
        if(vAux[x]>0)
        {
            if(x==0)
            {
                val1=vAux[x];
            }
        }
        if((vAux[x]!=val1)&&(vAux[x]>0))
        {
            if(val2==-1)
            {
              val2=vAux[x];
            }

        }

    }
    ///val1=2 val2=3
    for (int j=0;j<5;j++)
    {
        if(vAux[j]==val1)
        {
            count1++;///2
        }
        else if(vAux[j]==val2)
        {
            count2++;///2
        }
    }
    if((count1==3&&count2==2)||(count1==2&&count2==3))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int dadosInd1(int vAux[]){
    int tot1=0;
    for (int i=0;i<5;i++)
    {
        if(vAux[i]==1)
        {
            tot1+=1;
        }
    }
    if(tot1>0)
    {
        return tot1;
    }
    else{
        return 0;
    }
}

int dadosInd2(int vAux[]){
    int tot2=0;
    for (int i=0;i<5;i++)
    {
        if(vAux[i]==2)
        {
            tot2+=2;
        }
    }
    if(tot2>0)
    {
        return tot2;
    }
    else{
        return 0;
    }
}

int dadosInd3(int vAux[]){
    int tot3=0;
    for (int i=0;i<5;i++)
    {
        if(vAux[i]==3)
        {
            tot3+=3;
        }
    }
    if(tot3>0)
    {
        return tot3;
    }
    else{
        return 0;
    }
}

int dadosInd4(int vAux[]){
    int tot4=0;
    for (int i=0;i<5;i++)
    {
        if(vAux[i]==4)
        {
            tot4+=4;
        }
    }
    if(tot4>0)
    {
        return tot4;
    }
    else{
        return 0;
    }
}
int dadosInd5(int vAux[]){
    int tot5=0;
    for (int i=0;i<5;i++)
    {
        if(vAux[i]==5)
        {
            tot5+=5;
        }
    }
    if(tot5>0)
    {
        return tot5;
    }
    else{
        return 0;
    }
}

int dadosInd6(int vAux[]){
    int tot6=0;
    for (int i=0;i<5;i++)
    {
        if(vAux[i]==6)
        {
            tot6+=6;
        }
    }
    if(tot6>0)
    {
        return tot6;
    }
    else{
        return 0;
    }
}
void verify(int vAux[], int vPunt[]){
    int tot1=dadosInd1(vAux);
    int tot2=dadosInd2(vAux);
    int tot3=dadosInd3(vAux);
    int tot4=dadosInd4(vAux);
    int tot5=dadosInd5(vAux);
    int tot6=dadosInd6(vAux);
    bool puntosAl1=false;
    bool puntosAl2=false;
    bool puntosAl3=false;
    bool puntosAl4=false;
    bool puntosAl5=false;
    bool puntosAl6=false;
    int contador=0;
       if (tot1>0)
        {
            if(vPunt[0]==-1)
            {
                puntosAl1=true;
            }
        }
        if (tot2>0)
        {
            if(vPunt[1]==-1)
            {
              puntosAl2=true;
            }
        }
        if (tot3>0)
        {
            if(vPunt[2]==-1)
                {
                  puntosAl3=true;
                }
        }
        if (tot4>0)
        {
            if(vPunt[3]==-1)
                {
                    puntosAl4=true;
                }
        }
        if (tot5>0)
        {
            if(vPunt[4]==-1)
            {
                puntosAl5=true;
            }
        }
        if (tot6>0)
        {
            if(vPunt[5]==-1)
            {
                puntosAl6=true;
            }
        }

        for (int i=0;i<10;i++)
        {
            if(vPunt[i]==-1) ///Verifica si hay anulaciones de jugadas disponibles
            {
                contador++;
            }
        }
    cout<<"Jugadas disponibles:"<<endl;
    if (puntosAl1==true){cout<<"Puede anotar "<<tot1<<" puntos al 1 (OPCION 1)"<<endl;}
    if (puntosAl2==true){cout<<"Puede anotar "<<tot2<<" puntos al 2(OPCION 2)"<<endl;}
    if (puntosAl3==true){cout<<"Puede anotar "<<tot3<<" puntos al 3(OPCION 3)"<<endl;}
    if (puntosAl4==true){cout<<"Puede anotar "<<tot4<<" puntos al 4(OPCION 4)"<<endl;}
    if (puntosAl5==true){cout<<"Puede anotar "<<tot5<<" puntos al 5(OPCION 5)"<<endl;}
    if (puntosAl6==true){cout<<"Puede anotar "<<tot6<<" puntos al 6(OPCION 6)"<<endl;}
    if (escalera(vAux)==true)
    {
       if (vPunt[6]==-1){cout<<"Puede anotar 25 puntos a la escalera(OPCION 7)"<<endl;}
    }

    if (fullHouse(vAux)==true)
    {
        if (vPunt[7]==-1){cout<<"Puede anotar 30 puntos al full(OPCION 8)"<<endl;}
    }
    if (poker(vAux)==true)
    {
        if (vPunt[8]==-1){cout<<"Puede anotar 40 puntos al poker(OPCION 9)"<<endl;}
    }
    if (generala(vAux)==true)
    {
        if (vPunt[9]==-1){cout<<"Puede anotar 50 puntos a la generala(OPCION 10)"<<endl;}
    }
        if (contador>=1)
    {
        cout<<"Si tuviste mala suerte, podes anular una jugada (OPCION 11)"<<endl;
    }
}

void anotacion(int vAux[], int vPunt[]){
    int tot1=dadosInd1(vAux);
    int tot2=dadosInd2(vAux);
    int tot3=dadosInd3(vAux);
    int tot4=dadosInd4(vAux);
    int tot5=dadosInd5(vAux);
    int tot6=dadosInd6(vAux);
    bool puntosAl1=false;
    bool puntosAl2=false;
    bool puntosAl3=false;
    bool puntosAl4=false;
    bool puntosAl5=false;
    bool puntosAl6=false;
       if (tot1>0)
        {
            if(vPunt[0]==-1)
            {
                puntosAl1=true;
            }
        }
        if (tot2>0)
        {
            if(vPunt[1]==-1)
            {
              puntosAl2=true;
            }
        }
        if (tot3>0)
        {
            if(vPunt[2]==-1)
                {
                  puntosAl3=true;
                }
        }
        if (tot4>0)
        {
            if(vPunt[3]==-1)
                {
                    puntosAl4=true;
                }
        }
        if (tot5>0)
        {
            if(vPunt[4]==-1)
            {
                puntosAl5=true;
            }
        }
        if (tot6>0)
        {
            if(vPunt[5]==-1)
            {
                puntosAl6=true;
            }
        }
    cout<<"Seleccione una opcion:"<<endl;
    int opcion;
    cin>>opcion;
    switch(opcion){
        case 1: if(vPunt[0]==-1)
                {
                    if(puntosAl1==true)
                    {
                        vPunt[0]+=(tot1+1);
                    }
                }
                else
                {
                    cout<<"Opcion incorrecta. Seleccione una opcion valida."<<endl;
                }
                break;
        case 2: if(vPunt[1]==-1)
                {
                    if(puntosAl2==true)
                    {
                        vPunt[1]+=(tot2+1);
                    }
                }
                else
                {
                    cout<<"Opcion incorrecta. Seleccione una opcion valida."<<endl;
                }
                break;
        case 3:if(vPunt[2]==-1)
                {
                    if(puntosAl3==true)
                    {
                        vPunt[2]+=(tot3+1);
                    }
                }
                else
                {
                    cout<<"Opcion incorrecta. Seleccione una opcion valida."<<endl;
                }
                break;
        case 4:if(vPunt[3]==-1)
                {
                    if(puntosAl4==true)
                    {
                        vPunt[3]+=(tot4+1);
                    }
                }
                else
                {
                    cout<<"Opcion incorrecta. Seleccione una opcion valida."<<endl;
                }
                break;
        case 5:if(vPunt[4]==-1)
                {
                    if(puntosAl5==true)
                    {
                        vPunt[4]+=(tot5+1);
                    }
                }
                else
                {
                    cout<<"Opcion incorrecta. Seleccione una opcion valida."<<endl;
                }
                break;
        case 6:if(vPunt[5]==-1)
                {
                    if(puntosAl6==true)
                    {
                        vPunt[5]+=(tot6+1);
                    }
                }
                break;
        case 7: if(escalera(vAux)==true)
                    {
                        if(vPunt[6]==-1)
                        {
                            vPunt[6]=25;
                        }
                        else
                        {
                            cout<<"Opcion incorrecta. Seleccione una opcion valida."<<endl;
                        }
                    }
                 break;
        case 8:  if(fullHouse(vAux)==true)
                {
                    if(vPunt[7]==-1)
                    {
                    vPunt[7]=30;
                    }
                    else
                    {
                        cout<<"Opcion incorrecta. Seleccione una opcion valida."<<endl;
                    }
                }
                 break;
        case 9:  if(poker(vAux)==true)
                {
                    if(vPunt[8]==-1)
                    {
                        vPunt[8]=40;
                    }
                    else
                    {
                        cout<<"Opcion incorrecta. Seleccione una opcion valida."<<endl;
                    }
                }
                 break;
        case 10: if(generala(vAux)==true)
                {
                    if (vPunt[9]==-1)
                    {
                        vPunt[9]=50;
                    }
                    else
                    {
                        cout<<"Opcion incorrecta. Seleccione una opcion valida."<<endl;
                    }
                }
                break;
        case 11: cout<<"Seleccione que jugada quiere anular:"<<endl;
                 int anular, cont=1;
                    for (int w=0;w<10;w++)
                    {
                        if (vPunt[w]==-1)
                        {
                            if(w>=0&&w<=5){cout<<"Puede anular la jugada: "<<w+1<<"(OPCION "<<w+1<<")"<<endl;}
                            if(w==6){cout<<"Puede anular la jugada: Escalera(OPCION "<<w+1<<")"<<endl;}
                            if(w==7){cout<<"Puede anular la jugada: Full house (OPCION "<<w+1<<")"<<endl;}
                            if(w==8){cout<<"Puede anular la jugada: Poker(OPCION "<<w+1<<")"<<endl;}
                            if(w==9){cout<<"Puede anular la jugada: Generala(OPCION "<<w+1<<")"<<endl;}
                        }
                    }
                 while(cont==1)
                {
                    cin>>anular;
                    if (vPunt[anular-1]==-1)
                    {
                        vPunt[anular-1]=0;
                        cont=0;
                    }
                    else
                    {
                        cout<<"Opcion incorrecta."<<endl;
                    }
                }
                break;
            }
    system("cls");
}
////////////////////////////////////////////////////////////JUGADAS PREMIADAS P2///////////////////////////////////////////////////////
bool generala2(int vAux2[]){
    int contador=1, numero;
    bool premio=false;
    for (int i=0;i<5;i++ )
    {
        if(i==0)
        {
            if(vAux2[i]>0)
            {
              numero=vAux2[i];
            }

        }
        else if(numero==vAux2[i] && vAux2[i]>0)
        {
            contador++;
        }
    }
    if(contador==5)
    {
       return true;
    }
    else
    {
        return false;
    }
}

bool poker2(int vAux2[]){
    int contador=0, numero;
    if(vAux2[4]>0)
    {
        numero=vAux2[4]; /// POSICION 0=3 POSICION 1=0 POSICION 2=0 POSICION 3=0 POSICION 4=0
    }
    for (int i=4;i>=0;i--)
    {
        if (vAux2[i]==numero)
        {
          contador++;
        }
    }
    if(contador==4)
    {
     return true;
    }
    else
    {
    return false;
    }
}

bool escalera2(int vAux2[]){
    ordenarDados(vAux2);
    bool premio=true;
    ///ESCALERA 1 2 3 4 5
    if(vAux2[0]==1 || vAux2[0]==2)
    {

        for (int i=0;i<3;i++)
        {
             if(vAux2[i]!=vAux2[i+1]-1)
             {
                 premio=false;
             }
        }
    }
    else
    {
        premio=false;
    }
    return premio;
}

bool fullHouse2(int vAux2[]){
    int val1=-1, val2=-1, count1=0, count2=0;
    for (int x=0;x<5;x++)
    {
        if(vAux2[x]>0)
        {
            if(x==0)
            {
                val1=vAux2[x];
            }
        }
        if((vAux2[x]!=val1)&&(vAux2[x]>0))
        {
            if(val2==-1)
            {
              val2=vAux2[x];
            }

        }

    }
    ///val1=2 val2=3
    for (int j=0;j<5;j++)
    {
        if(vAux2[j]==val1)
        {
            count1++;///2
        }
        else if(vAux2[j]==val2)
        {
            count2++;///2
        }
    }
    if((count1==3&&count2==2)||(count1==2&&count2==3))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int dadosInd1p2(int vAux2[]){
    int tot1=0;
    for (int i=0;i<5;i++)
    {
        if(vAux2[i]==1)
        {
            tot1+=1;
        }
    }
    if(tot1>0)
    {
        return tot1;
    }
    else{
        return 0;
    }
}

int dadosInd2p2(int vAux2[]){
    int tot2=0;
    for (int i=0;i<5;i++)
    {
        if(vAux2[i]==2)
        {
            tot2+=2;
        }
    }
    if(tot2>0)
    {
        return tot2;
    }
    else{
        return 0;
    }
}

int dadosInd3p2(int vAux2[]){
    int tot3=0;
    for (int i=0;i<5;i++)
    {
        if(vAux2[i]==3)
        {
            tot3+=3;
        }
    }
    if(tot3>0)
    {
        return tot3;
    }
    else{
        return 0;
    }
}

int dadosInd4p2(int vAux2[]){
    int tot4=0;
    for (int i=0;i<5;i++)
    {
        if(vAux2[i]==4)
        {
            tot4+=4;
        }
    }
    if(tot4>0)
    {
        return tot4;
    }
    else{
        return 0;
    }
}
int dadosInd5p2(int vAux2[]){
    int tot5=0;
    for (int i=0;i<5;i++)
    {
        if(vAux2[i]==5)
        {
            tot5+=5;
        }
    }
    if(tot5>0)
    {
        return tot5;
    }
    else{
        return 0;
    }
}

int dadosInd6p2(int vAux2[]){
    int tot6=0;
    for (int i=0;i<5;i++)
    {
        if(vAux2[i]==6)
        {
            tot6+=6;
        }
    }
    if(tot6>0)
    {
        return tot6;
    }
    else{
        return 0;
    }
}
void verify2(int vAux2[], int vPunt2[]){
    int tot1=dadosInd1p2(vAux2);
    int tot2=dadosInd2p2(vAux2);
    int tot3=dadosInd3p2(vAux2);
    int tot4=dadosInd4p2(vAux2);
    int tot5=dadosInd5p2(vAux2);
    int tot6=dadosInd6p2(vAux2);
    bool puntosAl1=false;
    bool puntosAl2=false;
    bool puntosAl3=false;
    bool puntosAl4=false;
    bool puntosAl5=false;
    bool puntosAl6=false;
    int contador2=0;
       if (tot1>0)
        {
            if(vPunt2[0]==-1)
            {
                puntosAl1=true; ///Verifica si hay anotaciones disponibles para el 1
            }
        }
        if (tot2>0)
        {
            if(vPunt2[1]==-1)
            {
              puntosAl2=true; ///Verifica si hay anotaciones disponibles para el 2
            }
        }
        if (tot3>0)
        {
            if(vPunt2[2]==-1)
                {
                  puntosAl3=true; ///Verifica si hay anotaciones disponibles para el 3
                }
        }
        if (tot4>0)
        {
            if(vPunt2[3]==-1)
                {
                    puntosAl4=true; ///Verifica si hay anotaciones disponibles para el 4
                }
        }
        if (tot5>0)
        {
            if(vPunt2[4]==-1)
            {
                puntosAl5=true; ///Verifica si hay anotaciones disponibles para el 5
            }
        }
        if (tot6>0)
        {
            if(vPunt2[5]==-1)
            {
                puntosAl6=true; ///Verifica si hay anotaciones disponibles para el 6
            }
        }
        for (int i=0;i<10;i++)
        {
            if(vPunt2[i]==-1) ///Verifica si hay anulaciones de jugadas disponibles
            {
                contador2++;
            }
        }
    cout<<"Jugadas disponibles:"<<endl;
    if (puntosAl1==true){cout<<"Puede anotar "<<tot1<<" puntos al 1 (OPCION 1)"<<endl;}
    if (puntosAl2==true){cout<<"Puede anotar "<<tot2<<" puntos al 2(OPCION 2)"<<endl;}
    if (puntosAl3==true){cout<<"Puede anotar "<<tot3<<" puntos al 3(OPCION 3)"<<endl;}
    if (puntosAl4==true){cout<<"Puede anotar "<<tot4<<" puntos al 4(OPCION 4)"<<endl;}
    if (puntosAl5==true){cout<<"Puede anotar "<<tot5<<" puntos al 5(OPCION 5)"<<endl;}
    if (puntosAl6==true){cout<<"Puede anotar "<<tot6<<" puntos al 6(OPCION 6)"<<endl;}
    if (escalera2(vAux2)==true)
    {
       if (vPunt2[6]==-1){cout<<"Puede anotar 25 puntos a la escalera(OPCION 7)"<<endl;}
    }

    if (fullHouse2(vAux2)==true)
    {
        if (vPunt2[7]==-1){cout<<"Puede anotar 30 puntos al full(OPCION 8)"<<endl;}
    }
    if (poker2(vAux2)==true)
    {
        if (vPunt2[8]==-1){cout<<"Puede anotar 40 puntos al poker(OPCION 9)"<<endl;}
    }
    if (generala2(vAux2)==true)
    {
        if (vPunt2[9]==-1){cout<<"Puede anotar 50 puntos a la generala(OPCION 10)"<<endl;}
    }
    if (contador2>=1)
    {
        cout<<"Si tuviste mala suerte, podes anular una jugada (OPCION 11)"<<endl;
    }

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void anotacion2(int vAux2[], int vPunt2[]){
    int tot1=dadosInd1p2(vAux2);
    int tot2=dadosInd2p2(vAux2);
    int tot3=dadosInd3p2(vAux2);
    int tot4=dadosInd4p2(vAux2);
    int tot5=dadosInd5p2(vAux2);
    int tot6=dadosInd6p2(vAux2);
    bool puntosAl1=false;
    bool puntosAl2=false;
    bool puntosAl3=false;
    bool puntosAl4=false;
    bool puntosAl5=false;
    bool puntosAl6=false;
       if (tot1>0)
        {
            if(vPunt2[0]==-1)
            {
                puntosAl1=true;
            }
        }
        if (tot2>0)
        {
            if(vPunt2[1]==-1)
            {
              puntosAl2=true;
            }
        }
        if (tot3>0)
        {
            if(vPunt2[2]==-1)
                {
                  puntosAl3=true;
                }
        }
        if (tot4>0)
        {
            if(vPunt2[3]==-1)
                {
                    puntosAl4=true;
                }
        }
        if (tot5>0)
        {
            if(vPunt2[4]==-1)
            {
                puntosAl5=true;
            }
        }
        if (tot6>0)
        {
            if(vPunt2[5]==-1)
            {
                puntosAl6=true;
            }
        }
    cout<<"Seleccione una opcion:"<<endl;
    int opcion;
    cin>>opcion;
    switch(opcion){
        case 1: if(vPunt2[0]==-1)
                {
                    if(puntosAl1==true)
                    {
                        vPunt2[0]+=(tot1+1);
                    }
                }
                else
                {
                    cout<<"Opcion incorrecta. Seleccione una opcion valida."<<endl;
                }
                break;
        case 2: if(vPunt2[1]==-1)
                {
                    if(puntosAl2==true)
                    {
                        vPunt2[1]+=(tot2+1);
                    }
                }
                else
                {
                    cout<<"Opcion incorrecta. Seleccione una opcion valida."<<endl;
                }
                break;
        case 3:if(vPunt2[2]==-1)
                {
                    if(puntosAl3==true)
                    {
                        vPunt2[2]+=(tot3+1);
                    }
                }
                else
                {
                    cout<<"Opcion incorrecta. Seleccione una opcion valida."<<endl;
                }
                break;
        case 4:if(vPunt2[3]==-1)
                {
                    if(puntosAl4==true)
                    {
                        vPunt2[3]+=(tot4+1);
                    }
                }
                else
                {
                    cout<<"Opcion incorrecta. Seleccione una opcion valida."<<endl;
                }
                break;
        case 5:if(vPunt2[4]==-1)
                {
                    if(puntosAl5==true)
                    {
                        vPunt2[4]+=(tot5+1);
                    }
                }
                else
                {
                    cout<<"Opcion incorrecta. Seleccione una opcion valida."<<endl;
                }
                break;
        case 6:if(vPunt2[5]==-1)
                {
                    if(puntosAl6==true)
                    {
                        vPunt2[5]+=(tot6+1);
                    }
                }
                else
                {
                    cout<<"Opcion incorrecta. Seleccione una opcion valida."<<endl;
                }
                break;
        case 7: if(escalera2(vAux2)==true)
                {
                    if(vPunt2[6]==-1)
                    {
                        vPunt2[6]=25;
                    }
                    else
                    {
                        cout<<"Opcion incorrecta. Seleccione una opcion valida."<<endl;
                    }
                }

                 break;
        case 8:  if(fullHouse2(vAux2)==true)
                {
                    if(vPunt2[7]==-1)
                    {
                        vPunt2[7]=30;
                    }
                    else
                    {
                        cout<<"Opcion incorrecta. Seleccione una opcion valida."<<endl;
                    }
                }
                 break;
        case 9:  if(poker2(vAux2)==true)
                {
                    if(vPunt2[8]==-1)
                    {
                        vPunt2[8]=40;
                    }
                    else
                    {
                        cout<<"Opcion incorrecta. Seleccione una opcion valida."<<endl;
                    }
                }
                 break;
        case 10: if(generala2(vAux2)==true)
                {
                    if (vPunt2[9]==-1)
                    {
                        vPunt2[9]=50;
                    }
                    else
                    {
                        cout<<"Opcion incorrecta. Seleccione una opcion valida."<<endl;
                    }
                }
                break;
        case 11: cout<<"Seleccione que jugada quiere anular:"<<endl;
                 int anular, cont=1;
                    for (int w=0;w<10;w++)
                    {
                        if (vPunt2[w]==-1)
                        {
                            if(w>=0&&w<=5){cout<<"Puede anular la jugada: "<<w+1<<"(OPCION "<<w+1<<")"<<endl;}
                            if(w==6){cout<<"Puede anular la jugada: Escalera(OPCION "<<w+1<<")"<<endl;}
                            if(w==7){cout<<"Puede anular la jugada: Full house (OPCION "<<w+1<<")"<<endl;}
                            if(w==8){cout<<"Puede anular la jugada: Poker(OPCION "<<w+1<<")"<<endl;}
                            if(w==9){cout<<"Puede anular la jugada: Generala(OPCION "<<w+1<<")"<<endl;}
                        }
                    }
                 while(cont==1)
                {
                    cin>>anular;
                    if (vPunt2[anular-1]==-1)
                    {
                        vPunt2[anular-1]=0;
                        cont=0;
                    }
                    else
                    {
                        cout<<"Opcion incorrecta."<<endl;
                    }
                }
                break;
            }
    system("cls");
}

int puntuacion(int vPunt[]){
    int puntuacionTotal=0;
    for(int j=0;j<10;j++)
    {
        if (vPunt[j]>0){puntuacionTotal+=vPunt[j];}
    }
    return puntuacionTotal;
}
int puntuacion2(int vPunt2[]){
    int puntuacionTotal2=0;
    for(int j=0;j<10;j++)
    {
        if (vPunt2[j]>0){puntuacionTotal2+=vPunt2[j];}
    }
    return puntuacionTotal2;
}

int maximo (int score, int vPunt[], int vPunt2[], char player1[], char player2[]){
    int puntuacionTotal=0, puntuacionTotal2=0;
    for(int j=0;j<10;j++) ///PUNTAJE TOTAL P1
    {
        if (vPunt[j]>0){puntuacionTotal+=vPunt[j];}
    }
    for(int i=0;i<10;i++) ///PUNTAJE TOTAL P2
    {
        if (vPunt2[i]>0){puntuacionTotal2+=vPunt2[i];}
    }
    if(puntuacionTotal>puntuacionTotal2)
    {
        if (puntuacionTotal>score)
        {
           return puntuacionTotal; ///GANADOR P1
        }

    }
    else if(puntuacionTotal2>puntuacionTotal)
    {
        if (puntuacionTotal2>score)
        {
           return puntuacionTotal2;///GANADOR P2
        }

    }
    else
    {
        return 3;///EMPATE
    }

}




///////////////////////////////////////////////Cartel entre turnos/////////////////////////////////////////////////////////
void proxTurnoSP(char player1[], int p, int tiradasTotales, int puntuacionTotal){ /// CARTEL P1
    int column, row;
    for (column = 0; column < 80; ++column)
    {
        cout << "*";
    }
    cout << "\n";
    for (row = 0; row < 8; ++row)
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

    printf("Ronda numero: ");
    cout<<p;
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    COORD d;
    d.X = 35;
    d.Y = 3;

    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), d);

    printf("Del jugador: ");
    printf(player1);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    COORD e;
    e.X = 35;
    e.Y = 4;

    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), e);

    printf("Puntaje:");
    cout<<puntuacionTotal<<endl;
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    COORD f;
    f.X = 35;
    f.Y = 5;

    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), f);

    printf("Lanzamientos:");
    cout<<tiradasTotales;

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    COORD g;
    g.X = 35;
    g.Y = 6;

    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), g);

    printf("Proximo turno: ");
    printf(player1);
}

void proxTurno(char player1[], char player2[], int p, int tiradasTotales1, int puntuacionTotal){ /// CARTEL P1
    int column, row;
    for (column = 0; column < 80; ++column)
    {
        cout << "*";
    }
    cout << "\n";
    for (row = 0; row < 8; ++row)
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

    printf("Ronda numero: ");
    cout<<p;
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    COORD d;
    d.X = 35;
    d.Y = 3;

    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), d);

    printf("Del jugador: ");
    printf(player1);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    COORD e;
    e.X = 35;
    e.Y = 4;

    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), e);

    printf("Puntaje:");
    cout<<puntuacionTotal<<endl;
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    COORD f;
    f.X = 35;
    f.Y = 5;

    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), f);

    printf("Lanzamientos:");
    cout<<tiradasTotales1;

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    COORD g;
    g.X = 35;
    g.Y = 6;

    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), g);

    printf("Proximo turno: ");
    printf(player2);
}

///////////////////////////////////////////////Cartel entre turnos/////////////////////////////////////////////////////////

void proxTurno2(char player1[], char player2[], int p, int tiradasTotales2, int puntuacionTotal2){ ///CARTEL P2
    int column, row;
    for (column = 0; column < 80; ++column)
    {
        cout << "*";
    }
    cout << "\n";
    for (row = 0; row < 8; ++row)
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

    printf("Ronda numero: ");
    cout<<p;
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    COORD d;
    d.X = 35;
    d.Y = 3;

    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), d);

    printf("Del jugador: ");
    printf(player2);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    COORD e;
    e.X = 35;
    e.Y = 4;

    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), e);

    printf("Puntaje:");
    cout<<puntuacionTotal2<<endl;
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    COORD f;
    f.X = 35;
    f.Y = 5;

    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), f);

    printf("Lanzamientos:");
    cout<<tiradasTotales2;

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    COORD g;
    g.X = 35;
    g.Y = 6;

    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), g);

    printf("Proximo turno: ");
    printf(player1);
}

///////////////////////////////////////////////FIN DEL JUEGO/////////////////////////////////////////////////////////
void endGame(char player1[], int tiradasTotales, int puntuacionFinal){
    system("cls");
    int column, row;
    for (column = 0; column < 80; ++column)
    {
        cout << "*";
    }
    cout << "\n";
    for (row = 0; row < 8; ++row)
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
    c.X = 2;
    c.Y = 2;

    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), c);

    printf("---------------------------------FIN DEL JUEGO---------------------------");

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    COORD d;
    d.X = 35;
    d.Y = 3;

    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), d);

    printf("EL JUGADOR:");
    printf(player1);


    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    COORD e;
    e.X = 35;
    e.Y = 4;

    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), e);

    printf("LOGRO UNA PUNTUACION FINAL DE:");
    cout<<puntuacionFinal<<endl;

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    COORD f;
    f.X = 35;
    f.Y = 5;

    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), f);

    printf("EN ");
    cout<<tiradasTotales;
    printf(" LANZAMIENTOS.");
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    COORD g;
    g.X = 2;
    g.Y = 6;

    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), g);

    printf("---------------------------------------------------------------------- ");
}


void endgameMultiplayer(char player1[], char player2[], int tiradasTotales, int tiradasTotales2, int puntuacionFinal, int puntuacionFinal2){
    system("cls");
    int column, row;
    for (column = 0; column < 80; ++column)
    {
        cout << "*";
    }
    cout << "\n";
    for (row = 0; row < 12; ++row)
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
    c.X = 2;
    c.Y = 2;

    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), c);

    printf("---------------------------------FIN DEL JUEGO---------------------------");

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    COORD d;
    d.X = 35;
    d.Y = 3;

    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), d);

    printf("EL JUGADOR:");
    printf(player1);


    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    COORD e;
    e.X = 35;
    e.Y = 4;

    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), e);

    printf("LOGRO UNA PUNTUACION FINAL DE:");
    cout<<puntuacionFinal<<endl;

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    COORD f;
    f.X = 35;
    f.Y = 5;

    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), f);

    printf("EN ");
    cout<<tiradasTotales;
    printf(" LANZAMIENTOS.");
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    COORD g;
    g.X = 2;
    g.Y = 6;

    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), g);

    printf("---------------------------------------------------------------------- ");

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    COORD h;
    h.X = 35;
    h.Y = 7;

    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), h);

    printf("EL JUGADOR:");
    printf(player2);


    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    COORD i;
    i.X = 35;
    i.Y = 8;

    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), i);

    printf("LOGRO UNA PUNTUACION FINAL DE:");
    cout<<puntuacionFinal2<<endl;

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    COORD j;
    j.X = 35;
    j.Y = 9;

    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), j);

    printf("EN ");
    cout<<tiradasTotales2;
    printf(" LANZAMIENTOS.");
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    COORD k;
    k.X = 2;
    k.Y = 10;

    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), k);

    printf("---------------------------------------------------------------------- ");
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    COORD l;
    l.X = 35;
    l.Y = 11;

    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), l);
    if(puntuacionFinal>puntuacionFinal2)
    {
        printf("GANADOR: ");
        cout<<player1<<"!";
    }
    if(puntuacionFinal2>puntuacionFinal)
    {
        printf("GANADOR: ");
        cout<<player2<<"!";
    }
    if(puntuacionFinal2==puntuacionFinal)
    {
        printf("EMPATE!");
    }

}

#endif // FUNCIONES_H_INCLUDED
