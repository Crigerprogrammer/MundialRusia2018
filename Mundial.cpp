#include <iostream.h>
#include <stdlib.h>
#include <conio.h>


/************************************************
          STRUCT SELECCION
***********************************************/
struct Equipo{
  char nombre_seleccion[50];  //Nombre del equipo
   char sede[30];             //Nombre de la sede que participara
   int titulos;               //Numero de titulos que ha recibido
} Seleccion[32];


/************************************************
          STRUCT ESTADIOS
***********************************************/
struct estadios{
  char ciudad[50];               //Nombre de la ciudad del estadio
  int capacidad;                 //Cuantas personas pueden haber en el estadio
  char nombre_estadio[50];       //Nombre del estadio
  char descripcion_estadio[100]; //Descripcion breve del estadio
} Campos[15];


/************************************************
          STRUCT JUGADORES
***********************************************/
struct jugadores{
  char nombre_equipo[40];     //Nombre de la seleccion que pertenece
  char rol[35];               //Rol de la persona 
  char nombre_jugador[35];    //Nombre del jugador
  char apellido_jugador[35];  //Apellido del jugador
  int edad_jugador;           //Edad del jugador
  int camisola;               //Numero de camisola del jugador
  char posicion_jugador[35];  //En que posicion juega el futbolista
  double estatura;            //Altura del jugador
} Jugador[640];

/********************************************************+
              FUNCION MOSTRAR MATCHES
********************************************************/ 
void mostrar_juegos()
{
  cout<<"Estos son los juegos: "<<endl;
  cout<<Seleccion[0].nombre_seleccion<<"\t\tVS\t\t"<<Seleccion[1].nombre_seleccion<<endl;
  cout<<Seleccion[2].nombre_seleccion<<"\t\tVS\t\t"<<Seleccion[3].nombre_seleccion<<endl;
  cout<<Seleccion[4].nombre_seleccion<<"\t\tVS\t\t"<<Seleccion[5].nombre_seleccion<<endl;
  cout<<Seleccion[6].nombre_seleccion<<"\t\tVS\t\t"<<Seleccion[7].nombre_seleccion<<endl;
  cout<<Seleccion[8].nombre_seleccion<<"\t\tVS\t\t"<<Seleccion[9].nombre_seleccion<<endl;
  cout<<Seleccion[10].nombre_seleccion<<"\t\tVS\t\t"<<Seleccion[11].nombre_seleccion<<endl;
  cout<<Seleccion[12].nombre_seleccion<<"\t\tVS\t\t"<<Seleccion[13].nombre_seleccion<<endl;
  cout<<Seleccion[14].nombre_seleccion<<"\t\tVS\t\t"<<Seleccion[15].nombre_seleccion<<endl;
  cout<<Seleccion[16].nombre_seleccion<<"\t\tVS\t\t"<<Seleccion[17].nombre_seleccion<<endl;
  cout<<Seleccion[18].nombre_seleccion<<"\t\tVS\t\t"<<Seleccion[19].nombre_seleccion<<endl;
  cout<<Seleccion[20].nombre_seleccion<<"\t\tVS\t\t"<<Seleccion[21].nombre_seleccion<<endl;
  cout<<Seleccion[22].nombre_seleccion<<"\t\tVS\t\t"<<Seleccion[23].nombre_seleccion<<endl;
  cout<<Seleccion[24].nombre_seleccion<<"\t\tVS\t\t"<<Seleccion[25].nombre_seleccion<<endl;
  cout<<Seleccion[26].nombre_seleccion<<"\t\tVS\t\t"<<Seleccion[27].nombre_seleccion<<endl;
  cout<<Seleccion[28].nombre_seleccion<<"\t\tVS\t\t"<<Seleccion[29].nombre_seleccion<<endl;
  cout<<Seleccion[30].nombre_seleccion<<"\t\tVS\t\t"<<Seleccion[31].nombre_seleccion<<endl;

}


/********************************************************+
              FUNCION MOSTRAR ESTATURA
********************************************************/ 
void mostrar_estatura(int num_estatura)
{
  cout<<"Estos son los registros de Estatura: "<<endl;
  for (int i = 0; i < num_estatura; i++)
  {
    cout<<Jugador[i].estatura<<endl;
  }
}


/********************************************************+
              FUNCION MOSTRAR POSICION
********************************************************/ 
void mostrar_posicion(int num_posicion)
{
  cout<<"Estos son los registros de posicion: "<<endl;
  for (int i = 0; i < num_posicion; i++)
  {
    cout<<Jugador[i].posicion_jugador<<endl;
  }
}

