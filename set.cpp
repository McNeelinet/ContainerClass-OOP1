#include "set.h"
#include <stdexcept>
#include <iostream>


template <class T>
Iterator<T>::Iterator(const set<T>& container_obj)
{

}

/* Конструкторы */
template <class T>
set<T>::set()
{

}

template <class T>
set<T>::set(const set<T>& s)
{

}

template <class T>
set<T>::set(set<T>&& s)
{

}

template <class T>
set<T>::set(std::initializer_list<T> lst)
{

}

/* Полезное */
template <class T>
int set<T>::get_length() const
{

}

template <class T>
bool set<T>::contains(const T& elem) const
{

}

template <class T>
T* set<T>::to_array() const
{

}

/* Получение итераторов */
template <class T>
Iterator<T> set<T>::iterator_begin() const
{

}

template <class T>
Iterator<T> set<T>::iterator_end() const
{

}

/*        Getter'ы        */
template <class T>
node<T>* set<T>::get_first() const
{

}

template <class T>
node<T>* set<T>::get_last() const
{

}

/* Манипуляции с размером */
template <class T>
void set<T>::add(const T& elem)
{

}

template <class T>
void set<T>::remove(const T& elem)
{

}

template <class T>
void set<T>::clear()
{

}

/* Операции множества */
template <class T>
set<T>& set<T>::set_union(const set<T>& s) const
{

}

template <class T>
set<T>& set<T>::set_intersection(const set<T>& s) const
{

}

template <class T>
set<T>& set<T>::set_substract(const set<T>& s) const
{

}

/* Перегрузка операций */
template <class T>
set<T>& set<T>::operator= (const set<T>& s)
{

}

template <class T>
set<T>& set<T>::operator+= (const set<T>& s)
{

}

template <class T>
set<T>& set<T>::operator*= (const set<T>& s)
{

}

template <class T>
set<T>& set<T>::operator/= (const set<T>& s)
{

}

template <class _T>
std::ostream& operator<< (std::ostream& os, const set<_T>& lst)
{

}

template <class _T>
set<_T> operator+ (const set<_T>& s1, const set<_T>& s2)
{

}

template <class _T>
set<_T> operator* (const set<_T>& s1, const set<_T>& s2)
{

}

template <class _T>
set<_T> operator/ (const set<_T>& s1, const set<_T>& s2)
{

}

/* Деструктор */
template <class T>
set<T>::~set<T>()
{

}
