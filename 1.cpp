#include <iostream>
#include <complex>

using namespace std;

template <class Tamano>

inline void pedir(Tamano& a,Tamano& b,Tamano c){
	if (c==0){
		cout <<" Dame el valor de la coordenada x del primer punto: ";
	    cin >> a;
		cout <<" Dame el valor de la coordenada y del primer punto: ";
	    cin >> b;
	}else{
		cout <<" Dame el valor de la coordenada x del segundo punto: ";
	    cin >> a;
		cout <<" Dame el valor de la coordenada y del segundo punto: ";
	    cin >> b;
	}
}
template <class Tam>
inline void pendiente(Tam& a,Tam& b,Tam& c,Tam& d,Tam& pend){
	pend = (d-b)/(c-a);
}

int main (void) {
	int punto1[2],punto2[2],cont=0,pend=0;
	pedir(punto1[0],punto1[1],cont);
	cont++;
	pedir(punto2[0],punto2[1],cont);
	cont=0;
	pendiente(punto1[0],punto1[1],punto2[0],punto2[1],pend);
	cout <<" Los puntos que me diste son: (" << punto1[0]<< "," <<punto1[1]<< "),(" << punto2[0]<< "," <<punto2[1]<< ")" <<endl;
	cout <<" La pendiente entre estos dos puntos es: " <<pend<<endl;
	return 0;
}