/********************************************************+
              FUNCION MOSTRAR CAMISOLA
********************************************************/ 
void mostrar_camisola(int num_camisola)
{
  cout<<"Estos son los registros de camisola"<<endl;
  for (int i = 0; i < num_camisola; i++)
  {
    cout<<Jugador[i].camisola<<endl;
  }
}

/********************************************************+
              FUNCION MOSTRAR EDAD
********************************************************/ 
void mostrar_edad(int num_edad)
{
  cout<<"Estos son los registros de Edad: "<<endl;
  for (int i = 0; i < num_edad; i++)
  {
    cout<<Jugador[i].edad_jugador<<endl;
  }
}

/********************************************************+
              FUNCION MOSTRAR APELLIDO
********************************************************/ 
void mostrar_apellido(int apellidos)
{
  cout<<"Estos son los registros de apellidos: "<<endl;
  for (int i = 0; i < apellidos; i++)
  {
    cout<<Jugador[i].apellido_jugador<<endl;
  }
}

/********************************************************+
              FUNCION MOSTRAR NOMBRE J
********************************************************/   
void mostrar_nombre_jugador(int no_jugador)
{
  cout<<"Estos son los registros de nombre de Jugador: "<<endl;
  for (int i = 0; i < no_jugador; i++)
  {
    cout<<Jugador[i].nombre_jugador<<endl;
  }
}      

/********************************************************+
              FUNCION MOSTRAR ROL
********************************************************/
void mostrar_rol(int num_rol)
{
  cout<<"Estos son los registros por rol: "<<endl;
  for (int i = 0; i < num_rol; i++)
  {
    cout<<Jugador[i].rol<<endl;
  }
}

/********************************************************+
              FUNCION MOSTRAR EQUIPO
********************************************************/
void mostrar_nombre_equipo(int num_equipo)
{
  cout<<"Estos son los registros de equipos :" <<endl;
  for (int i = 0; i < num_equipo; i++)
  {
    cout<<Jugador[i].nombre_equipo<<endl;
  }
}

/********************************************************+
              FUNCION MOSTRAR DESCRIPCION
********************************************************/
void mostrar_descripcion(int num_descripcion)
{
  cout<<"Estos son los registros por medio de descripcion: "<<endl;
  for (int i = 0; i < num_descripcion; i++)
  {
     cout<<Campos[i].descripcion_estadio<<endl;
  }
}

/********************************************************+
              FUNCION MOSTRAR NOMBRE ESTADIO
********************************************************/
void mostrar_nombre_estadio(int num_estadios)
{
  cout<<"Estos som los registros que se encontraron por nombre de estadio: "<<endl;
  for (int i=0; i < num_estadios; i++)
  {
    cout<<Campos[i].nombre_estadio<<endl;
  }
}


/********************************************************+
              FUNCION MOSTRAR CAPACIDAD
********************************************************/
void mostrar_capacidad(int num_capacidad)
{
  cout<<"Estos son los registros que se encontraron por capacidad: "<<endl;
  for (int i=0; i < num_capacidad; i++)
  {
    cout<<Campos[i].capacidad<<endl;
  }
}

/********************************************************+
              FUNCION MOSTRAR CIUDAD
********************************************************/
void mostrar_ciudad(int num_ciudad)
{
  cout<<"Estos son los registros que se encontraron por ciudad: "<<endl;
  for (int i=0; i < num_ciudad; i++)
  {
    cout<<Campos[i].ciudad<<endl;
  }
}

/********************************************************+
              FUNCION MOSTRAR TITULOS
********************************************************/
void mostrar_titulos(int num_titulos){
   cout<<"Estos son los registros que se encontraron por titulos: "<<endl;
       for (int k=0; k < num_titulos; k++)
          {
              cout<<Seleccion[k].titulos<<endl;
           }
}


/********************************************************+
              FUNCION MOSTRAR NOMBRE SEDES
********************************************************/

void mostrar_sedes(int num_sede){

  cout<<"Estos son los registros que se encontraron por sede: "<<endl;
     for (int j=0; j < num_sede; j++)
     {
      cout<<Seleccion[j].sede<<endl;
     }

}

/********************************************************+
              FUNCION MOSTRAR NOMBRE SELECCIONES
********************************************************/

void mostrar_nombre_seleccion(int n_nombres){
  cout<<"Estos son los registros que se encontraron por nombre: "<<endl;
     for (int i=0; i < n_nombres; i++)
       {
         cout<<Seleccion[i].nombre_seleccion<<endl;
      }
}


