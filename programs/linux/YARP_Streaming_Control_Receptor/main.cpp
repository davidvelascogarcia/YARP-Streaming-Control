//****************************************************
//****************************************************
//
//              YARP: Streaming Control
//
//              Tipo: Receptor
//
//              Autor: David Velasco García
//		       @davidvelascogarcia
//
//****************************************************
//****************************************************

// Librerias

#include <iostream>
#include <yarp/os/all.h>
#include <yarp/sig/all.h>
#include <opencv2/opencv.hpp>
#include <opencv/cv.h>
#include <opencv/cvaux.h>
#include <opencv/highgui.h>


// Espacios de nombres

using namespace yarp::os;
using namespace yarp::sig;
using namespace yarp::sig::draw;
using namespace cv;
using namespace std;

int main()
{
    cout<< "Bienvenido al controlador de streaming vía YARP, modo receptor"<<endl;
    cout<<endl;
    cout<<endl;
    Network yarp;
    cout<<"Iniciando red de YARP"<<endl;
    Port puerto_receptor;
    puerto_receptor.open("/receptor_control");
    cout<<"Esperando órdenes..."<<endl;	

    while (true) {

        Bottle dato;
	puerto_receptor.read(dato);
        string datos=dato.toString();
	if(datos=="a"){
	cout<<"Moviendo hacia adelante"<<endl;
	}
	if(datos=="b"){
	cout<<"Moviendo hacia atrás"<<endl;
	}
	if(datos=="c"){
	cout<<"Moviendo hacia la derecha"<<endl;
	}
	if(datos=="d"){
	cout<<"Moviendo hacia la izquierda"<<endl;
	}
	if(datos=="e"){
	cout<<"Girando hacia la derecha"<<endl;
	}
	if(datos=="f"){
	cout<<"Girando hacia la izquierda"<<endl;
	}
	if(datos=="g"){
	cout<<"Mirando hacia la derecha"<<endl;
	}
	if(datos=="h"){
	cout<<"Mirando hacia la izquierda"<<endl;
	}
	if(datos=="i"){
	cout<<"Mirando hacia arriba"<<endl;
	}
	if(datos=="j"){
	cout<<"Mirando hacia abajo"<<endl;
	}
	if(datos=="k"){
	cout<<"Activando modo autónomo"<<endl;
	}
	if(datos=="l"){
	cout<<"Desactivando modo autónomo"<<endl;
	}
	if(datos=="m"){
	cout<<"Activando modo vigía"<<endl;
	}
	if(datos=="n"){
	cout<<"Desactivando modo vigía"<<endl;
	}
	if(datos=="o"){
	cout<<"Activando modo control telemático"<<endl;
	}
	if(datos=="p"){
	cout<<"Desactivando modo control telemático"<<endl;
	}
	if(datos=="r"){
	cout<<"Activando modo análisis"<<endl;
	}
	if(datos=="s"){
	cout<<"Desactivando modo análisis"<<endl;
	}
	if(datos=="y"){
	cout<<"Activando modo defensa"<<endl;
	}
	if(datos=="u"){
	cout<<"Desactivando modo defensa"<<endl;
	}
	if(datos=="q"){
	cout<<"Desconectando..."<<endl;
	}
   }
    return 0;
}

