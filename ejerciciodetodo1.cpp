/* 
Escribe un porgrama que
presente un menú al usuario,

1 introducir la matriz 
2 visualizar la matriz
3 rotar la matriz hacia la derecha
4 cambiar filas por columnas 
5 sumar filas con culmnas
6 Salir 

*/

#include<iostream>
using namespace std;
int main()
{
    int matrizintro [3][3];
    int matrizvisual [3][3];
    int matrizrotdere [3][3];
    int matriztraspuesta [3][3];
    int matrizsuma [3][3];
    int suma=0;
    int opcion;
  do
 {
    cout<<"\t-------MENU------ \n";
    cout<<"1.- Introducir la matriz (3x3) \n";
    cout<<"2.- Visualizar la matriz\n";
    cout<<"3.- Rotar la matriz hacia la derecha\n";
    cout<<"4.- Cambiar filas por columnas (Matriz traspuesta)\n";
    cout<<"5.- Sumar filas con culmnas\n";
    cout<<"6.- Salir\n";
    cin>>opcion;

    switch(opcion)
    {
        case 1:
        for(int i=0;i<3;i++)
    
         {
         for(int j=0;j<3;j++)
          {
          cout<<"Digite un número ["<<i<<"]["<<j<<"]"<<endl;
          cin>>matrizintro[i][j];
          }
         }
          break;
        case 2:
        for(int i=0;i<3;i++)
    
         {
        for(int j=0;j<3;j++)
         {
            matrizvisual[i][j]=matrizintro[i][j];
         }
         }

        cout<<"\t2.- Visualizar la matriz\n"<<endl;

         for(int i=0;i<3;i++)//filas.
         {
           for(int j=0;j<3;j++)
           {
            cout<<matrizvisual[i][j]<<"   ";
           }
           cout<<"\n";
         }
           break;

         case 3:
            for(int i=0;i<3;i++)
            {
             for(int j=0;j<3;j++)
            {
            matrizrotdere[i][j]=matrizvisual[i][j];
            }
            }
             for(int i=0;i<3;i++)
            {
              for(int j=0;j<3;j++)
             {
                 if(j==2)//j es la que manejamos como columnas es==2 lo estamos pasando a la posición 1 y 2´
                 {
                   matrizrotdere[i][0]=matrizvisual[i][j];
                 }   
                 else
                  {
                    matrizrotdere[i][j+1]=matrizvisual[i][j];
                  }
             }
            }

                  for(int i=0;i<3;i++)
                  {
                    for(int j=0;j<3;j++)
                      {
                        matrizintro[i][j]=matrizrotdere[i][j];//copiamos nuestra matriz ya modificada de nuestro seundo for 
                                             //va a ser matrizintro porque en el caso dos se copia a la matrizvisual y a su vez lo imprime
                      }
                   }
                   break;

             case 4:

                     for(int i=0;i<3;i++)
                        {
                            for(int j=0;j<3;j++)
                           {
                              matriztraspuesta[i][j]=matrizintro[j][i];
                             }

                        }
                     for(int i=0;i<3;i++)
                       {
                          for(int j=0;j<3;j++)
                        {
                          matrizintro[i][j]=matriztraspuesta[i][j];//copiamos nuestra matriz ya modificada de nuestro seundo for 
                                             //va a ser matrizintro porque en el caso dos se copia a la matrizvisual y a su vez lo imprime
                         }
                        }
                     break;

              case 5:

                 for(int i=0;i<3;i++)
                 {
                  for(int j=0;j<3;j++)
                 {
                      matrizsuma[i][j]=matrizintro[i][j];//copiamos nuestra matriz ya modificada de nuestro seundo for 
                                             //va a ser matrizintro porque en el caso dos se copia a la matrizvisual y a su vez lo imprime
                 }
                 }

                   for(int i=0;i<3;i++)
                  {
                   for(int j=0;j<3;j++)
                   {
                      suma+=matrizsuma[i][j]; //+=es lo mismomque " suma +matrizsuma"
                    }
                    cout<<"La suma de filas y columnas de la matriz es : "<<suma<<endl;      
                   }
      break;

     default:

     cout<<"Seleccciona una opción correcta:";

     break;

    }

}while(opcion != 6);//si es diferente de seis entonces se cierra el bucle.


}