/************************************************
          FUNCION DE REGISTRO JUGADORES
***********************************************/
void registro_jugador(int n_jugadores)
{
  for (int i=0; i < n_jugadores; i++)
  {
    cout<<"\nJUGADOR "<<(i+1)<<"\n";

    cin.ignore(); cout<<"Nombre del equipo que pertenece: "<<endl;
    cin.getline( Jugador[i].nombre_equipo, 40);
    cin.ignore(); cout<<"Rol que desempeña el jugador: "<<endl;
    cin.getline( Jugador[i].rol, 35);
    cin.ignore(); cout<<"Nombre del Jugador: "<<endl;
    cin.getline( Jugador[i].nombre_jugador, 35);
    cin.ignore(); cout<<"Apellido del Jugador: "<<endl;
    cin.getline( Jugador[i].apellido_jugador, 35);
    cin.ignore(); cout<<"Edad del jugador: "<<endl;
    cin>>Jugador[i].edad_jugador;
    cin.ignore(); cout<<"Numero de Camisola: "<<endl;
    cin>>Jugador[i].camisola;
    cin.ignore(); cout<<"Posicion del jugador: "<<endl;
    cin.getline( Jugador[i].posicion_jugador, 35);
    cin.ignore(); cout<<"Estatura del jugador (Metros): "<<endl;
    cin>>Jugador[i].estatura; 
  }
}

/************************************************
     FUNCION FIN DE REGISTRO JUGADORES
***********************************************/

/************************************************
          FUNCION DE REGISTRO ESTADIOS
***********************************************/
void registro_estadio(int n_estadios)
{
  for (int i=0; i < n_estadios; i++)
  {
    cout<<"\nESTADIO "<<(i+1) << "\n";

    cin.ignore(); cout<<"Nombre de la Ciudad: "<<endl;
    cin.getline( Campos[i].ciudad, 30);
    cin.ignore(); cout<<"Cuanta capacidad tiene el estadio: "<<endl;
    cin>>Campos[i].capacidad;
    cin.ignore(); cout<<"Nombre del Estadio: "<<endl;
    cin.getline( Campos[i].nombre_estadio, 35);
    cin.ignore(); cout<<"Descripcion breve del estadio: "<<endl;
    cin.getline( Campos[i].descripcion_estadio, 200);
  }
}

/************************************************
  FIN  FUNCION DE REGISTRO ESTADIOS
***********************************************/


/************************************************
          FUNCION DE REGISTRO SELECCIONES
***********************************************/
void registro_seleccion(int n)
{

  for (int i=0; i < n; i++)
  {
    cout<<"\nSELECCION "<< (i+1) << "\n";

    cin.ignore(); cout<<"Nombre Seleccion: "<<endl;
    cin.getline( Seleccion[i].nombre_seleccion, 30 );
    cin.ignore(); cout<<"Sede que Participara: "<<endl;
    cin.getline( Seleccion[i].sede, 30 );
    cin.ignore(); cout<<"Cantidad de Titulos Obtenidos"<<endl;
    cin>>Seleccion[i].titulos;

  }
}
/************************************************
     fin  FUNCION DE REGISTRO SELECCIONES
***********************************************/


/************************************************
          FUNCION DE LOS DESARROLLADORES
***********************************************/
void grupo(){

  cout<<" Las siguientes personas apoyaron al desarrollo de este software\n\n"<<endl;
  cout<<"\t\t Cristian Gerardo Hernandez Barrios"                                 <<endl;
  cout<<"\t\t Carne: 0900-15-549"                                                 <<endl;
  cout<<"\t\t Hector Rodrigo Melendez Melgas"                                     <<endl;
  cout<<"\t\t Carne: 0900-10-2166"                                                <<endl;
  cout<<"\t\t Cristian Alexander Estrada Cruz"                                    <<endl;
  cout<<"\t\t Carne: 0900-14-21875"                                               <<endl;         

}
/************************************************
      FIN    FUNCION DE LOS DESARROLLADORES
***********************************************/

