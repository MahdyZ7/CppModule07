/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:29:51 by ayassin           #+#    #+#             */
/*   Updated: 2022/12/10 01:10:41 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP
#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : arr(new T[0]), len(0)
{
}

template <typename T>
Array<T>::Array(int n)
{
	if (n < 0)
		throw "Error: Negative size";
	arr = new T[n];
	len = n;
}

template <typename T>
Array<T>::Array(Array const &src) : arr(new T[src.len]), len(src.len)
{
	for (unsigned int i = 0; i < len; i++)
		arr[i] = src.arr[i];
}

template <typename T>
Array<T>::~Array(void)
{
	delete [] arr;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &other)
{
	if (this != &other)
	{
		delete [] arr;
		arr = new T[other.len];
		len = other.len;
		for (unsigned int i = 0; i < len; i++)
			arr[i] = other.arr[i];
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int i) const
{
	if (i >= len)
		throw "Error: Index out of range";
	return arr[i];
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return len;
}

template <typename T>
std::ostream &operator<<(std::ostream &os, Array<T> const &other)
{
	os << "List has " << other.size() << " elements: ";
	for (unsigned int i = 0; i < other.size(); i++)
		os << other[i] << " ";
	return os;
}
#endif