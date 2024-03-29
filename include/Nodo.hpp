#ifndef NODO_HPP
#define NODO_HPP

template<typename T>
class Nodo {
private:
    T dato ;
    Nodo<T>* siguiente;
public:
    // Constructor.
    Nodo(T dato);

    // Pre: -
    // Post: Devuelve un puntero al nodo siguiente.
    Nodo<T>* obtener_siguiente();

    // Pre: -
    // Post: Cambia el puntero al nodo siguiente.
    void cambiar_siguiente(Nodo<T>* nuevo);

    // Pre: -
    // Post: Devuelve el dato almacenado.
    T obtener_dato();

    // Destructor.
    ~Nodo();

};

template <typename T>
Nodo<T>::Nodo(T valor) {
    dato = valor ;
    siguiente = nullptr;
}

template<typename T>
Nodo<T>* Nodo<T>::obtener_siguiente() {
    return siguiente;
}

template <typename T>
void Nodo<T>::cambiar_siguiente(Nodo<T> *nuevo) {
    siguiente = nuevo;
}

template <typename T>
T Nodo<T>::obtener_dato() {
    return dato;
}

template<typename T>
Nodo<T>::~Nodo() {}

#endif