/************************************************
          MENU PRINCIPAL
***********************************************/
void menu_principal(){

   cout<<"\n\t\t Bienvenidos al Mundial Rusia 2018\n\n"<<endl;
   cout<<"\t\t   1.- Registra una Seleccion "          <<endl;
   cout<<"\t\t   2.- Registra un Estadio"              <<endl;
   cout<<"\t\t   3.- Registra un Jugador"              <<endl;
   cout<<"\t\t   4.- Buscar una Seleccion"             <<endl;
   cout<<"\t\t   5.- Buscar un Estadio"                <<endl;
   cout<<"\t\t   6.- Buscar a un Jugador"              <<endl;
   cout<<"\t\t   7.- Eliminar datos"                    <<endl;
   cout<<"\t\t   8.- Ver a los desarrolladores"        <<endl;
   cout<<"\t\t   9.- Ver partidos"                     <<endl;
   cout<<"\t\t   10.- Salir del Programa"              <<endl;

   cout<<"\n\t Ingrese su opcion"                      <<endl;
}
//Final funcion de Menu

/************************************************
          MENU BUSQUEDA
***********************************************/

void menu_busqueda1(){

  cout<<"\n\t\t Bienvenido al menu de Busqueda de Seleccion\n\n"<<endl;
  cout<<"\t\t 1.- Mostrar por nombre de Seleccion "             <<endl;
  cout<<"\t\t 2.- Mostrar por sede "                            <<endl;
  cout<<"\t\t 3.- Mostrar titulos"                              <<endl;
  cout<<"\t\t 4.- Salir del programa"                           <<endl;

  cout<<"\n\t Ingrese su opcion"                                <<endl;
}

/************************************************
          MENU ESTADIOS
***********************************************/
void menu_estadios(){

  cout<<"\n\t\t Bienvenido al menu de Busqueda de Estadios\n\n"<<endl;
  cout<<"\t\t 1.- Mostrar por Ciudad"                          <<endl;
  cout<<"\t\t 2.- Mostrar por Capacidad"                       <<endl;
  cout<<"\t\t 3.- Mostrar por Nombre de Estadio"               <<endl;
  cout<<"\t\t 4.- Mostrar por Descripcion del Estadio"         <<endl;
  cout<<"\t\t 5.- Salir del Programa"                          <<endl;

  cout<<"\t Ingrese su opcion"                                 <<endl;
} 

/************************************************
          MENU JUGADORES
***********************************************/
void menu_jugadores()
{

  cout<<"\n\t\t Bienvenido al menu de Busqueda de Jugadores\n\n"<<endl;
  cout<<"\t\t 1.- Mostrar a que equipo Pertenece"               <<endl;
  cout<<"\t\t 2.- Mostrar Rol del Jugador"                      <<endl;
  cout<<"\t\t 3.- Mostrar Nombre del Jugador"                   <<endl;
  cout<<"\t\t 4.- Mostrar Apellido del Jugador"                 <<endl;
  cout<<"\t\t 5.- Mostrar Edad del Jugador"                     <<endl;
  cout<<"\t\t 6.- Mostrar Numero de Camisola del Jugador"       <<endl;
  cout<<"\t\t 7.- Mostrar Posicion que Juega"                   <<endl;
  cout<<"\t\t 8.- Mostrar Estatura del Jugador"                 <<endl;
  cout<<"\t\t 9.- Salir del Programa"                          <<endl;

  cout<<"\t Ingrese su Opcion"                                  <<endl;
}




/************************************************
          FUNCION PRINCIPAL
***********************************************/
int main(){
 //Declaracion de variables
 int opcion;
 int num=0; // Numero de Selecciones
 int num2=0; //Numero de Estadios
 int num3=0; //Numero de Jugadores
 int opcion2;
 int i, j, k;

 //Cambio de color
 system("color 0b");

 //Ciclo del menu de opciones
    do{
      //Lamamando a la funcion de menu principal
      menu_principal();
      cin >> opcion;

      //Creando switch para opcion de cada opcion en el menu
      switch(opcion)
      {
        //Funcion Registrar Seleccion
        case 1:
          system("cls");
          system("color 2");
          cout<<"\n Numero de Selecciones que quiere registrar (Maximo 32): "<<endl;
          cin>>num;
          registro_seleccion(num);
          cout<<endl;
          break;

        //Funcion Registrar un estadio
        case 2:
          system("cls");
          system("color 7");
          cout<<"\n Ingrese el numero de Estadios que desea registrar (Maximo 15): "<<endl;
          cin>>num2;
          registro_estadio(num2);
          cout<<endl;
          break;

        //Registrar un jugador
        case 3:
           system("cls");
           system("color 0b");
           cout<<"\n Ingrese el numero de Jugadores que quiere ingresar (Max 640): "<<endl;
           cin>>num3;
           registro_jugador(num3);
           cout<<endl;
           break;

        //Buscar una seleccion
        case 4:
            system("cls");
            system("color 7");
              do{
                //Llamar el menu de busqueda
                menu_busqueda1();
                cin>>opcion2;

                //Crear switch para cada caso
                switch(opcion2)
                {
                  //Funcion Mostrar Nombre Seleccion
                  case 1:
                    system("cls");
                    system("color 0b");
                    cout<<"Ingrese cuantos registros desea ver: "<<endl;
                    cin>>num;
                    mostrar_nombre_seleccion(num);
                  break;
                //Final del Case 1

                  case 2:
                    system("cls");
                    system("color 0b");
                    cout<<"Ingrese cuantos registros desea ver: "<<endl;
                    cin>>num;
                    mostrar_sedes(num);
                  break;
                  //Final del Case 2

                  case 3:
                    system("cls");
                    system("color 0b");
                    cout<<"Ingrese cuantos registros desea ver: "<<endl;
                    cin>>num;
                      mostrar_titulos(num);
                    break;
                    //Final del Case 3

                  case 4:
                      cout<<"\t\tGracias por usar el programa"<<endl;
                      system("pause");
                      return 0;
                  break;
                  //Final del Case 4

                }
              } while (opcion !=5);
          break;

        //Buscar un estadio
        case 5:
            system("cls");
            system("color 0b");
            do{
              menu_estadios();
              cin>>opcion2;

              //Creacion de Switch
              switch(opcion2)
              {
                case 1:
                cout<<"Ingrese cuantos registros desea ver: "<<endl;
                cin>>num;
                mostrar_ciudad(num);
                break;

                case 2:
                cout<<"Ingrese cuantos registros desea ver: "<<endl;
                cin>>num;
                mostrar_capacidad(num);
                break;

                case 3:
                cout<<"Ingrese cuantos registros desea ver: "<<endl;
                cin>>num;
                mostrar_nombre_estadio(num);
                break;

                case 4:
                cout<<"Ingrese cuantos registros desea ver: "<<endl;
                cin>>num;
                mostrar_descripcion(num);
                break;

                case 5:
                cout<<"Gracias por usar el programa"<<endl;
                system("pause");
                return 0;
                break;
              }
            }while(opcion2 != 5);
            break;

        //Buscar a un jugador
        case 6:
              system("cls");
              system("color 07");

              do{
                menu_jugadores();
                cin>>opcion2;

                switch(opcion2)
                {
                  case 1:
                  cout<<"Ingrese cuantos registros desea ver: "<<endl;
                  cin>>num;
                  mostrar_nombre_equipo(num);
                  break;

                  case 2:
                  cout<<"Ingrese cuantos registros desea ver: "<<endl;
                  cin>>num;
                  mostrar_rol(num);
                  break;

                  case 3:
                  cout<<"Ingrese cuantros registros desea ver: "<<endl;
                  cin>>num;
                  mostrar_nombre_jugador(num);
                  break;

                  case 4:
                  cout<<"Ingrese cuantos registros desea ver:" <<endl;
                  cin>>num;
                  mostrar_apellido(num);
                  break;

                  case 5:
                  cout<<"Ingrese cuantos registros desea ver:" <<endl;
                  cin>>num;
                  mostrar_edad(num);
                  break;

                  case 6:
                  cout<<"Ingrese cuantos registros desea ver: " <<endl;
                  cin>>num;
                  mostrar_camisola(num);
                  break;

                  case 7:
                  cout<<"Ingrese cuantos registros desea ver: " <<endl;
                  cin>>num;
                  mostrar_posicion(num);
                  break;

                  case 8:
                  cout<<"Ingrese cuantos registros desea ver: " <<endl;
                  cin>>num;
                  mostrar_estatura(num);
                  break;

                  case 9:
                  cout<<"Gracias por usar el programa"<<endl;
                  system("pause");
                  return 0;
                }

              }while(opcion2 != 11);

             break;

        //Eliminar datos
        case 7:
              system("cls");
              system("color 7");
              eliminar();
             break;

        //Mostrar a los desarrolladores
        case 8:
            system("cls");
            system("color 7");
            grupo();
            break;

        //Mostrar los partidos    
        case 9:
              system("cls");
              system("color 7");
              mostrar_juegos();
            break;

        //Terminar programa
        case 10:
            system("cls");
            cout<<"\t Gracias por usar el programa, esperamos que vuelvas"<<endl;
            system("pause");
            return 0;
      }

      cout <<endl<<endl;
      system("pause");
      system("cls");
    } while(opcion !=11);

 return 0;
}

/*******************************************************
                      FINAL FUNCION MAIN
*******************************************************/




